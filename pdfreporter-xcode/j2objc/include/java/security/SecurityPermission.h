//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/SecurityPermission.java
//

#ifndef _JavaSecuritySecurityPermission_H_
#define _JavaSecuritySecurityPermission_H_

@class JavaSecurityPermission;

#include "J2ObjC_header.h"
#include "java/security/BasicPermission.h"

@interface JavaSecuritySecurityPermission : JavaSecurityBasicPermission {
}

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)action;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySecurityPermission)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecurityPermission)

#endif // _JavaSecuritySecurityPermission_H_
