//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/X509Extension.java
//

#ifndef _JavaSecurityCertX509Extension_H_
#define _JavaSecurityCertX509Extension_H_

@class IOSByteArray;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"

@protocol JavaSecurityCertX509Extension < NSObject, JavaObject >

- (id<JavaUtilSet>)getCriticalExtensionOIDs;

- (IOSByteArray *)getExtensionValueWithNSString:(NSString *)oid;

- (id<JavaUtilSet>)getNonCriticalExtensionOIDs;

- (jboolean)hasUnsupportedCriticalExtension;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509Extension)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509Extension)

#endif // _JavaSecurityCertX509Extension_H_
