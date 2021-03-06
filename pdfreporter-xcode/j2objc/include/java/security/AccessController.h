//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AccessController.java
//

#ifndef _JavaSecurityAccessController_H_
#define _JavaSecurityAccessController_H_

@class JavaSecurityAccessControlContext;
@class JavaSecurityPermission;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;

#include "J2ObjC_header.h"

@interface JavaSecurityAccessController : NSObject {
}

+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
              withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
                       withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

+ (JavaSecurityAccessControlContext *)getContext;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAccessController)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedExceptionAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT void JavaSecurityAccessController_checkPermissionWithJavaSecurityPermission_(JavaSecurityPermission *permission);

FOUNDATION_EXPORT JavaSecurityAccessControlContext *JavaSecurityAccessController_getContext();
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAccessController)

#endif // _JavaSecurityAccessController_H_
