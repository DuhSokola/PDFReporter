//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructLinger.java
//

#ifndef _LibcoreIoStructLinger_H_
#define _LibcoreIoStructLinger_H_

#include "J2ObjC_header.h"

@interface LibcoreIoStructLinger : NSObject {
 @public
  jint l_onoff_;
  jint l_linger_;
}

- (instancetype)initWithInt:(jint)l_onoff
                    withInt:(jint)l_linger;

- (jboolean)isOn;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructLinger)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructLinger)

#endif // _LibcoreIoStructLinger_H_
