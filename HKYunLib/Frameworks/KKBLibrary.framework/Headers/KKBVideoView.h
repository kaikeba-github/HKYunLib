//
//  KKBVideoView.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/16.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBVideoView : UIView

@property (nonatomic, assign) BOOL isActive;

- (instancetype)initWithURL:(NSURL *)url;

- (void)stop;
- (void)pause;
- (void)play;

@end

NS_ASSUME_NONNULL_END
