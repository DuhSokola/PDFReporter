//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SyncFailedException.java
//

#ifndef _JavaIoSyncFailedException_H_
#define _JavaIoSyncFailedException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

#define JavaIoSyncFailedException_serialVersionUID -2353342684412443330LL

@interface JavaIoSyncFailedException : JavaIoIOException {
}

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSyncFailedException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaIoSyncFailedException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSyncFailedException)

#endif // _JavaIoSyncFailedException_H_
