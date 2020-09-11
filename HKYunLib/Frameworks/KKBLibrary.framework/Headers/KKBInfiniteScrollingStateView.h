//
//  KKBInfiniteScrollingStateView.h
//  KKBLibrary
//
//  Created by Duane on 2019/4/29.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBInfiniteScrollingTriggeredView : KKBBaseView

@property (nonatomic, strong, readonly) UILabel *label;

@end

@interface KKBInfiniteScrollingStoppedView : KKBBaseView

@property (nonatomic, strong, readonly) UILabel *label;

@end

@interface KKBInfiniteScrollingLoadingView : KKBBaseView

- (void)startAnimating;
- (void)stopAnimating;
- (void)showFinishMessage;

@end

NS_ASSUME_NONNULL_END
