//
//  UIViewController+Router.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/22.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Router)

- (instancetype)initWithParams:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
