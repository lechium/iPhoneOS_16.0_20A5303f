//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAssetsActivityTransactionManager, AXAssetsXPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXAssetsDaemon : NSObject
{
    AXAssetsActivityTransactionManager *_activityTransactionManager;	// 8 = 0x8
    AXAssetsXPCServer *_xpcServer;	// 16 = 0x10
    NSMutableArray *_managedAssets;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000000d1b0
- (void).cxx_destruct;	// IMP=0x002000000000dcab
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSMutableArray *managedAssets; // @synthesize managedAssets=_managedAssets;
@property(retain, nonatomic) AXAssetsXPCServer *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) AXAssetsActivityTransactionManager *activityTransactionManager; // @synthesize activityTransactionManager=_activityTransactionManager;
- (void)willBecomeIdle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000da51
- (void)_updateAssetForAssetType:(id)arg1;	// IMP=0x001000000000d9e0
- (void)_refreshAssetCatalogForAssetType:(id)arg1 withOverrideTimeout:(id)arg2 forceCatalogRefresh:(_Bool)arg3;	// IMP=0x001000000000d940
- (id)_managedAssetForAssetType:(id)arg1;	// IMP=0x001000000000d730
- (void)run;	// IMP=0x001000000000d5c5
- (void)registerManagedAssets:(id)arg1;	// IMP=0x001000000000d553
- (void)registerManagedAsset:(id)arg1;	// IMP=0x001000000000d4e1
- (id)_init;	// IMP=0x001000000000d215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
