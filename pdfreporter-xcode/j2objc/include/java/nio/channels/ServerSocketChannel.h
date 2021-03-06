//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ServerSocketChannel.java
//

#ifndef _JavaNioChannelsServerSocketChannel_H_
#define _JavaNioChannelsServerSocketChannel_H_

@class JavaNetServerSocket;
@class JavaNetSocketAddress;
@class JavaNioChannelsSocketChannel;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/nio/channels/NetworkChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsNetworkChannel > {
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

+ (JavaNioChannelsServerSocketChannel *)open;

- (jint)validOps;

- (JavaNetServerSocket *)socket;

- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr
                                                             withInt:(jint)backlog;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (JavaNioChannelsServerSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                                  withId:(id)value;

- (id<JavaUtilSet>)supportedOptions;

- (JavaNioChannelsSocketChannel *)accept;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsServerSocketChannel)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioChannelsServerSocketChannel *JavaNioChannelsServerSocketChannel_open();
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsServerSocketChannel)

#endif // _JavaNioChannelsServerSocketChannel_H_
