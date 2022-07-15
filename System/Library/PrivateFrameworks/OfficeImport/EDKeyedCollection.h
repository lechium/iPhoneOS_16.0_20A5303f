//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection
{
    OITSUIntegerKeyDictionary *mMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a87fd
- (id)objectWithKey:(long long)arg1;	// IMP=0x0000000000134fb3
- (void)removeAllObjects;	// IMP=0x00000000003a87b3
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000246566
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000003a8720
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000124b06
- (unsigned long long)addObject:(id)arg1;	// IMP=0x0000000000114874
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022bcd2
- (_Bool)isOverwritingKeyOK;	// IMP=0x00000000003a888e
- (void)removeFromMap:(id)arg1;	// IMP=0x000000000024660a
- (void)insertIntoMap:(id)arg1;	// IMP=0x00000000001149a5
- (_Bool)isObjectInMap:(id)arg1;	// IMP=0x00000000003a8810

@end
