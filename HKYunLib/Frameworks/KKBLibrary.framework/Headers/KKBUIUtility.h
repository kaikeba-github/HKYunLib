//
//  KKBUIUtility.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/19.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhoneNumberFormatTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBUIUtility : NSObject

+ (UIButton *)buttonWithTitleColor:(UIColor *)color font:(UIFont *)font;

+ (UIButton *)rightImageButtonWithTitleColor:(UIColor *)color font:(UIFont *)font;
+ (UIButton *)leftImageButtonWithTitleColor:(UIColor *)color font:(UIFont *)font;
+ (UIButton *)topImageButtonWithTitleColor:(UIColor *)color font:(UIFont *)font;
+ (UIButton *)bottomImageButtonWithTitleColor:(UIColor *)color font:(UIFont *)font;

+ (UILabel *)labelWithColor:(UIColor *)color font:(UIFont *)font;
+ (UILabel *)labelWithColor:(UIColor *)color font:(UIFont *)font alignment:(NSTextAlignment)alignment;

+ (UITextField *)textFieldWithColor:(UIColor *)color font:(UIFont *)font placeholder:(NSString *)placeholder placeholderColor:(UIColor *)placeholderColor;
+ (UITextField *)textFieldWithColor:(UIColor *)color font:(UIFont *)font placeholder:(NSString *)placeholder placeholderColor:(UIColor *)placeholderColor placeholderFont:(UIFont *)placeholderFont;

+ (PhoneNumberFormatTextField *)newPhoneTextField;

@end

NS_ASSUME_NONNULL_END
