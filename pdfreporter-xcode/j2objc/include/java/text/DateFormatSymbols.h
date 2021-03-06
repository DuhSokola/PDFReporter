//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DateFormatSymbols.java
//

#ifndef _JavaTextDateFormatSymbols_H_
#define _JavaTextDateFormatSymbols_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@class LibcoreIcuLocaleData;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define JavaTextDateFormatSymbols_serialVersionUID -5987973545549424702LL

@interface JavaTextDateFormatSymbols : NSObject < JavaIoSerializable, NSCopying > {
 @public
  IOSObjectArray *ampms_, *eras_, *months_, *shortMonths_, *shortWeekdays_, *weekdays_;
  LibcoreIcuLocaleData *localeData_;
  IOSObjectArray *zoneStrings_;
  jboolean customZoneStrings_;
  JavaUtilLocale *locale_;
}

- (IOSObjectArray *)internalZoneStrings;

- (instancetype)init;

- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (JavaTextDateFormatSymbols *)getInstance;

+ (JavaTextDateFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (IOSObjectArray *)getAvailableLocales;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (NSString *)description;

- (IOSObjectArray *)getAmPmStrings;

- (IOSObjectArray *)getEras;

- (NSString *)getLocalPatternChars;

- (IOSObjectArray *)getMonths;

- (IOSObjectArray *)getShortMonths;

- (IOSObjectArray *)getShortWeekdays;

- (IOSObjectArray *)getWeekdays;

- (IOSObjectArray *)getZoneStrings;

- (NSUInteger)hash;

- (void)setAmPmStringsWithNSStringArray:(IOSObjectArray *)data;

- (void)setErasWithNSStringArray:(IOSObjectArray *)data;

- (void)setLocalPatternCharsWithNSString:(NSString *)data;

- (void)setMonthsWithNSStringArray:(IOSObjectArray *)data;

- (void)setShortMonthsWithNSStringArray:(IOSObjectArray *)data;

- (void)setShortWeekdaysWithNSStringArray:(IOSObjectArray *)data;

- (void)setWeekdaysWithNSStringArray:(IOSObjectArray *)data;

- (void)setZoneStringsWithNSStringArray2:(IOSObjectArray *)zoneStrings;

- (NSString *)getTimeZoneDisplayNameWithJavaUtilTimeZone:(JavaUtilTimeZone *)tz
                                             withBoolean:(jboolean)daylight
                                                 withInt:(jint)style;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextDateFormatSymbols)

J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, ampms_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, eras_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, months_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, shortMonths_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, shortWeekdays_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, weekdays_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, localeData_, LibcoreIcuLocaleData *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, zoneStrings_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, locale_, JavaUtilLocale *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaTextDateFormatSymbols *JavaTextDateFormatSymbols_getInstance();

FOUNDATION_EXPORT JavaTextDateFormatSymbols *JavaTextDateFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextDateFormatSymbols_getAvailableLocales();

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormatSymbols, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDateFormatSymbols)

#endif // _JavaTextDateFormatSymbols_H_
