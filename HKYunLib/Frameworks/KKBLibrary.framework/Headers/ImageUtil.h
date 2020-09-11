//
//  ImageUtil.h
//  ImageProcessing
//
//  Created by Evangel on 10-11-23.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>

@interface UIImage(Util)

+ (CGSize) fitSize: (CGSize)thisSize inSize: (CGSize) aSize;

+ (UIImage *)imageFromView:(UIView *)theView withSize:(CGSize)size;

- (UIImage *)scaleToSize:(CGSize)newSize;
- (UIImage *)imageFitInSize:(CGSize)viewsize;
- (UIImage *)roundedRectImage:(CGSize)size;
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;
- (UIImage *)blackWhite;
- (UIImage *)cartoon;
- (UIImage *)memory;
- (UIImage *)bopo;
- (UIImage *)scanLine;
- (UIImage *)reflectedImageWithHeight:(NSUInteger)height;
- (UIImage *)imageByApplyingAlpha:(CGFloat)alpha;
- (UIImage *)blurryImageWithAccelerate:(CGFloat)blur;
- (UIImage *)blurryImageWithCoreImage:(CGFloat)radius;
- (UIImage *)blurredImageWithRadius:(CGFloat)radius iterations:(NSUInteger)iterations tintColor:(UIColor *)tintColor;

@end
