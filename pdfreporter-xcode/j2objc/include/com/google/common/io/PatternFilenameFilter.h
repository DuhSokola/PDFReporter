//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/io/PatternFilenameFilter.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoPatternFilenameFilter_RESTRICT
#define ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoPatternFilenameFilter_RESTRICT
#if !defined (_ComGoogleCommonIoPatternFilenameFilter_) && (ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL || ComGoogleCommonIoPatternFilenameFilter_INCLUDE)
#define _ComGoogleCommonIoPatternFilenameFilter_

@class JavaIoFile;
@class JavaUtilRegexPattern;

#define JavaIoFilenameFilter_RESTRICT 1
#define JavaIoFilenameFilter_INCLUDE 1
#include "java/io/FilenameFilter.h"


@interface ComGoogleCommonIoPatternFilenameFilter : NSObject < JavaIoFilenameFilter > {
}

- (instancetype)initWithNSString:(NSString *)patternStr;

- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)fileName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoPatternFilenameFilter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoPatternFilenameFilter)