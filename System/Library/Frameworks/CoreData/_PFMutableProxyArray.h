//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSString, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _editCount;	// 12 = 0xc
    unsigned int _offset;	// 16 = 0x10
    unsigned int _limit;	// 20 = 0x14
    _PFArray *_originalArray;	// 24 = 0x18
    NSMutableArray *_updatedObjectsArray;	// 32 = 0x20
    struct __CFArray *_indicesVeneer;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00100000000684e6
- (Class)classForCoder;	// IMP=0x00000000000684d5
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000068462
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000683e0
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006836d
- (void)removeLastObject;	// IMP=0x00000000000682d7
- (void)addObject:(id)arg1;	// IMP=0x000000000006826c
- (id)valueForKey:(id)arg1;	// IMP=0x00000000000681cb
- (id)newArrayFromObjectIDs;	// IMP=0x00000000000680c1
- (id)arrayFromObjectIDs;	// IMP=0x00000000000680a7
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x0000000000068001
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000067f48
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x0000000000067f06
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000067ec4
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000067e82
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000067e00
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000067d9a
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000067bd7
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067aad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067983
- (id)mutableCopy;	// IMP=0x000000000006796f
- (id)copy;	// IMP=0x000000000006795b
- (unsigned long long)count;	// IMP=0x0000000000067946
- (_Bool)_isDeallocating;	// IMP=0x0000000000067923
- (_Bool)_tryRetain;	// IMP=0x00000000000678e5
- (unsigned long long)retainCount;	// IMP=0x00000000000678cd
- (oneway void)release;	// IMP=0x000000000006788f
- (id)retain;	// IMP=0x000000000006786e
- (void)dealloc;	// IMP=0x0000000000067808
- (id)subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000676b0
- (id)initWithPFArray:(id)arg1;	// IMP=0x000000000006766b
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000067574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

