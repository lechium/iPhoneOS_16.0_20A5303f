//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_1ee95920 _persistentIDs;	// 8 = 0x8
    struct vector<unsigned char, std::allocator<unsigned char>> _sections;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000001116cc
- (void).cxx_destruct;	// IMP=0x0000000000111692
- (id)backingStoreByRemovingPersistentIDs:(const void *)arg1;	// IMP=0x00000000001113f0
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011124e
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001110a4
- (_Bool)containsPersistentIDs:(const void *)arg1;	// IMP=0x0000000000111051
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110fd5
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110f4b
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000110ef3
@property(readonly, nonatomic) unsigned long long count;

@end

