//
//  KKBCardTableViewCell.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/22.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBCardTableViewCell : KKBBaseTableViewCell

@property (nonatomic, strong, readonly) UIView *cardContentView;
@property (nonatomic, assign) UIEdgeInsets cardEdges;

@property (nonatomic, assign) BOOL touchAnimation;

- (void)shake;

@end

NS_ASSUME_NONNULL_END
