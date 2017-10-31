//
//  NSFileterManager.h
//  DBUpdate
//
//  Created by ZZG on 17/10/31.
//  Copyright © 2017年 admin. All rights reserved.
//

// 缓存执行标志类

#import <Foundation/Foundation.h>

@interface NSFileterManager : NSObject

+(void)setFilterRun:(NSString *)str;
+(NSString *)valueFilterRun;

@end
