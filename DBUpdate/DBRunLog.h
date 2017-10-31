//
//  DBRunLog.h
//  DBUpdate
//
//  Created by ZZG on 17/10/31.
//  Copyright © 2017年 admin. All rights reserved.
//

// 数据库更新日志
#import <Foundation/Foundation.h>

@interface DBRunLog : NSObject

/** 数据库更新集合*/
@property (nonatomic, strong) NSMutableDictionary * logDBMDict;

@end
