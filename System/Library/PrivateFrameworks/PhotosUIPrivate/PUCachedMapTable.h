//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PUCachedMapTable : NSObject
{
    unsigned long long _cacheCountLimit;	// 8 = 0x8
    NSMapTable *__mapTable;	// 16 = 0x10
    NSMutableOrderedSet *__cachedObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000103a77
@property(readonly, nonatomic) NSMutableOrderedSet *_cachedObjects; // @synthesize _cachedObjects=__cachedObjects;
@property(readonly, nonatomic) NSMapTable *_mapTable; // @synthesize _mapTable=__mapTable;
@property(nonatomic) unsigned long long cacheCountLimit; // @synthesize cacheCountLimit=_cacheCountLimit;
- (void)_objectWasRecentlyUsed:(id)arg1;	// IMP=0x0000000000103942
- (unsigned long long)_initialCapacity;	// IMP=0x0000000000103923
- (id)_cachedObjectsCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000001038b5
- (id)_mapTableCreateIfNeeded:(_Bool)arg1;	// IMP=0x0000000000103840
- (id)keyEnumerator;	// IMP=0x00000000001037eb
- (void)removeAllObjects;	// IMP=0x000000000010376a
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103517
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000103477
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000103390
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001032fa
@property(readonly, nonatomic) unsigned long long accurateCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000103113

@end
