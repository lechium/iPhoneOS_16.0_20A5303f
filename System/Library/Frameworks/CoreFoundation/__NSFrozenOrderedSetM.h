//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSet.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenOrderedSetM : NSOrderedSet
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_2595eaee storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000e0d10
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000e0a0a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0ea1
- (id)mutableCopy;	// IMP=0x00000000000e0dfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0df9
- (id)copy;	// IMP=0x00000000000e0df4
- (void)dealloc;	// IMP=0x00000000000e0d15
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000e0c3c
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0c14
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000e0baa
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000e0b42
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e0ab9
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000000e0a1d
- (unsigned long long)count;	// IMP=0x00000000000e0a0d

@end
