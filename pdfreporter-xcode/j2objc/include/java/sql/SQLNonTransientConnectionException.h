//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLNonTransientConnectionException.java
//

#ifndef _JavaSqlSQLNonTransientConnectionException_H_
#define _JavaSqlSQLNonTransientConnectionException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/sql/SQLNonTransientException.h"

#define JavaSqlSQLNonTransientConnectionException_serialVersionUID -5852318857474782892LL

@interface JavaSqlSQLNonTransientConnectionException : JavaSqlSQLNonTransientException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLNonTransientConnectionException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLNonTransientConnectionException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLNonTransientConnectionException)

#endif // _JavaSqlSQLNonTransientConnectionException_H_
