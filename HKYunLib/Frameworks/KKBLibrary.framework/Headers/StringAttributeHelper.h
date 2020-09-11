//
//  StringAttributeHelper.h
//  HYStringAttribute
//
//  Created by HEYANG on 15/11/22.
//  Copyright © 2015年 HEYANG. All rights reserved.
//

/**
 *  category
 */
#import "NSString+StringAttribute.h"
#import "NSMutableAttributedString+StringAttribute.h"

/**
 *  concrete
 */
#import "FontAttribute.h"
#import "ForegroundColorAttribute.h"
#import "ParagraphStyleAttribute.h"

@interface StringAttributeHelper : NSObject

+ (NSAttributedString *)attributedStringWithImage:(UIImage *)image string:(NSString *)string font:(UIFont *)font color:(UIColor *)color imageFront:(BOOL)isFront sapcing:(CGFloat)spacing;
+ (NSAttributedString *)attributedStringWithImage:(UIImage *)image string:(NSString *)string font:(UIFont *)font color:(UIColor *)color imageFront:(BOOL)isFront sapcing:(CGFloat)spacing imageYOffset:(CGFloat)yOffset;
+ (NSAttributedString *)attributedStringWithImage:(UIImage *)image isOriginImageSize:(BOOL)origin string:(NSString *)string font:(UIFont *)font color:(UIColor *)color imageFront:(BOOL)isFront sapcing:(CGFloat)spacing imageYOffset:(CGFloat)yOffset;

@end
