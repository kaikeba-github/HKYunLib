//
//  KKBAlertController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//
#import <KKBLibrary/KKBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBAlertControllerStyle) {
    KKBAlertControllerStyle_Alert = 0,
    KKBAlertControllerStyle_ActionSheet = 1,
    KKBAlertControllerStyle_SlideTop = 2,
    KKBAlertControllerStyle_SlideLeft = 3,
    KKBAlertControllerStyle_SlideRight = 4,
};

@interface KKBAlertController : NSObject

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *backgroundView;

@property (nonatomic, copy) void (^dismissComplete)(void);

- (instancetype)initWithView:(UIView *)view style:(KKBAlertControllerStyle)style tapDismiss:(BOOL)tapDismissEnable;

@end

@interface KKBAlertViewController : KKBBaseViewController

@property (nonatomic, assign, readonly) KKBAlertControllerStyle style;
@property (nonatomic, assign, readonly) BOOL tapDismissEnable;

@property (nonatomic, copy) void (^dismissComplete)(void);

- (instancetype)initWithStyle:(KKBAlertControllerStyle)style tapDismiss:(BOOL)tapDismissEnable;

- (void)showInController:(UIViewController *)controller;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
