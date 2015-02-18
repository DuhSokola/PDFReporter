//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Inet6Address.java
//

#ifndef _JavaNetInet6Address_H_
#define _JavaNetInet6Address_H_

@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaNetNetworkInterface;

#include "J2ObjC_header.h"
#include "java/net/InetAddress.h"

#define JavaNetInet6Address_serialVersionUID 6880410070516793377LL

@interface JavaNetInet6Address : JavaNetInetAddress {
}

- (instancetype)initWithByteArray:(IOSByteArray *)ipaddress
                     withNSString:(NSString *)hostName
                          withInt:(jint)scope_id;

+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                                          withInt:(jint)scope_id;

+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                      withJavaNetNetworkInterface:(JavaNetNetworkInterface *)nif;

- (jboolean)isAnyLocalAddress;

- (jboolean)isIPv4CompatibleAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

- (jint)getScopeId;

- (JavaNetNetworkInterface *)getScopedInterface;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaNetInet6Address_initialized;
J2OBJC_STATIC_INIT(JavaNetInet6Address)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withInt_(NSString *host, IOSByteArray *addr, jint scope_id);

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withJavaNetNetworkInterface_(NSString *host, IOSByteArray *addr, JavaNetNetworkInterface *nif);

J2OBJC_STATIC_FIELD_GETTER(JavaNetInet6Address, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_ANY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet6Address, ANY_, JavaNetInetAddress *)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_LOOPBACK_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet6Address, LOOPBACK_, JavaNetInetAddress *)

FOUNDATION_EXPORT IOSObjectArray *JavaNetInet6Address_serialPersistentFields_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet6Address, serialPersistentFields_, IOSObjectArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet6Address)

#endif // _JavaNetInet6Address_H_