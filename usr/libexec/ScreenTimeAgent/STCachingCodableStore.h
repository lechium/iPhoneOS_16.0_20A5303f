//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSCache;
@protocol STKeyValueStore;

@interface STCachingCodableStore : NSObject
{
    id <STKeyValueStore> _backingStore;	// 8 = 0x8
    MISSING_TYPE *_keyValueCache;	// 16 = 0x10
    Class _valueClass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000fd12
@property(readonly) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly) NSCache *keyValueCache; // @synthesize keyValueCache=_keyValueCache;
@property(readonly) id <STKeyValueStore> backingStore; // @synthesize backingStore=_backingStore;
- (id)purge;	// IMP=0x001000000000fc86
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fa47
- (id)readValueForKey:(id)arg1;	// IMP=0x001000000000f7f7
- (void)removeValueForKey:(id)arg1;	// IMP=0x001000000000f757
- (void)persistValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000f5d8
- (id)description;	// IMP=0x001000000000f519
- (id)initWithKeyValueStore:(id)arg1 cacheSize:(id)arg2 valueClass:(Class)arg3;	// IMP=0x001000000000f43f

@end
