//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderDomainVersion, NSFileProviderManager, NSString;

__attribute__((visibility("hidden")))
@interface FPPendingSetEnumerator : NSObject
{
    NSFileProviderManager *_manager;	// 8 = 0x8
    NSFileProviderDomainVersion *_domainVersion;	// 16 = 0x10
    double _refreshInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f4955
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)invalidate;	// IMP=0x00000000000f493a
- (void)currentSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4888
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;	// IMP=0x00000000000f447b
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;	// IMP=0x00000000000f40a3
- (id)initWithManager:(id)arg1;	// IMP=0x00000000000f4018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

