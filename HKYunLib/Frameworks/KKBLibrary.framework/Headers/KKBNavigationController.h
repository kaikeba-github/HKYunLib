//
//  KKBNavigationController.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBNavigationController : UINavigationController

@end

@interface UINavigationController (KKB)

- (void)pushViewControllerWithName:(NSString *)viewController animated:(BOOL)animated;
- (void)pushViewControllerWithName:(NSString *)viewController params:(nullable NSDictionary *)params animated:(BOOL)animated;

- (void)presentViewControllerWithName:(NSString *)viewController animated:(BOOL)flag completion:(void (^)(void))completion;
- (void)presentViewControllerWithName:(NSString *)viewController params:(nullable NSDictionary *)params animated:(BOOL)flag completion:(void (^)(void))completion;

@end

NS_ASSUME_NONNULL_END
