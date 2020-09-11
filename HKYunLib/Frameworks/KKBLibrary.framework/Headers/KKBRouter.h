//
//  KKBRouter.h
//  KaiKeBa
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/MGJRouter.h>

NS_ASSUME_NONNULL_BEGIN

#define KKBRouterUrl(s) [KKBRouter routerUrl:s]

#define KKBRouter_Nnavigation_Push KKBRouterUrl(@"navigation/push/:controller")
#define KKBRouter_Nnavigation_Pop KKBRouterUrl(@"navigation/pop")
#define KKBRouter_Nnavigation_Root KKBRouterUrl(@"navigation/root")

#define KKBRouter_Login KKBRouterUrl(@"login")
#define KKBRouter_Login_Pop KKBRouterUrl(@"login_pop")

#define KKBRouter_Mediator KKBRouterUrl(@"mediator/:target/:action")

typedef MGJRouterHandler KKBRouterHandler;//void (^MGJRouterHandler)(NSDictionary *routerParameters);

typedef NS_ENUM(NSInteger, KKBLoginStyle) {
    KKBLoginStyle_Normal,
    KKBLoginStyle_Pop,
};

@interface KKBRouter : MGJRouter

@property (class, nonatomic, strong) UINavigationController *navigationController;
@property (class, nonatomic, strong, readonly) NSString *scheme;
@property (class, nonatomic, copy) void(^loginBlock)(void (^)(id _Nullable result), KKBLoginStyle style);

+ (void)registerRouters:(NSString *)scheme;
+ (NSString *)routerUrl:(NSString *)urlWithOutScheme;

+ (UIViewController *)controllerWithName:(NSString *)controllerName params:(NSDictionary *)params;
+ (void)pushController:(NSString *)controllerName params:(nullable NSDictionary *)params;
+ (void)popController;
+ (void)popToController:(NSString *)controllerName;
+ (void)popToRootController;

+ (void)openSafariWebUrl:(NSString *)url;

+ (void)mediatorWithTarget:(NSString *)target action:(NSString *)action params:(nullable NSDictionary *)params;
+ (void)mediatorWithTarget:(NSString *)target action:(NSString *)action params:(nullable NSDictionary *)params completion:(nullable void (^)(id result)) completion;

@end

NS_ASSUME_NONNULL_END
