//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OITSUAtomicLRUCache
{
}

- (void)clearEvictionCallbackTarget;	// IMP=0x000000000027fb8b
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000027fb26
- (id)allKeys;	// IMP=0x000000000027fab3
- (id)allValues;	// IMP=0x000000000027fa40
- (id)objectForKey:(id)arg1;	// IMP=0x000000000027f9ce
- (void)removeAllObjects;	// IMP=0x000000000027f979
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000027f91e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000027f8b9

@end
