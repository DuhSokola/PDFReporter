//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/Serialization.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectSerialization_RESTRICT
#define ComGoogleCommonCollectSerialization_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSerialization_RESTRICT
#if !defined (_ComGoogleCommonCollectSerialization_) && (ComGoogleCommonCollectSerialization_INCLUDE_ALL || ComGoogleCommonCollectSerialization_INCLUDE)
#define _ComGoogleCommonCollectSerialization_

@class ComGoogleCommonCollectSerialization_FieldSetter;
@class IOSClass;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectSerialization : NSObject {
}

+ (jint)readCountWithJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream;

+ (void)writeMapWithJavaUtilMap:(id<JavaUtilMap>)map
   withJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)stream;

+ (void)populateMapWithJavaUtilMap:(id<JavaUtilMap>)map
       withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream;

+ (void)populateMapWithJavaUtilMap:(id<JavaUtilMap>)map
       withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream
                           withInt:(jint)size;

+ (void)writeMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                           withJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)stream;

+ (void)populateMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream;

+ (void)populateMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream
                                                   withInt:(jint)distinctElements;

+ (void)writeMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap
                           withJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)stream;

+ (void)populateMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream;

+ (void)populateMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream *)stream
                                                   withInt:(jint)distinctKeys;

+ (ComGoogleCommonCollectSerialization_FieldSetter *)getFieldSetterWithIOSClass:(IOSClass *)clazz
                                                                   withNSString:(NSString *)fieldName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSerialization)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint ComGoogleCommonCollectSerialization_readCountWithJavaIoObjectInputStream_(JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMapWithJavaUtilMap_withJavaIoObjectOutputStream_(id<JavaUtilMap> map, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMapWithJavaUtilMap_withJavaIoObjectInputStream_(id<JavaUtilMap> map, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMapWithJavaUtilMap_withJavaIoObjectInputStream_withInt_(id<JavaUtilMap> map, JavaIoObjectInputStream *stream, jint size);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectOutputStream_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectInputStream_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectInputStream_withInt_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectInputStream *stream, jint distinctElements);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectOutputStream_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectInputStream_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectInputStream_withInt_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectInputStream *stream, jint distinctKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectSerialization_FieldSetter *ComGoogleCommonCollectSerialization_getFieldSetterWithIOSClass_withNSString_(IOSClass *clazz, NSString *fieldName);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSerialization)
#if !defined (_ComGoogleCommonCollectSerialization_FieldSetter_) && (ComGoogleCommonCollectSerialization_INCLUDE_ALL || ComGoogleCommonCollectSerialization_FieldSetter_INCLUDE)
#define _ComGoogleCommonCollectSerialization_FieldSetter_

@class JavaLangReflectField;


@interface ComGoogleCommonCollectSerialization_FieldSetter : NSObject {
}

- (void)setWithId:(id)instance
           withId:(id)value;

- (void)setWithId:(id)instance
          withInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSerialization_FieldSetter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSerialization_FieldSetter)
