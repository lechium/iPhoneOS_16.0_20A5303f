//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _TtC8MapsSync20MapsSyncVehicleQuery;
@protocol OS_dispatch_queue, VGVirtualGaragePersistingDelegate;

@interface VirtualGaragePersister : NSObject
{
    _TtC8MapsSync20MapsSyncVehicleQuery *_fetchQuery;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSArray *_lastPersistedVehicles;	// 24 = 0x18
    id <VGVirtualGaragePersistingDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001f3160
@property(nonatomic) __weak id <VGVirtualGaragePersistingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_processUpdatedSyncVehicles:(id)arg1;	// IMP=0x00100000001f2d9c
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x00100000001f298b
- (void)_addOrEditVehicle:(id)arg1;	// IMP=0x00100000001f170e
@property(copy, nonatomic) NSString *selectedVehicleIdentifier;
- (id)persistedVehicleForVehicle:(id)arg1;	// IMP=0x00100000001f143e
- (void)saveVehicle:(id)arg1 syncAcrossDevices:(_Bool)arg2;	// IMP=0x00100000001f1274
- (void)_removeSyncVehicle:(id)arg1;	// IMP=0x00100000001f0f7f
- (void)removeVehicle:(id)arg1;	// IMP=0x00100000001f0d18
- (void)addVehicle:(id)arg1;	// IMP=0x00100000001f0b97
- (void)loadVehiclesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0600
- (id)init;	// IMP=0x00100000001f04f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

