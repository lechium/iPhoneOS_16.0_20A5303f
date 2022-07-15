//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AKURLBagService : NSObject
{
    NSObject<OS_dispatch_queue> *_bagFetchQueue;	// 8 = 0x8
    NSDictionary *_lastUpdated;	// 16 = 0x10
    NSDictionary *_cachedBags;	// 24 = 0x18
}

+ (id)sharedBagService;	// IMP=0x002000000007b379
- (void).cxx_destruct;	// IMP=0x002000000007cbfd
- (void)_unsafe_updateCacheWithData:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x001000000007c86e
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c7a3
- (void)_updateURLBagIfNecessaryFromCache:(_Bool)arg1 altDSID:(id)arg2 urlSwitchData:(id)arg3 shouldFallBack:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007bc5c
- (id)_updateURLBagIfNecessaryFromCache:(_Bool)arg1 altDSID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007ba0b
- (id)_cachedURLBagForAltDSID:(id)arg1;	// IMP=0x001000000007b819
- (id)urlBagFromCache:(_Bool)arg1 altDSID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007b73c
- (id)urlBagForAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007b722
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b62e
- (void)clearSerializedMemoryCache;	// IMP=0x001000000007b540
- (void)clearSessionCache;	// IMP=0x001000000007b4bb
- (void)clearCache;	// IMP=0x001000000007b48d
- (id)init;	// IMP=0x001000000007b418

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
