//
//  KKBBasicUtility.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/18.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBBasicUtility : NSObject

+ (UIEdgeInsets)iphoneSafeArea;

+ (void)gotoSystemAppSettings;
+ (void)gotoSystemLocationSettings;

+ (BOOL)locationAvailable;

+ (NSString *)getAppCurrentVersion;
+ (NSDictionary *)getWifiInfo;
+ (NSString *)getWifiSsid;

+ (NSString *)formatString:(NSString *)string split:(NSString *)split interval:(NSInteger)interval;

+ (NSString *)platform;
+ (NSString *)getUniqueIdentifier;
+ (CGFloat)systemVersion;

+ (NSBundle *)libraryBundle;

+ (NSString *)mainBundleDirectory;
+ (NSString *)documentDirectory;
+ (NSString *)cachesDirectory;
+ (BOOL)isIPadOrIPhone;

+ (BOOL)isValidateEmail:(NSString *)email;

+ (NSString *)numIntoCharacterExpression:(NSInteger)num;
+ (NSString *)fileSizeToString:(NSUInteger)llBytes;
+ (NSString *)durationToString:(NSTimeInterval)duration;
+ (NSDictionary *)urlParamStringToDictionary:(NSString *)paramStr;

+ (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)URL;

+ (void)impactFeedback;

@end

NS_ASSUME_NONNULL_END
