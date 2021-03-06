//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable
{
    struct NSSlice keys;	// 8 = 0x8
    struct NSSlice values;	// 40 = 0x28
    unsigned long long count;	// 72 = 0x48
    unsigned long long capacity;	// 80 = 0x50
    unsigned long long keyOptions;	// 88 = 0x58
    unsigned long long valueOptions;	// 96 = 0x60
    unsigned long long mutations;	// 104 = 0x68
    struct os_unfair_lock_s growLock;	// 112 = 0x70
    _Bool shouldRehash;	// 116 = 0x74
    _Bool hasDynamicSlices;	// 117 = 0x75
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000050e941
- (id)allValues;	// IMP=0x0000000000510e2b
- (id)allKeys;	// IMP=0x0000000000510d63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000510c1d
- (unsigned long long)hash;	// IMP=0x0000000000510be5
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x0000000000510af8
- (id)objectEnumerator;	// IMP=0x0000000000510adc
- (id)keyEnumerator;	// IMP=0x0000000000510aa6
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000005109dd
- (id)description;	// IMP=0x00000000005108a5
- (void)dealloc;	// IMP=0x00000000005107a8
- (void)removeAllItems;	// IMP=0x00000000005106ec
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000005105c8
- (void)_reclaim;	// IMP=0x00000000005105be
- (void)rehash;	// IMP=0x0000000000510532
- (unsigned long long)rehashAround:(unsigned long long)arg1;	// IMP=0x00000000005102b4
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;	// IMP=0x00000000005101fa
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x0000000000510131
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x0000000000510041
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x000000000050ff44
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x000000000050fe70
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000050fd96
- (id)objectForKey:(id)arg1;	// IMP=0x000000000050fd0b
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(_Bool)arg4;	// IMP=0x000000000050fc09
- (void)grow;	// IMP=0x000000000050f8f3
- (id)dump;	// IMP=0x000000000050f6e3
- (_Bool)containsKeys:(const void **)arg1 values:(const void **)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000050f2c0
- (unsigned long long)__capacity;	// IMP=0x000000000050f2af
- (unsigned long long)count;	// IMP=0x000000000050f25a
- (id)valuePointerFunctions;	// IMP=0x000000000050f21c
- (id)keyPointerFunctions;	// IMP=0x000000000050f1de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000050ed86
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000050e949
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000050e792
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000050e5e0
- (id)copy;	// IMP=0x000000000050e3f5
- (void)_setBackingStore;	// IMP=0x000000000050e361
- (void)checkCount:(const char *)arg1;	// IMP=0x000000000050e2d8
- (unsigned long long)realCount;	// IMP=0x000000000050e22d
- (void)raiseCountUnderflowException;	// IMP=0x000000000050e1dc
- (id)init;	// IMP=0x000000000050e1c0

@end

