//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL, NSUUID;

@interface LSRecord : NSObject
{
    void *_resolvedProperties;	// 8 = 0x8
    struct LSContext _context;	// 16 = 0x10
    unsigned int _unitID;	// 24 = 0x18
    unsigned int _tableID:16;	// 28 = 0x1c
    unsigned int _discardableContentCounter:14;	// 30 = 0x1e
    unsigned int _intentionallyInvalid:1;	// 31 = 0x1f
    unsigned int _shared:1;	// 31 = 0x1f
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000111415
+ (_Bool)hasDatabaseAccess;	// IMP=0x001000000010fba9
+ (id)new;	// IMP=0x001000000010fb2d
+ (void)initialize;	// IMP=0x001000000010fad0
+ (void)resolveAllPropertiesOfRecords:(id)arg1 andDetachOnQueue:(id)arg2;	// IMP=0x001000000011254c
+ (void)resolveAllPropertiesOfRecords:(const id *)arg1 count:(unsigned long long)arg2 andDetachOnQueue:(id)arg3;	// IMP=0x0010000000112229
+ (id)_propertyClasses;	// IMP=0x0010000000114a83
- (id).cxx_construct;	// IMP=0x0000000000112034
- (void).cxx_destruct;	// IMP=0x0000000000112025
- (_Bool)isContentDiscarded;	// IMP=0x0000000000111ff3
- (void)discardContentIfPossible;	// IMP=0x0000000000111f98
- (void)endContentAccess;	// IMP=0x0000000000111e90
- (_Bool)beginContentAccess;	// IMP=0x0000000000111d90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000111c2d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001117d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011141d
- (void)detach;	// IMP=0x000000000011128f
- (id)debugDescription;	// IMP=0x00000000001111c3
- (id)description;	// IMP=0x0000000000111177
- (unsigned int)tableID;	// IMP=0x000000000011116d
- (unsigned int)unitID;	// IMP=0x0000000000111164
@property(nonatomic, getter=_isShared, setter=_setShared:) _Bool _shared;
- (id)_attributedDescription;	// IMP=0x0000000000110fd4
- (void)_ifAttached:(CDUnknownBlockType)arg1 else:(CDUnknownBlockType)arg2;	// IMP=0x0000000000110ee0
- (void)_performBlockWithContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110dbf
- (void)_resolveAllProperties;	// IMP=0x0000000000110b7e
- (id)_resolvedPropertyValueForGetter:(SEL)arg1;	// IMP=0x0000000000110b6a
- (id)_resolvedPropertyValueForGetter:(SEL)arg1 nullPlaceholder:(id)arg2;	// IMP=0x0000000000110a93
- (void)_removeResolvedPropertyValueForGetter:(SEL)arg1;	// IMP=0x000000000011099b
- (void)_setResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2;	// IMP=0x0000000000110815
- (id)_initInvalid;	// IMP=0x00000000001107c4
- (id)_initWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3;	// IMP=0x000000000011073d
- (id)initWithPersistentIdentifier:(id)arg1;	// IMP=0x00000000001104bc
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifier:(id)arg2;	// IMP=0x000000000011000a
@property(readonly) NSData *persistentIdentifier;
@property(readonly, nonatomic) id compatibilityObject;
- (void)dealloc;	// IMP=0x000000000010fb5b
- (id)init;	// IMP=0x000000000010fb36
@property(readonly, nonatomic) NSURL *visualizerURL;
@property(readonly) NSUUID *databaseUUID;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)arg1;	// IMP=0x00000000001121f8
- (id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3;	// IMP=0x0000000000114b91
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000114b8b
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000114b0c
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000114a90
- (id)_compatibilityObjectWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000114a7b
- (id)_propertyClassesForCoding;	// IMP=0x0000000000115119
- (const void *)_resolvingMethods;	// IMP=0x0000000000114d9c

@end

