//
//  KKBUtility.h
//  KaiKeBaMaster
//
//  Created by Duane on 2019/3/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class PhoneNumberFormatTextField;

#define kDefaultHUDDuration 2

@interface KKBUtility : NSObject

+ (void)gotoAppStore:(NSString *)sKKBAppStoreId;
+ (void)classInAppDownloadNote;
+ (BOOL)openDingTalkUrl:(NSString*)targetUrl isPresent:(BOOL)present; // present表示钉钉打开方式通过Present进行转场，
+ (BOOL)dingTalkSupport;

+ (void)setHudStyle;
+ (void)showHUDLoading:(NSString *)message;
+ (void)showHUDSuccess:(NSString *)message;
+ (void)showHUDError:(NSString *)message;
+ (void)showHUDMessage:(NSString *)message;
+ (void)hideHUD;
+ (NSString *)typeFileExtensionWithName:(NSString *)name;

+ (NSString *)kkbMoneyString:(NSUInteger)money;
+ (NSString *)kkbShortMoneyString:(NSUInteger)money;

@end

NS_ASSUME_NONNULL_END
