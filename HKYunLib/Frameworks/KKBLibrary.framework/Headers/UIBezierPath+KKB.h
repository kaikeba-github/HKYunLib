//
//  UIBezierPath+KKB.h
//  KKBLibrary
//
//  Created by Duane on 2019/9/27.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBezierPath (KKB)

/** 获取所有点*/
- (NSArray *)points;

/**
 绘制单个折线
 
 @param linesArray 单个折线数组
 @return 绘制的path
 */
+ (UIBezierPath *)drawLine:(NSMutableArray *)linesArray;

/**
 绘制多个折线
 
 @param linesArray 多个折线数组
 @return 绘制的path数组
 */
+ (NSMutableArray<__kindof UIBezierPath *> *)drawLines:(NSMutableArray<NSMutableArray *> *)linesArray;

/**
 *  The curve‘s bend level. The good value is about 0.6 ~ 0.8. The default and recommended value is 0.7.
 */
@property (nonatomic) CGFloat contractionFactor;

/**
 *  You must wrap CGPoint struct to NSValue object.
 *
 *  @param pointArray Points you want to through. You must give at least 1 point for drawing curve.
 */
- (void)addBezierThroughPoints:(NSArray *)pointArray;
- (void)addCurveThroughPoints:(NSArray *)pointArray;

@end

NS_ASSUME_NONNULL_END
