//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APCacheGarbageCollector, MISSING_TYPE;
@protocol APPersistentCachedStoreTransactionalProtocol><APPersistentCachedStoreDiagnosticsProtocol, OS_dispatch_queue;

@interface APPersistentCache : NSObject
{
    id <APPersistentCachedStoreTransactionalProtocol><APPersistentCachedStoreDiagnosticsProtocol> _persistentCacheStore;	// 8 = 0x8
    MISSING_TYPE *_gcSchedulerQueue;	// 16 = 0x10
    APCacheGarbageCollector *_garbageCollector;	// 24 = 0x18
    double _cacheObjectTTL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ea86f
@property(nonatomic) double cacheObjectTTL; // @synthesize cacheObjectTTL=_cacheObjectTTL;
@property(retain, nonatomic) APCacheGarbageCollector *garbageCollector; // @synthesize garbageCollector=_garbageCollector;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *gcSchedulerQueue; // @synthesize gcSchedulerQueue=_gcSchedulerQueue;
@property(readonly, nonatomic) id <APPersistentCachedStoreTransactionalProtocol><APPersistentCachedStoreDiagnosticsProtocol> persistentCacheStore; // @synthesize persistentCacheStore=_persistentCacheStore;
- (void)_dumpCache;	// IMP=0x00100000000ea0e1
- (void)_setLastGCDate:(id)arg1;	// IMP=0x00100000000ea06b
- (id)_getLastGCDate;	// IMP=0x00100000000ea014
- (void)_performGC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9c58
- (void)_performGCWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e9ba7
- (void)_setupNotifyListenerForNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9a3f
- (void)_setupNotifyListener;	// IMP=0x00100000000e9728
- (void)stopGC;	// IMP=0x00100000000e96eb
- (void)startGCWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e96d9
- (void)start;	// IMP=0x00100000000e95e8
- (id)initWithCacheSize:(long long)arg1;	// IMP=0x00100000000e94bc

@end

