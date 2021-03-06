//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerConfigurationException.java
//

#ifndef _JavaxXmlTransformTransformerConfigurationException_H_
#define _JavaxXmlTransformTransformerConfigurationException_H_

@class JavaLangThrowable;
@protocol JavaxXmlTransformSourceLocator;

#include "J2ObjC_header.h"
#include "javax/xml/transform/TransformerException.h"

@interface JavaxXmlTransformTransformerConfigurationException : JavaxXmlTransformTransformerException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangThrowable:(JavaLangThrowable *)e;

- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
           withJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerConfigurationException)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerConfigurationException)

#endif // _JavaxXmlTransformTransformerConfigurationException_H_
