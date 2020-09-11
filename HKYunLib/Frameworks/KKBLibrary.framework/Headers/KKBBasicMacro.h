//
//  KKBBasicMacro.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/18.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#ifndef KKBBasicMacro_h
#define KKBBasicMacro_h

#import <KKBLibrary/DispatchTimer.h>
#import <KKBLibrary/UIColor+HexColor.h>
#import <KKBLibrary/KKBBasicUtility.h>

#define IS_iPhoneX ([KKBBasicUtility iphoneSafeArea].bottom > 0.0)
#define IS_iPhone5 (SCREEN_WIDTH == 320 && SCREEN_HEIGHT == 568)

#define IPHONEX_MARGIN_TOP      (IS_iPhoneX?[KKBBasicUtility iphoneSafeArea].top:[[UIApplication sharedApplication] statusBarFrame].size.height)
#define IPHONEX_MARGIN_BOTTOM   ([KKBBasicUtility iphoneSafeArea].bottom)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IOS_SYSTEM_VERSION [[UIDevice currentDevice] systemVersion]
#define IOS_SYSTEM_NAME [[UIDevice currentDevice] systemName]
#define DEVICE_IDENTIFIER [UIDevice currentDevice].identifierForVendor.UUIDString //[[NSUUID UUID] UUIDString]
#define APP_KEYWINDOW [UIApplication sharedApplication].keyWindow
#define APP_DELEGATE ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define ADJUST_SCREEN_WIDTH_375(a) (a*SCREEN_WIDTH/375.0)
#define ADJUST_SCREEN_HEIGHT_667(a) (a*SCREEN_HEIGHT/667.0)
#define ADJUST_SCREEN_WIDTH_414(a) (a*SCREEN_WIDTH/414.0)
#define ADJUST_SCREEN_HEIGHT_736(a) (a*SCREEN_HEIGHT/736.0)
#define HexColor(s) [UIColor colorFromHex:s]
#define HexAlphaColor(s,a) [UIColor colorFromHex:s alpha:a]
#define HexStringColor(s) [UIColor colorFromHexString:s]
#define HexStringAlphaColor(s,a) [UIColor colorFromHexString:s alpha:a]

#define MKRGB(r,g,b)                ([UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:1])
#define MKRGBA(r,g,b,a)                ([UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:a])
#define MKRefRGBA(r,g,b,a)          ([MKRGBA(r,g,b,a) CGColor])

// 资源文件
#define Framework_Bundle [NSBundle bundleForClass:self.class]

#define AssetsImage(name) [UIImage imageNamed:name inBundle:Framework_Bundle compatibleWithTraitCollection:nil]
#define AssetsOriginalImage(name) [AssetsImage(name) imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal]

#define Framework_Bundle_Path [Framework_Bundle bundlePath]
#define Framework_Bundle_ResourcePath [Framework_Bundle resourcePath]
#define Framework_Bundle_Path_WithName(bundle) [Framework_Bundle_ResourcePath stringByAppendingPathComponent:bundle]
#define Framework_Bundle_WithName(bundle) [NSBundle bundleWithPath:Framework_Bundle_Path_WithName(bundle)]

#define ImageFromBundle(bundle, name) [UIImage imageNamed:name inBundle:bundle compatibleWithTraitCollection:nil]

#define INT_RANDOM(from,to) ( from + ( arc4random() % ( to - from + 1 ) ) )

#define StandardUserDefaults [NSUserDefaults standardUserDefaults]

#define fFont(s) [UIFont systemFontOfSize:s]
#define fBFont(s) [UIFont boldSystemFontOfSize:s]
#define pmFont(s) [UIFont fontWithName:@"PingFangSC-Medium" size:s]
#define prFont(s) [UIFont fontWithName:@"PingFangSC-Regular" size:s]
#define psFont(s) [UIFont fontWithName:@"PingFangSC-Semibold" size:s]
#define dbFont(s) [UIFont fontWithName:@"DINAlternate-Bold" size:s]

#define NSLogFunction() NSLog(@"Method called: %s", __FUNCTION__)
#define NSLogCGRect(r) NSLog(@"CGRect x:%f y:%f w:%f h:%f", r.origin.x, r.origin.y, r.size.width, r.size.height)

#define MINUTE (60)
#define HOUR (60*MINUTE)
#define DAY (24*HOUR)

