//
//  UIColor+HexColor.h
//
//  Created by ChangweiZhang on 15/3/30.
//  Copyright (c) 2015 ChangweiZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexColor)
+(UIColor *) colorFromHexString:(NSString*)hexString;
+(UIColor *) colorFromHexString:(NSString*)hexString alpha:(CGFloat)alpha;
+(UIColor *) colorFromHex:(NSUInteger)hex;
+(UIColor *) colorFromHex:(NSUInteger)hex alpha:(CGFloat)alpha;
@end
