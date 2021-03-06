//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMError.java
//

#ifndef _OrgW3cDomDOMError_H_
#define _OrgW3cDomDOMError_H_

@protocol OrgW3cDomDOMLocator;

#include "J2ObjC_header.h"

#define OrgW3cDomDOMError_SEVERITY_ERROR 2
#define OrgW3cDomDOMError_SEVERITY_FATAL_ERROR 3
#define OrgW3cDomDOMError_SEVERITY_WARNING 1

@protocol OrgW3cDomDOMError < NSObject, JavaObject >

- (jshort)getSeverity;

- (NSString *)getMessage;

- (NSString *)getType;

- (id)getRelatedException;

- (id)getRelatedData;

- (id<OrgW3cDomDOMLocator>)getLocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMError)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_WARNING, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_ERROR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_FATAL_ERROR, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMError)

#endif // _OrgW3cDomDOMError_H_
