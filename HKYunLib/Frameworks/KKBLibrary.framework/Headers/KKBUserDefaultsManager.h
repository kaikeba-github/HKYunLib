//
//  KKBUserDefaultsManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/NSUserDefaultsModel.h>
#import <KKBLibrary/KKBBasicMacro.h>
#import <KKBLibrary/KKBInterfaceDomain.h>
#import <KKBLibrary/encrypt.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserDefaultsManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBUserDefaultsManager)

// 环境配置
KKBUD_Property_Enum(KKBInterfaceDomainType, interfaceDomainType);

@end

NS_ASSUME_NONNULL_END
