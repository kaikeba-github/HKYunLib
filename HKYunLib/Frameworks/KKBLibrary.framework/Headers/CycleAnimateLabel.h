//
//  CycleAnimateLabel.h
//  BasicFrameworks
//
//  Created by duane on 2018/9/10.
//  Copyright © 2018年 duane. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CycleAnimateTransitionMode) {
    CycleAnimateTransitionToTop,
    CycleAnimateTransitionToBottom,
    CycleAnimateTransitionToLeft,
    CycleAnimateTransitionToRight
};

@interface CycleAnimateLabel : UIView

@property (nonatomic, copy) NSArray *textsArr;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, assign) NSTextAlignment textAlignment;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, assign) NSTimeInterval timeInterval;
@property (nonatomic, assign) CycleAnimateTransitionMode directionMode;

- (instancetype)initWithFrame:(CGRect)frame texts:(NSArray *)textsArr;

- (void)startCycling;

- (void)stopCycling;

@end
