//
//  KKBInterfaceDomain.h
//  EduCloud
//
//  Created by zddMac on 2017/5/11.
//  Copyright © 2017年 zdd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, KKBInterfaceDomainType) {
    KKBInterfaceDomainType_Normal = 1, // 正式环境
    KKBInterfaceDomainType_Pre = 2, // 预览环境
    KKBInterfaceDomainType_QA = 3, // 测试环境
    KKBInterfaceDomainType_Dev = 4, // 开发环境
};

typedef KKBInterfaceDomainType(^KKBInterfaceDomainTypeBlock)(void);

@interface KKBInterfaceDomain : NSObject

+ (void)domainType:(KKBInterfaceDomainTypeBlock)block;

+ (KKBInterfaceDomainType)currentInterfaceDomainType;

+ (NSString *)urlFromDict:(NSDictionary<NSNumber *, NSString *> *)dict;

@end
