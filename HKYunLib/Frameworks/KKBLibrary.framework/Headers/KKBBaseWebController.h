//
//  KKBBaseWebController.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/23.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseScrollController.h>
#import <KKBLibrary/KKBWebView.h>

NS_ASSUME_NONNULL_BEGIN

#define sKKBWebBussinessDefault          @"kaikeba"
#define sKKBWebActionGetToken            @"getAccessToken"
#define sKKBWebActionOpenNewUrl          @"openNAWebUrl"
#define sKKBWebActionOpenSafariUrl       @"openPhoneWebView"
#define sKKBWebActionCloseView           @"closeView"
#define sKKBWebActionIsLogin             @"isLogin"
#define sKKBWebActionLogin               @"login"
#define sKKBWebActionCoursePay           @"coursePay"
#define sKKBWebActionNativeRoute         @"nativeRoute"
#define sKKBWebActionShowToast           @"showToast"
#define sKKBWebActionPageFinished        @"onPageFinished"

#define sKKBWebBussinessKey              @"business"
#define sKKBWebActionKey                 @"action"
#define sKKBWebBodyKey                   @"body"

#define sKKBWebJsFunctionName            @"naEventDispatchFunction"
#define sKKBWebJsFunctionEventAppear     @"pageAppear"
#define sKKBWebJsFunctionEventDisappear  @"pageDisappear"

typedef void(^KKBWebJsHandlerBlock)(NSDictionary *body, void (^completionHandler)(NSString * __nullable result));

@interface KKBBaseWebController : KKBBaseScrollController <KKBWebViewScriptHandler, WKUIDelegate>

/**
*  @brief  获取登录状态的方法
*  返回的NSDictionary的格式为{@"accessToken":accessToken, @"isLogin":@YES,}
*/
@property (class, nonatomic, copy) NSDictionary *(^getLoginInfoBlock)(void);

@property (nonatomic, strong, readonly) KKBWebView *webView;
@property (nonatomic, assign) BOOL autoUpdateTitleFromWebview;

@property (nonatomic, copy) NSString *accessToken;

@property (nonatomic, copy) NSString *url;

- (void)onJsPageLoadFinishedCallback;

- (void)loadLocalFile:(NSString *)fileName;
- (void)loadContent:(NSString *)content;

- (void)disableTouchCalloutAndSelect;

- (void)addJsBusiness:(NSString *)business action:(NSString *)action handler:(KKBWebJsHandlerBlock)handler;
- (void)removeJsBusiness:(NSString *)business;
- (void)removeJsBusiness:(NSString *)business action:(NSString *)action;
- (void)removeAllJsBusiness;

@end

NS_ASSUME_NONNULL_END
