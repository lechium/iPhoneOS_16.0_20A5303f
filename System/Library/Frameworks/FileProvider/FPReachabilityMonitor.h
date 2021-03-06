//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    unsigned int _reachabilityFlags;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <NSObject> _accountDidChangeNotificationObserver;	// 40 = 0x28
    NSNumber *_isCellularEnabledForDocumentsAndData;	// 48 = 0x30
}

+ (id)_notifAccountStore;	// IMP=0x00600000000fd41c
+ (id)sharedReachabilityMonitor;	// IMP=0x00600000000fd2b2
+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;	// IMP=0x00600000000fcb97
- (void).cxx_destruct;	// IMP=0x00000000000fdae0
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
- (void)invalidate;	// IMP=0x00000000000fdac9
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000fda1e
- (void)addObserver:(id)arg1;	// IMP=0x00000000000fd906
- (_Bool)isNetworkReachableForBundle:(id)arg1;	// IMP=0x00000000000fd5f8
- (_Bool)_isCellularAllowedForBR;	// IMP=0x00000000000fd471
- (void)_accountDidChange;	// IMP=0x00000000000fd307
- (void)dealloc;	// IMP=0x00000000000fd278
- (id)init;	// IMP=0x00000000000fcbc1

@end

