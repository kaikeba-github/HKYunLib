//
//  NSUserDefaultsModel.h
//  KKBLibrary
//
//  Created by Duane on 2019/4/19.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaultsModel : NSObject

- (NSDictionary *)setupDefaultValues;
- (NSString *)suiteName;

@end

NS_ASSUME_NONNULL_END

#define KKBUD_Property_Object(className, propertyName)    \
@property (nonatomic, nullable, setter = set_##propertyName:, getter = propertyName ) className *propertyName;

#define KKBUD_Property_Number(valueType, propertyName)    \
@property (nonatomic, setter = set_##propertyName:, getter = propertyName ) valueType propertyName;

#define KKBUD_Property_String(propertyName) KKBUD_Property_Object(NSString, propertyName)
#define KKBUD_Property_Date(propertyName) KKBUD_Property_Object(NSDate, propertyName)

#define KKBUD_Property_Integer(propertyName) KKBUD_Property_Number(NSInteger, propertyName)
#define KKBUD_Property_Enum(enumType, propertyName) KKBUD_Property_Number(enumType, propertyName)
#define KKBUD_Property_Float(propertyName) KKBUD_Property_Number(float, propertyName)
#define KKBUD_Property_Double(propertyName) KKBUD_Property_Number(double, propertyName)
#define KKBUD_Property_Bool(propertyName) KKBUD_Property_Number(BOOL, propertyName)


#define KKBUD_Synthesize_Object(className, propertyName, defaultValue)    \
- (void)set_##propertyName:(className *)propertyName {  \
    if (propertyName) { \
        [StandardUserDefaults setObject:propertyName forKey:@#propertyName.md5];   \
    } else {    \
        [StandardUserDefaults removeObjectForKey:@#propertyName.md5];  \
    }   \
    [StandardUserDefaults synchronize]; \
}   \
    \
- (className *)propertyName {   \
    className *propertyName = [StandardUserDefaults objectForKey:@#propertyName.md5];  \
    if (propertyName) { \
        return propertyName;    \
    }   \
    return defaultValue; \
}

#define KKBUD_Synthesize_Number(valueType, valueFunction, propertyName, defaultValue)    \
- (void)set_##propertyName:(valueType)propertyName {  \
    [StandardUserDefaults setObject:@(propertyName) forKey:@#propertyName.md5];   \
    [StandardUserDefaults synchronize]; \
}   \
    \
- (valueType)propertyName {   \
    NSNumber *propertyName = [StandardUserDefaults objectForKey:@#propertyName.md5];  \
    if (propertyName) { \
        return propertyName.valueFunction;    \
    }   \
    return defaultValue; \
}

#define KKBUD_Synthesize_Date(propertyName, defaultValue)    \
- (void)set_##propertyName:(NSDate *)propertyName {  \
    [StandardUserDefaults setObject:@(propertyName.timeIntervalSince1970) forKey:@#propertyName.md5];   \
    [StandardUserDefaults synchronize]; \
}   \
    \
- (NSDate *)propertyName {   \
    NSNumber *propertyName = [StandardUserDefaults objectForKey:@#propertyName.md5];  \
    if (propertyName) { \
        return [NSDate dateWithTimeIntervalSince1970:propertyName.doubleValue];    \
    }   \
    return defaultValue; \
}

#define KKBUD_Synthesize_String(propertyName, defaultValue) KKBUD_Synthesize_Object(NSString, propertyName, defaultValue)
#define KKBUD_Synthesize_Integer(propertyName, defaultValue) KKBUD_Synthesize_Number(NSInteger, integerValue, propertyName, defaultValue)
#define KKBUD_Synthesize_Enum(enumType, propertyName, defaultValue) KKBUD_Synthesize_Number(enumType, integerValue, propertyName, defaultValue)
#define KKBUD_Synthesize_Float(propertyName, defaultValue) KKBUD_Synthesize_Number(float, floatValue, propertyName, defaultValue)
#define KKBUD_Synthesize_Double(propertyName, defaultValue) KKBUD_Synthesize_Number(double, doubleValue, propertyName, defaultValue)
#define KKBUD_Synthesize_Bool(propertyName, defaultValue) KKBUD_Synthesize_Number(BOOL, boolValue, propertyName, defaultValue)
