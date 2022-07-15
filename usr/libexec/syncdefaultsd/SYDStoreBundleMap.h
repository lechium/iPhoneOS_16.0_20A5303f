//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface SYDStoreBundleMap : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_cachedStoreBundleMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000001fee
- (void).cxx_destruct;	// IMP=0x0020000000003900
@property(retain, nonatomic) NSDictionary *cachedStoreBundleMap; // @synthesize cachedStoreBundleMap=_cachedStoreBundleMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)installedAppsDidChange:(id)arg1;	// IMP=0x00100000000037c0
- (id)generateStoreBundleMap;	// IMP=0x0010000000002e74
- (id)storeIdentifiersForInstalledBundles;	// IMP=0x0010000000002cac
- (void)generateStoreBundleMapIfNecessary;	// IMP=0x0010000000002bd9
- (id)bundleIdentifiersForStoreIdentifier:(id)arg1;	// IMP=0x0010000000002978
- (_Bool)isStoreIdentifierUsedOnThisDevice:(id)arg1;	// IMP=0x00100000000028ee
- (void)setCloudSyncUserDefaultEnabled:(_Bool)arg1 storeIdentifier:(id)arg2;	// IMP=0x00100000000025de
- (_Bool)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)arg1;	// IMP=0x001000000000230b
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;	// IMP=0x00100000000021d4
- (void)dealloc;	// IMP=0x001000000000215f
- (id)init;	// IMP=0x0010000000002043

@end
