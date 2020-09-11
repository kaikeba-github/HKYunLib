//
//  KKBTextView.h
//  KKBLibrary
//
//  Created by Duane on 2019/6/4.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/** 文字最多字符数量显示类型 **/
typedef enum {
    KKBTextViewMaxNumStateNone = 0, // 不显示
    KKBTextViewMaxNumStateNormal = 1,  // 默认模式（0/200）
    KKBTextViewMaxNumStateDiminishing = 2,  // 递减模式（200）
} KKBTextViewMaxNumState;

typedef void(^KKBTextViewHeightBlock)(CGFloat fitHeight);
typedef void(^KKBTextViewListeningBlock)(NSString *text);

@interface KKBTextView : UIView

@property (nonatomic, strong, readonly) UILabel *numLabel;

@property (nonatomic, strong, readonly) UITextView *textView;

/** textView的内容 */
@property (nonatomic, copy) NSString *text;

/** 是否禁止输入换行(默认为NO) */
@property (nonatomic, assign) BOOL disableInputLineBreak;

/** 满足当前内容需要的高度 */
@property (nonatomic, assign, readonly) CGFloat fitHeight;

@property (nonatomic, assign) UIEdgeInsets edges;

/** 中间距 (默认8) */
@property (nonatomic, assign) CGFloat space;

/** 文字最多数量 (默认200个字符) */
@property (nonatomic, assign) NSInteger textMaxNum;

/** Num 样式 （默认 0/200 */
@property (nonatomic, assign) KKBTextViewMaxNumState maxNumState;

/** 返回输入监听内容 */
@property (nonatomic, copy) KKBTextViewListeningBlock textViewListening;

/** 满足当前内容的高度发生变化 */
@property (nonatomic,copy) KKBTextViewHeightBlock fitHeightChangeBlock;

@end

NS_ASSUME_NONNULL_END
