//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1UTCTime.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_
#define _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Time.h"

#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_HM 11
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_HMS 13
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_LOCAL_HM 15
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_LOCAL_HMS 17

@interface OrgApacheHarmonySecurityAsn1ASN1UTCTime : OrgApacheHarmonySecurityAsn1ASN1Time {
}

- (instancetype)init;

+ (OrgApacheHarmonySecurityAsn1ASN1UTCTime *)getInstance;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

FOUNDATION_EXPORT BOOL OrgApacheHarmonySecurityAsn1ASN1UTCTime_initialized;
J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1UTCTime)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1UTCTime *OrgApacheHarmonySecurityAsn1ASN1UTCTime_getInstance();

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_HM, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_HMS, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_LOCAL_HM, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_LOCAL_HMS, jint)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1UTCTime *OrgApacheHarmonySecurityAsn1ASN1UTCTime_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, ASN1_, OrgApacheHarmonySecurityAsn1ASN1UTCTime *)

FOUNDATION_EXPORT NSString *OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_PATTERN_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_PATTERN_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1UTCTime)

#endif // _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_
