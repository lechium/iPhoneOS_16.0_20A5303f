//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSUUUIDSetStore : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    TSUSparseArray *_uuidSetForIndex;	// 16 = 0x10
    NSMutableDictionary *_indexesUsingUuid;	// 24 = 0x18
    unsigned int _highestIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002d40e5
- (unsigned int)addSetForSingleUuid:(const void *)arg1;	// IMP=0x00000000002d3e04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d3d1b
@property(readonly) unsigned long long count;
- (void)foreachUuidSet:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d3c8e
- (id)subsetStoreForIndexes:(id)arg1;	// IMP=0x00000000002d3a93
- (void)_foreachUuidSet:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d39be
- (id)indexesUsingAnyOfUuids:(const void *)arg1;	// IMP=0x00000000002d387a
- (id)indexesUsingUuid:(const void *)arg1;	// IMP=0x00000000002d37d7
- (_Bool)containsUuidSet:(id)arg1;	// IMP=0x00000000002d37bf
- (unsigned int)indexOfSet:(id)arg1;	// IMP=0x00000000002d33ef
- (id)setForIndex:(unsigned int)arg1;	// IMP=0x00000000002d337c
- (void)removeSetAtIndex:(unsigned int)arg1;	// IMP=0x00000000002d331d
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000002d3011
- (unsigned int)addSetForUuids:(const void *)arg1;	// IMP=0x00000000002d2f93
- (unsigned int)addSet:(id)arg1;	// IMP=0x00000000002d2e12
- (id)description;	// IMP=0x00000000002d2c8e
- (id)init;	// IMP=0x00000000002d2be0

@end
