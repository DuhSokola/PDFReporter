//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/MethodInfo.java
//

#ifndef _OrgMockitoInternalStubbingAnswersMethodInfo_H_
#define _OrgMockitoInternalStubbingAnswersMethodInfo_H_

@class IOSClass;
@class JavaLangReflectMethod;
@class JavaLangThrowable;
@protocol OrgMockitoInvocationInvocation;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalStubbingAnswersMethodInfo : NSObject {
}

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)theInvocation;

- (jboolean)isValidExceptionWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (jboolean)isValidReturnTypeWithIOSClass:(IOSClass *)clazz;

- (jboolean)isVoid;

- (NSString *)printMethodReturnType;

- (NSString *)getMethodName;

- (jboolean)returnsPrimitive;

- (JavaLangReflectMethod *)getMethod;

- (jboolean)isDeclaredOnInterface;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersMethodInfo)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersMethodInfo)

#endif // _OrgMockitoInternalStubbingAnswersMethodInfo_H_
