//
//  KKBBaseViewController.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <KKBLibrary/KKBNaviView.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBBaseViewController : UIViewController

@property (nonatomic, strong, readonly) KKBNaviView *customNaviView;

@property (nonatomic, strong, class, nullable) UIColor *backgroundColor;

- (void)doAfterViewDidAppear:(void(^)(void))delayBlock;
- (void)contentSizeDidChange:(NSString*)size;

- (BOOL)interactivePopGestureRecognizer;

- (void)createSubView;
- (void)bindViewModel;

- (void)leftNaviButtonClicked:(UIButton *)sender;
- (void)rightNaviButtonClicked:(UIButton *)sender;

@end

NS_ASSUME_NONNULL_END