//正则表达式
#define sEmailRegexString           (@"\\b([a-zA-Z0-9%_.+\\-]+)@([a-zA-Z0-9.\\-]+?[\\.[a-zA-Z]{2,6}]+)\\b")
#define sPhoneNumberRegexString     (@"^1\\d{10}$")
#define sVerifyCodeRegexString4     (@"[0-9]{4}")
#define sVerifyCodeRegexString6     (@"[0-9]{6}")

#define sCommonDateFormatString     (@"yyyy-MM-dd HH:mm:ss")


#define IgnoredPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)

#define DEFINE_SINGLETON_FOR_H(className) \
+ (className *)shareInstance; \
+(instancetype) alloc __attribute__((unavailable("call shareInstance instead"))); \
+(instancetype) new __attribute__((unavailable("call shareInstance instead"))); \
-(instancetype) copy __attribute__((unavailable("call shareInstance instead"))); \
-(instancetype) mutableCopy __attribute__((unavailable("call shareInstance instead")));

#define DEFINE_SINGLETON_FOR_M(className) \
+ (className *)shareInstance { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[super allocWithZone:NULL] init]; \
}); \
return shared##className; \
} \
\
+(id) allocWithZone:(struct _NSZone *)zone \
{ \
return [className shareInstance]; \
} \
\
-(id) copyWithZone:(struct _NSZone *)zone \
{ \
return [className shareInstance]; \
} \
\
-(id) mutableCopyWithZone:(struct _NSZone *)zone \
{ \
return [className shareInstance]; \
}

//观察者
#define DEFINE_OBSERVER_FOR_H(protocolName) \
\
@property (nonatomic, strong) NSHashTable<id<protocolName>> *observers; \
\
- (void)addObserver:(id <protocolName>)observer; \
- (void)removeObserver:(id <protocolName>)Observer;

#define DEFINE_OBSERVER_FOR_M(protocolName) \
- (NSHashTable *)observers { \
if (_observers == nil) { \
_observers = [NSHashTable<id<protocolName>> new]; \
} \
return _observers; \
} \
\
- (void)addObserver:(id <protocolName>)observer { \
if ([self.observers containsObject:observer]) { \
return; \
} \
[self.observers addObject:observer]; \
} \
\
- (void)removeObserver:(id<protocolName>)Observer { \
[self.observers removeObject:Observer]; \
} \
\
- (void)notifyObserverWithSelector:(SEL)selector { \
[self notifyObserverWithSelector:selector withObject:nil]; \
} \
\
- (void)notifyObserverWithSelector:(SEL)selector withObject:(id)object { \
[self notifyObserverWithSelector:selector withObject:object withObject:nil]; \
} \
\
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
- (void)notifyObserverWithSelector:(SEL)selector withObject:(id)object1 withObject:(id)object2 { \
[[self.observers allObjects] enumerateObjectsUsingBlock:^(id<protocolName>  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) { \
if ([obj respondsToSelector:selector]) { \
[obj performSelector:selector withObject:object1 withObject:object2]; \
} \
}]; \
} \
_Pragma("clang diagnostic pop")

//timer
#define DEFINE_TIMER_FOR_H() \
\
@property (nonatomic, strong, nullable) DispatchTimer *timer; \
\
- (void)stopTimer; \
- (void)startTimer:(NSTimeInterval)interval block:(void(^)(void))block; \
- (void)startTimer:(NSTimeInterval)interval fireNow:(BOOL)fireNow block:(void(^)(void))block;

#define DEFINE_TIMER_FOR_M() \
\
- (void)startTimer:(NSTimeInterval)interval block:(void(^)(void))block { \
[self startTimer:interval fireNow:YES block:block]; \
} \
- (void)startTimer:(NSTimeInterval)interval fireNow:(BOOL)fireNow block:(void(^)(void))block { \
[self stopTimer]; \
\
self.timer = [DispatchTimer scheduledTimerWithTimeInterval:interval repeats:YES queue:dispatch_get_main_queue() block:^(void) { \
if (block) { \
block(); \
} \
}]; \
if (fireNow && block) { \
block(); \
} \
} \
\
- (void)stopTimer { \
[self.timer invalidate]; \
self.timer = nil; \
}

#endif /* KKBBasicMacro_h */
