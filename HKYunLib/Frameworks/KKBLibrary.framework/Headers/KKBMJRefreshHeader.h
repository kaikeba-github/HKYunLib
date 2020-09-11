//
//  KKBMJRefreshHeader.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/11.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <MJRefresh/MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBMJRefreshHeaderStyle) {
    KKBMJRefreshHeaderStyleLight = 1,
    KKBMJRefreshHeaderStyleDark,
};

//@class MJRefreshHeader;

@interface KKBMJRefreshHeader : MJRefreshHeader

@property (nonatomic, assign) KKBMJRefreshHeaderStyle style;

- (instancetype)initWithStyle:(KKBMJRefreshHeaderStyle)style;

@end

NS_ASSUME_NONNULL_END
