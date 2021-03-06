//
//  WallPaperAPIManager.h
//  pixiv_wallpaper
//
//  Created by xyc on 2018/6/26.
//  Copyright © 2018年 xyc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WallPaperModel.h"

@interface WallPaperAPIManager : NSObject

+ (void)getTodayPixivWallPaper;

+ (void)getRandomWallPaper:(void(^)(WallPaperModel *model))complete;

+ (void)getNewestWallPaper:(void(^)(WallPaperModel *model))complete;

@end
