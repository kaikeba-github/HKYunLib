//
//  KKBDataType.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/18.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#ifndef KKBDataType_h
#define KKBDataType_h

typedef void(^KKBBlockVoid)(void);
typedef void(^KKBBlockBool)(BOOL success);
typedef void(^KKBBlockId)(id _Nullable object);
typedef void(^KKBBlockNSString)(NSString * _Nullable string);
typedef void(^KKBBlockNSError)(NSError * _Nullable error);

typedef BOOL(^KKBBoolBlock)(void);
typedef id _Nullable (^KKBIdBlock)(void);
typedef NSString *_Nullable(^KKBNSStringBlock)(void);

static inline void dispatch_async_main(dispatch_block_t _Nullable block) {
    dispatch_async(dispatch_get_main_queue(), block);
}

static inline void dispatch_after_main(NSTimeInterval delayInSeconds, dispatch_block_t _Nullable block) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC)), dispatch_get_main_queue(), block);
}

static inline void dispatch_sync_main(dispatch_block_t _Nullable block) {
    if (NSThread.isMainThread) {
        block();
    } else {
        dispatch_sync(dispatch_get_main_queue(), block);
    }
}

static inline void dispatch_run_main(dispatch_block_t _Nullable block) {
    if (NSThread.isMainThread) {
        block();
    } else {
        dispatch_async(dispatch_get_main_queue(), block);
    }
}

#endif /* KKBDataType_h */
