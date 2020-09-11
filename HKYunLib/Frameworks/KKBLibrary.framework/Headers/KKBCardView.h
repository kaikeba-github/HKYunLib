//
//  KKBCardView.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/22.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBCardView : KKBBaseView

@property (nonatomic, strong, readonly) UIImageView *contentView;
@property (nonatomic, assign) UIEdgeInsets cardEdges;

@end

NS_ASSUME_NONNULL_END
