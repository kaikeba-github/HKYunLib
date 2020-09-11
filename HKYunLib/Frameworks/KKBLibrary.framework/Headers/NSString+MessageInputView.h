//
//  NSString+MessageInputView.h
//  ChuanKeKK
//
//  Created by HUAJIE-1 on 14-4-24.
//  Copyright (c) 2014年 None. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MessageInputView)

- (NSString *)stringByTrimingWhitespace;

- (NSUInteger)numberOfLines;

- (NSString *)encryptPhone;

@end
