//
//  NSDate+Calendar.h
//  EagleApp
//
//  Created by duane on 2017/8/25.
//  Copyright © 2017年 duane. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NSCalendarUnitAllDate NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond | NSCalendarUnitWeekday

@interface NSDate (Calendar)
/**
 *  根据给定的日期设置得到该日期所在周是当月的第几周
 *
 *  @param dateComponets 给定的日期设置
 *
 *  @return 给定日期设置所在周在当月的索引
 */
+ (NSInteger)orderOfWeekInMonthForDateComponents:(NSDateComponents *)dateComponets;
/**
 *  根据给定的日期设置得到该日期是周几（索引）
 *
 *  @param dateComponets 给定的日期设置
 *
 *  @return 周几（索引）
 */
+ (NSInteger)orderOfDayInWeekForDateComponents:(NSDateComponents *)dateComponets;
/**
 *  根据给定的日期设置得到该日期当月共有几周
 *
 *  @param dateComponets 给定的日期设置
 *
 *  @return 给定日期设置当月的总周数
 */
+ (NSInteger)numberOfWeeksInMonthForDateComponents:(NSDateComponents *)dateComponets;
/**
 *  根据给定的日期设置得到该日期当月共有多少天
 *
 *  @param dateComponets 给定的日期设置
 *
 *  @return 给定日期设置当月的总天数
 */
+ (NSInteger)numberOfDaysInMonthForDateComponents:(NSDateComponents *)dateComponets;
/**
 *  根据给定的日期得到该日期的年
 *
 *  @param date 给定的日期
 *
 *  @return 日期的年
 */
+ (NSInteger)yearForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期的月
 *
 *  @param date 给定的日期
 *
 *  @return 日期的月
 */
+ (NSInteger)monthForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期的日
 *
 *  @param date 给定的日期
 *
 *  @return 日期的日
 */
+ (NSInteger)dayForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期所在周是当月的第几周
 *
 *  @param date 给定的日期
 *
 *  @return 给定日期所在周在当月的索引
 */
+ (NSInteger)orderOfWeekInMonthForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期所在周是当年的第几周
 *
 *  @param date 给定的日期
 *
 *  @return 给定日期所在周在当年的索引
 */
+ (NSInteger)orderOfWeekInYearForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期是周几（索引）
 *
 *  @param date 给定的日期
 *
 *  @return 周几（索引）
 */
+ (NSInteger)orderOfDayInWeekForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期当月共有几周
 *
 *  @param date 给定的日期
 *
 *  @return 给定日期当月的总周数
 */
+ (NSInteger)numberOfWeeksInMonthForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期当月共有多少天
 *
 *  @param date 给定的日期
 *
 *  @return 给定日期当月的总天数
 */
+ (NSInteger)numberOfDaysInMonthForDate:(NSDate *)date;
/**
 *  此时当前月共有多少天
 *
 *  @return 此时当前月总天数
 */
+ (NSInteger)numberOfDaysInCurrentMonth;
/**
 *  根据给定的日期得到 年月日 时分秒 的格式化输出
 *
 *  @param date 给定的日期
 *
 *  @return 年月日 时分秒 的格式化输出
 */
+ (NSString *)dateForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期的时
 *
 *  @param date 给定的日期
 *
 *  @return 日期的时
 */
+ (NSInteger)hourForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期的分
 *
 *  @param date 给定的日期
 *
 *  @return 日期的分
 */
+ (NSInteger)minuteForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期的秒
 *
 *  @param date 给定的日期
 *
 *  @return 日期的秒
 */
+ (NSInteger)secondForDate:(NSDate *)date;
/**
 *  根据给定的日期得到该日期 时分秒 的格式化输出
 *
 *  @param date 给定的日期
 *
 *  @return 时分秒 的格式化输出
 */
+ (NSString *)timeForDate:(NSDate *)date;

/**
*  @return 2017-08-17 08:00:00 (按所传格式输出)
*/

- (NSString *)datetimeStringWithFormatter:(NSString *)formatter;

/**
 *  @return 2017-08-17 08:00:00
 */
- (NSString *)datetimeString;
/**
 *  @return 2017-08-17
 */
- (NSString *)dateString;
/**
 *  @return 08:00:00
 */
- (NSString *)timeString;
/**
 *  根据给定的日期得到该日期的时间戳格式化输出
 *
 *  @return 年月日时分秒毫秒 的格式化输出
 */
- (NSString *)timestampString;
/**
 *  @return 今日 08:00
 */
- (NSString *)kkbShortDateTimeString;
/**
 *  @return 倒计时 00:08:21
 */
- (NSString *)countdownString;
/**
 *  @return 刚刚，12小时前，3天前
 */
- (NSString *)kkbShortTimeAgoSinceNow;
@end
