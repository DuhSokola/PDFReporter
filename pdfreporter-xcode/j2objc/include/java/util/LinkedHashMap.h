//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/LinkedHashMap.java
//

#ifndef _JavaUtilLinkedHashMap_H_
#define _JavaUtilLinkedHashMap_H_

@class JavaUtilLinkedHashMap_LinkedEntry;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

#include "J2ObjC_header.h"
#include "java/util/HashMap.h"
#include "java/util/Iterator.h"

#define JavaUtilLinkedHashMap_serialVersionUID 3801124242820219131LL

@interface JavaUtilLinkedHashMap : JavaUtilHashMap {
 @public
  JavaUtilLinkedHashMap_LinkedEntry *header_;
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)initialCapacity;

- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor
                withBoolean:(jboolean)accessOrder;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)init__ OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilMap_Entry>)eldest;

- (void)addNewEntryWithId:(id)key
                   withId:(id)value
                  withInt:(jint)hash_
                  withInt:(jint)index;

- (void)addNewEntryForNullKeyWithId:(id)value;

- (JavaUtilHashMap_HashMapEntry *)constructorNewRetainedEntryWithId:(id)key
                                                             withId:(id)value
                                                            withInt:(jint)hash_
                                   withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)next;

- (id)getWithId:(id)key;

- (void)preModifyWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;

- (void)postRemoveWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;

- (jboolean)containsValueWithId:(id)value;

- (void)clear;

- (id<JavaUtilIterator>)newKeyIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newValueIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newEntryIterator OBJC_METHOD_FAMILY_NONE;

- (jboolean)removeEldestEntryWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)eldest;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap)

J2OBJC_FIELD_SETTER(JavaUtilLinkedHashMap, header_, JavaUtilLinkedHashMap_LinkedEntry *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilLinkedHashMap, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap)

@interface JavaUtilLinkedHashMap_LinkedEntry : JavaUtilHashMap_HashMapEntry {
 @public
  __weak JavaUtilLinkedHashMap_LinkedEntry *nxt_;
  __weak JavaUtilLinkedHashMap_LinkedEntry *prv_;
}

- (instancetype)init;

- (instancetype)initWithId:(id)key
                    withId:(id)value
                   withInt:(jint)hash_
withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)next
withJavaUtilLinkedHashMap_LinkedEntry:(JavaUtilLinkedHashMap_LinkedEntry *)nxt
withJavaUtilLinkedHashMap_LinkedEntry:(JavaUtilLinkedHashMap_LinkedEntry *)prv;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap_LinkedEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap_LinkedEntry)

@interface JavaUtilLinkedHashMap_LinkedHashIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilLinkedHashMap_LinkedEntry *next_;
  JavaUtilLinkedHashMap_LinkedEntry *lastReturned_;
  jint expectedModCount_;
}

- (jboolean)hasNext;

- (JavaUtilLinkedHashMap_LinkedEntry *)nextEntry;

- (void)remove;

- (instancetype)initWithJavaUtilLinkedHashMap:(JavaUtilLinkedHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap_LinkedHashIterator)

J2OBJC_FIELD_SETTER(JavaUtilLinkedHashMap_LinkedHashIterator, next_, JavaUtilLinkedHashMap_LinkedEntry *)
J2OBJC_FIELD_SETTER(JavaUtilLinkedHashMap_LinkedHashIterator, lastReturned_, JavaUtilLinkedHashMap_LinkedEntry *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap_LinkedHashIterator)

@interface JavaUtilLinkedHashMap_KeyIterator : JavaUtilLinkedHashMap_LinkedHashIterator {
}

- (id)next;

- (instancetype)initWithJavaUtilLinkedHashMap:(JavaUtilLinkedHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap_KeyIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap_KeyIterator)

@interface JavaUtilLinkedHashMap_ValueIterator : JavaUtilLinkedHashMap_LinkedHashIterator {
}

- (id)next;

- (instancetype)initWithJavaUtilLinkedHashMap:(JavaUtilLinkedHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap_ValueIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap_ValueIterator)

@interface JavaUtilLinkedHashMap_EntryIterator : JavaUtilLinkedHashMap_LinkedHashIterator {
}

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilLinkedHashMap:(JavaUtilLinkedHashMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashMap_EntryIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashMap_EntryIterator)

#endif // _JavaUtilLinkedHashMap_H_
