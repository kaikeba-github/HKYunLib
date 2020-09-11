//
//  KKBMainTabControllerProtocol.h
//  KKBUIFramework
//
//  Created by Duane on 2020/3/13.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KKBMainTabControllerProtocol <NSObject>

@property (nonatomic, weak) UITabBarController *parentTabBarController;

- (void)tabbarManualRefresh;

@end
