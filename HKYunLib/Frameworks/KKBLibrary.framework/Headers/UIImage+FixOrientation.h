//
//  UIImage+FixOrientation.h
//  KKBLibrary
//
//  Created by zddMac on 2019/8/1.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface UIImage(fixOrientation)
- (UIImage *)fixOrientation;
- (UIImage *)rotateWithOrientation:(UIImageOrientation)orientation;
@end
