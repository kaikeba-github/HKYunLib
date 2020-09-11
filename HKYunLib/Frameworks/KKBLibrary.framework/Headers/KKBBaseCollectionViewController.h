//
//  KKBBaseCollectionViewController.h
//  KKBLibrary
//
//  Created by Duane on 2019/4/20.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseScrollController.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBBaseCollectionViewController : KKBBaseScrollController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>

@property (nonatomic, strong, readonly) UICollectionView *collectionView;
@property (nonatomic, assign) BOOL autoSetViewState;

- (instancetype)initWithCollectionViewLayout:(UICollectionViewLayout *)layout;

@end

NS_ASSUME_NONNULL_END
