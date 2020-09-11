//
//  KKBCollectionViewFlowLayout.h
//  KKBLibrary
//
//  Created by zddMac on 2019/12/15.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBFlowAlignment) {
    KKBFlowAlignmentJustyfied,
    KKBFlowAlignmentLeft,
    KKBFlowAlignmentCenter,
    KKBFlowAlignmentRight
};


@interface KKBCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (assign, nonatomic) KKBFlowAlignment alignment;

@end

NS_ASSUME_NONNULL_END
