//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenSetM : NSSet
{
    CDStruct_af6d7307 storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000013ab21
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ac97
- (id)mutableCopy;	// IMP=0x000000000013abef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013abea
- (id)copy;	// IMP=0x000000000013abe5
- (void)dealloc;	// IMP=0x000000000013ab26
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000013aa8c
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013a910
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000013a861
- (double)clumpingInterestingThreshold;	// IMP=0x000000000013a809
- (double)clumpingFactor;	// IMP=0x000000000013a5fb
- (id)objectEnumerator;	// IMP=0x000000000013a5a1
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000013a492
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000013a386
- (id)member:(id)arg1;	// IMP=0x000000000013a27f
- (unsigned long long)count;	// IMP=0x000000000013a26e

@end

