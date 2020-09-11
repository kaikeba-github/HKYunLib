//
//  KKBBaseScrollController.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/23.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBBaseScrollController : KKBBaseViewController <UIScrollViewDelegate>

@property (nonatomic, strong, nullable) UIScrollView *scrollView;

@property (nonatomic, assign) BOOL isFreshing;

@end

NS_ASSUME_NONNULL_END
