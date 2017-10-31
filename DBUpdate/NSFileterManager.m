//
//  NSFileterManager.m
//  DBUpdate
//
//  Created by ZZG on 17/10/31.
//  Copyright © 2017年 admin. All rights reserved.
//


#import "NSFileterManager.h"

static NSString * FILTER = @"userinfolist";

@implementation NSFileterManager

+(void)setFilterRun:(NSString *)str {
    [[NSUserDefaults standardUserDefaults] setObject:FILTER forKey:str];
}
+(NSString *)valueFilterRun{
    return [[NSUserDefaults standardUserDefaults] objectForKey:FILTER];
}

@end
