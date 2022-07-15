//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHashTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;	// 8 = 0x8
    struct __CFBasicHash *_ht;	// 48 = 0x30
}

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x00000000004baddc
- (id)allObjects;	// IMP=0x00000000004babde
- (id)description;	// IMP=0x00000000004ba9f2
- (unsigned long long)count;	// IMP=0x00000000004ba9dd
- (void)removeItem:(const void *)arg1;	// IMP=0x00000000004ba990
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x00000000004ba88a
- (void)addObject:(id)arg1;	// IMP=0x00000000004ba83d
- (void)insertItem:(const void *)arg1;	// IMP=0x00000000004ba7f0
- (void *)getItem:(const void *)arg1;	// IMP=0x00000000004ba783
- (id)copy;	// IMP=0x00000000004ba6b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ba658
- (unsigned long long)hash;	// IMP=0x00000000004ba646
- (void)removeAllItems;	// IMP=0x00000000004ba627
- (void)dealloc;	// IMP=0x00000000004ba5c3
- (id)init;	// IMP=0x00000000004ba5ba

@end
