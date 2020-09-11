//
//  KKBPullToRefreshStateView.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/23.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBPullToRefreshTriggeredView : KKBBaseView

@property (nonatomic, strong, readonly) UILabel *label;

@end

@interface KKBPullToRefreshStoppedView : KKBBaseView

@property (nonatomic, strong) NSDate *lastUpdateTime;

- (void)reloadTime;

@end

@interface KKBPullToRefreshLoadingView : KKBBaseView

- (void)startAnimating;
- (void)stopAnimating;
- (void)showFinishMessage;

@end

NS_ASSUME_NONNULL_END
