//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/LongArrayBuffer.java
//

#ifndef _JavaNioLongArrayBuffer_H_
#define _JavaNioLongArrayBuffer_H_

@class IOSLongArray;
@class JavaNioByteOrder;

#include "J2ObjC_header.h"
#include "java/nio/LongBuffer.h"

@interface JavaNioLongArrayBuffer : JavaNioLongBuffer {
}

- (instancetype)initWithLongArray:(IOSLongArray *)array;

- (JavaNioLongBuffer *)asReadOnlyBuffer;

- (JavaNioLongBuffer *)compact;

- (JavaNioLongBuffer *)duplicate;

- (JavaNioLongBuffer *)slice;

- (jboolean)isReadOnly;

- (IOSLongArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (jlong)get;

- (jlong)getWithInt:(jint)index;

- (JavaNioLongBuffer *)getWithLongArray:(IOSLongArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)longCount;

- (jboolean)isDirect;

- (JavaNioByteOrder *)order;

- (JavaNioLongBuffer *)putWithLong:(jlong)c;

- (JavaNioLongBuffer *)putWithInt:(jint)index
                         withLong:(jlong)c;

- (JavaNioLongBuffer *)putWithLongArray:(IOSLongArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)longCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioLongArrayBuffer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioLongArrayBuffer)

#endif // _JavaNioLongArrayBuffer_H_
