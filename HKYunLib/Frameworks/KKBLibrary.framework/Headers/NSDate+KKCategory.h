//
//  NSDate+KKCategory.h
//  ChuanKeKK
//
//  Created by duane on 13-8-26.
//  Copyright (c) 2013年 None. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (KKCategory)

-(NSDate*)monthDateBegin;
-(NSDate*)monthDateEnd;
-(NSDate*)dayDateBegin;
-(NSDate*)dayDateEnd;

@end

@interface NSDate (TTCategory)

+ (NSLocale *)currentLocale;

/**
 * Returns the current date with the time set to midnight.
 */
+ (NSDate*)kkDateWithToday;

/**
 * Returns a copy of the date with the time set to midnight on the same day.
 */
- (NSDate*)kkDateAtMidnight;

/**
 * Formats the date with 'h:mm a' or the localized equivalent.
 */
- (NSString*)kkFormatTime;

/**
 * Formats the date with 'EEEE, LLLL d, YYYY' or the localized equivalent.
 */
- (NSString*)kkFormatDate;

/**
 * Formats the date according to how old it is.
 *
 * For dates less than a day old, the format is 'h:mm a', for less than a week old the
 * format is 'EEEE', and for anything older the format is 'M/d/yy'.
 */
- (NSString*)kkFormatShortTime;

/**
 * Formats the date according to how old it is.
 *
 * For dates less than a day old, the format is 'h:mm a', for less than a week old the
 * format is 'EEE h:mm a', and for anything older the format is 'MMM d h:mm a'.
 */
- (NSString*)kkFormatDateTime;

/**
 * Formats dates within 24 hours like '5 minutes ago', or calls formatDateTime if older.
 */
- (NSString*)kkFormatRelativeTime;
- (NSString*)kkbFormatRelativeTime;

/**
 * Formats dates within 1 week like '5m' or '2d', or calls formatShortTime if older.
 */
- (NSString*)kkFormatShortRelativeTime;

/**
 * Formats the date with 'MMMM d", "Today", or "Yesterday".
 *
 * You must supply date components for today and yesterday because they are relatively expensive
 * to create, so it is best to avoid creating them every time you call this method if you
 * are going to be calling it multiple times in a loop.
 */
- (NSString*)kkFormatDay:(NSDateComponents*)today yesterday:(NSDateComponents*)yesterday;

/**
 * Formats the date with 'MMMM".
 */
- (NSString*)kkFormatMonth;

/**
 * Formats the date with 'yyyy".
 */
- (NSString*)kkFormatYear;

- (NSString*)kkFormatNormalDateTime;

/**
 *  消息列表的时间格式
 */
- (NSString *)eagleMessageDateTime;

/**
 *  AQI预报列表的时间格式
 */
- (NSString *)aqiForecastDateTime;

/**
 *  农历时间格式
 */
- (NSString *)chineseCalendarWithYear:(BOOL)showYear;

- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (BOOL)isThisHour;
- (BOOL)isToday;
- (BOOL)isThisYear;

- (NSTimeInterval)timeInterverlInOneDay;
- (NSInteger)mintueInOneDay;
+ (NSDate *)toDayDateWithTimeInterval:(NSTimeInterval)secs;

@end
