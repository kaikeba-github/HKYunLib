//
//  KKBWebView.h
//  KKBLibrary
//
//  Created by Duane on 2019/8/17.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KKBWebViewScriptHandler <NSObject>

@required

- (void)handleScript:(NSString *)action message:(id)message;

@end

@interface KKBWebView : WKWebView

@property (strong, nonatomic) UIProgressView *progressView;

- (void)loadLocalHTMLWithFileName:(nonnull NSString *)htmlName;

- (void)removejsHandlers;
- (void)addJsHandler:(nullable id<KKBWebViewScriptHandler>)target action:(NSString *)action;

@end

NS_ASSUME_NONNULL_END
