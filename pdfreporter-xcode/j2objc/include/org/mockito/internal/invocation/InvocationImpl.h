//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationImpl.java
//

#ifndef _OrgMockitoInternalInvocationInvocationImpl_H_
#define _OrgMockitoInternalInvocationInvocationImpl_H_

@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol OrgMockitoInternalInvocationMockitoMethod;
@protocol OrgMockitoInternalInvocationRealmethodRealMethod;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

#include "J2ObjC_header.h"
#include "org/mockito/internal/exceptions/VerificationAwareInvocation.h"
#include "org/mockito/invocation/Invocation.h"

#define OrgMockitoInternalInvocationInvocationImpl_serialVersionUID 8240069639250980199LL

@interface OrgMockitoInternalInvocationInvocationImpl : NSObject < OrgMockitoInvocationInvocation, OrgMockitoInternalExceptionsVerificationAwareInvocation > {
 @public
  id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod_;
}

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalInvocationMockitoMethod:(id<OrgMockitoInternalInvocationMockitoMethod>)mockitoMethod
         withNSObjectArray:(IOSObjectArray *)args
                   withInt:(jint)sequenceNumber
withOrgMockitoInternalInvocationRealmethodRealMethod:(id<OrgMockitoInternalInvocationRealmethodRealMethod>)realMethod;

- (id)getMock;

- (JavaLangReflectMethod *)getMethod;

- (IOSObjectArray *)getArguments;

- (jboolean)isVerified;

- (jint)getSequenceNumber;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (IOSObjectArray *)getRawArguments;

- (id)callRealMethod;

- (void)markVerified;

- (id<OrgMockitoInvocationStubInfo>)stubInfo;

- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

- (jboolean)isIgnoredForVerification;

- (void)ignoreForVerification;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalInvocationInvocationImpl, realMethod_, id<OrgMockitoInternalInvocationRealmethodRealMethod>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalInvocationInvocationImpl, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationImpl)

#endif // _OrgMockitoInternalInvocationInvocationImpl_H_
