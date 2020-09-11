//
//  UIView+KKBState.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/UIView+State.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (KKBState)

- (UIView *)stateViewWithImage:(UIImage *)image text:(NSString *)text;
- (UIView *)stateViewWithImage:(UIImage *)image text:(NSString *)text showCenter:(BOOL)isCenter;

- (void)setDefaultViewStateProperty:(nullable void(^)(void))retryBlock;
- (void)setDefaultViewStateProperty:(nullable void(^)(void))retryBlock backgroundColor:(nullable UIColor *)color;
- (void)setDefaultViewStatePropertyWithNetError:(nullable NSString *)netError nodataMsg:(nullable NSString *)nodataMsg retryBlock:(nullable void(^)(void))retryBlock;
- (void)setDefaultViewStatePropertyWithNetError:(nullable NSString *)netError nodataMsg:(nullable NSString *)nodataMsg retryBlock:(nullable void(^)(void))retryBlock backgroundColor:(nullable UIColor *)color;
- (void)setDefaultViewStatePropertyWithNetError:(nullable NSString *)netError nodataMsg:(nullable NSString *)nodataMsg retryBlock:(nullable void(^)(void))retryBlock backgroundColor:(nullable UIColor *)color showCenter:(BOOL)isCenter;
- (void)setDefaultViewStatePropertyWithNetError:(nullable NSString *)netError netErrorImage:(nullable UIImage *)netErrorImage nodataMsg:(nullable NSString *)nodataMsg nodataImage:(nullable UIImage *)nodataImage retryBlock:(nullable void(^)(void))retryBlock backgroundColor:(nullable UIColor *)color showCenter:(BOOL)isCenter;

@end

NS_ASSUME_NONNULL_END
