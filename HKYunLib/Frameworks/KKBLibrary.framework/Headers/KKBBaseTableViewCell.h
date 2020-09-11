//
//  KKBBaseTableViewCell.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class RACSignal;

@interface KKBBaseTableViewCell : UITableViewCell

@property(nonatomic, strong, readonly) RACSignal *unbindSignal;

- (void)unbind;

+ (CGFloat)cellHeight;

- (void)createSubView;
- (void)bindViewModel;

@end

NS_ASSUME_NONNULL_END
