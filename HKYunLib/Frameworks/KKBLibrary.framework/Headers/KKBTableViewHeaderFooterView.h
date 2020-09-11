//
//  KKBTableViewHeaderFooterView.h
//  KKBLibrary
//
//  Created by Duane on 2019/4/25.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBTableViewHeaderFooterView : UITableViewHeaderFooterView

- (void)createSubView;
- (void)bindViewModel;

+ (CGFloat)viewHeight;

@end

NS_ASSUME_NONNULL_END
