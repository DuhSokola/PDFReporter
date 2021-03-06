//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/junit/framework/TestSuite.java
//

#ifndef _JunitFrameworkTestSuite_H_
#define _JunitFrameworkTestSuite_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@class JavaLangThrowable;
@class JavaUtilVector;
@class JunitFrameworkTestResult;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "junit/framework/Test.h"
#include "junit/framework/TestCase.h"

@interface JunitFrameworkTestSuite : NSObject < JunitFrameworkTest > {
}

+ (id<JunitFrameworkTest>)createTestWithIOSClass:(IOSClass *)theClass
                                    withNSString:(NSString *)name;

+ (JavaLangReflectConstructor *)getTestConstructorWithIOSClass:(IOSClass *)theClass;

+ (id<JunitFrameworkTest>)warningWithNSString:(NSString *)message;

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)theClass;

- (instancetype)initWithIOSClass:(IOSClass *)theClass
                    withNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithIOSClassArray:(IOSObjectArray *)classes;

- (instancetype)initWithIOSClassArray:(IOSObjectArray *)classes
                         withNSString:(NSString *)name;

- (void)addTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)addTestSuiteWithIOSClass:(IOSClass *)testClass;

- (jint)countTestCases;

- (NSString *)getName;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)runTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
         withJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)setNameWithNSString:(NSString *)name;

- (id<JunitFrameworkTest>)testAtWithInt:(jint)index;

- (jint)testCount;

- (id<JavaUtilEnumeration>)tests;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestSuite)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<JunitFrameworkTest> JunitFrameworkTestSuite_createTestWithIOSClass_withNSString_(IOSClass *theClass, NSString *name);

FOUNDATION_EXPORT JavaLangReflectConstructor *JunitFrameworkTestSuite_getTestConstructorWithIOSClass_(IOSClass *theClass);

FOUNDATION_EXPORT id<JunitFrameworkTest> JunitFrameworkTestSuite_warningWithNSString_(NSString *message);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestSuite)

@interface JunitFrameworkTestSuite_$1 : JunitFrameworkTestCase {
}

- (void)runTest;

- (instancetype)initWithNSString:(NSString *)arg$0
                    withNSString:(NSString *)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestSuite_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestSuite_$1)

#endif // _JunitFrameworkTestSuite_H_
