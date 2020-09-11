//
//  KKBCardCollectionViewCell.h
//  KKBUIFramework
//
//  Created by Duane on 2020/4/3.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBCardCollectionViewCell : KKBBaseCollectionViewCell

@property (nonatomic, strong, readonly) UIView *cardContentView;
@property (nonatomic, assign) UIEdgeInsets cardEdges;

@property (nonatomic, assign) BOOL touchAnimation;

- (void)shake;

@end

NS_ASSUME_NONNULL_END
