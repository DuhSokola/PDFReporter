//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/LexicalHandler.java
//
//  Created by tball on 7/15/13.
//

#ifndef _OrgXmlSaxExtLexicalHandler_H_
#define _OrgXmlSaxExtLexicalHandler_H_

@class IOSCharArray;

#import "JreEmulation.h"

@protocol OrgXmlSaxExtLexicalHandler < NSObject, JavaObject >
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;
- (void)endDTD;
- (void)startEntityWithNSString:(NSString *)name;
- (void)endEntityWithNSString:(NSString *)name;
- (void)startCDATA;
- (void)endCDATA;
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(int)start
                     withInt:(int)length;
@end

#endif // _OrgXmlSaxExtLexicalHandler_H_