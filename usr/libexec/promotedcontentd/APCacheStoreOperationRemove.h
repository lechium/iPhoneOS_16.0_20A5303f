//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APCacheStore, NSString;

@interface APCacheStoreOperationRemove : NSObject
{
    APCacheStore *_cacheStore;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000da5a0
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) __weak APCacheStore *cacheStore; // @synthesize cacheStore=_cacheStore;
- (_Bool)_removeObjectForKey:(id)arg1;	// IMP=0x00100000000da25f
- (void)rollBack;	// IMP=0x00100000000da259
- (void)commit;	// IMP=0x00100000000da253
- (_Bool)execute;	// IMP=0x00100000000da200
- (id)initWithCacheStore:(id)arg1 key:(id)arg2;	// IMP=0x00100000000da184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
