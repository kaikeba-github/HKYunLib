//
//  UIView+ReSize.h
//  EagleApp
//
//  Created by duane on 2017/8/22.
//  Copyright © 2017年 duane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ReSize)

@property (nonatomic, assign) CGSize size;

@property (assign, nonatomic) CGPoint origin;

@property (nonatomic,assign) CGFloat x;

@property (nonatomic,assign) CGFloat y;

@property (nonatomic, assign) CGFloat top;

@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat left;

@property (nonatomic, assign) CGFloat right;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, readonly) CGFloat minX;

@property (nonatomic, readonly) CGFloat maxX;

@property (nonatomic, readonly) CGFloat minY;

@property (nonatomic, readonly) CGFloat maxY;

@end
