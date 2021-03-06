//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;	// 8 = 0x8
    NSMapTable *_keysToClientTables;	// 16 = 0x10
    NSMapTable *_keysToValues;	// 24 = 0x18
    NSMapTable *_valuesToKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001273dae
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x0000000001273cb2
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x0000000001273be7
- (id)cachedObjectEnumerable;	// IMP=0x0000000001273bd9
- (id)keyEnumerable;	// IMP=0x0000000001273bcb
- (id)cachedObjects;	// IMP=0x0000000001273bbd
- (id)keys;	// IMP=0x0000000001273baf
- (_Bool)hasCachedObjectForKey:(id)arg1;	// IMP=0x0000000001273b78
- (id)objectForKey:(id)arg1;	// IMP=0x0000000001273a8e
- (unsigned long long)count;	// IMP=0x0000000001273a78
- (id)description;	// IMP=0x00000000012739fb
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000012738f6

@end

