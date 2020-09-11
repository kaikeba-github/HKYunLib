//
//  UIImage+ColorImage.h
//  EduCloud
//
//  Created by Chu,Liangliang on 2017/8/25.
//  Copyright © 2017年 zdd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ColorImage)
+ (UIImage *)colorImage:(CGSize )size startColor:(UIColor *)sColor endColor:(UIColor *)eColor;
//纯色图片
+ (UIImage *)imageFromColor:(UIColor*)color;
+ (UIImage *)imageFromColor:(UIColor *)color imageSize:(CGSize)size;
//生成圆形图片
- (UIImage *)cutCircleImage;

//压缩图片到指定尺寸
-(UIImage *) compressOriginalImage:(UIImage *)image toSize:(CGSize)size;
@end
