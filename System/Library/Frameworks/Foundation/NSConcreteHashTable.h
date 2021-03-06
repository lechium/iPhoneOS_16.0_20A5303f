//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHashTable.h"

__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable
{
    struct NSSlice slice;	// 8 = 0x8
    unsigned long long count;	// 40 = 0x28
    unsigned long long capacity;	// 48 = 0x30
    unsigned long long mutations;	// 56 = 0x38
    unsigned int options:63;	// 64 = 0x40
    unsigned int hasDynamicSlice:1;	// 71 = 0x47
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004b8d2c
- (id)objectEnumerator;	// IMP=0x00000000004ba350
- (id)description;	// IMP=0x00000000004ba26f
- (void)dealloc;	// IMP=0x00000000004ba1a9
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x00000000004ba11a
- (id)allObjects;	// IMP=0x00000000004b9ffe
- (void)removeAllItems;	// IMP=0x00000000004b9f54
- (void)removeItem:(const void *)arg1;	// IMP=0x00000000004b9e6d
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x00000000004b9d66
- (void)addObject:(id)arg1;	// IMP=0x00000000004b9cb1
- (void)insertItem:(const void *)arg1;	// IMP=0x00000000004b9bfc
- (void *)getItem:(const void *)arg1;	// IMP=0x00000000004b9ba5
- (void)rehash;	// IMP=0x00000000004b9b25
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2;	// IMP=0x00000000004b9ac1
- (void)hashGrow;	// IMP=0x00000000004b99a9
- (unsigned long long)rehashAround:(unsigned long long)arg1;	// IMP=0x00000000004b9603
- (void)raiseCountUnderflowException;	// IMP=0x00000000004b95b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b9490
- (unsigned long long)hash;	// IMP=0x00000000004b946a
- (unsigned long long)count;	// IMP=0x00000000004b9459
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000004b93b3
- (id)pointerFunctions;	// IMP=0x00000000004b9375
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b902f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b8d34
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000004b8bd1
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000004b8a71
- (id)copy;	// IMP=0x00000000004b88aa
- (id)init;	// IMP=0x00000000004b8891

@end

