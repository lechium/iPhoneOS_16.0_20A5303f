//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STCachingCodableStore;

@interface STPersistentTransportServiceMessageLedger : NSObject
{
    STCachingCodableStore *_keyValueStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005bc55
@property(readonly) STCachingCodableStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (id)addressesFromItem:(id)arg1 inState:(long long)arg2;	// IMP=0x001000000005baf7
- (void)_enumerateItemsWithState:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b932
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005b91b
- (void)enumerateItemsWithState:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b89a
- (id)fetchItemWithMessageIdentifier:(id)arg1;	// IMP=0x001000000005b7f8
- (void)removeItemWithMessageIdentifier:(id)arg1;	// IMP=0x001000000005b768
- (void)setItem:(id)arg1 forMessageIdentifier:(id)arg2;	// IMP=0x001000000005b6c0
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x001000000005b620

@end
