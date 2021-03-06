//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, CUSystemMonitor, NSMutableSet, NSString, SFDeviceAssetManager;

@interface SDDeviceAssetMonitor : NSObject
{
    _Bool _activated;	// 8 = 0x8
    unsigned long long _stateHandle;	// 16 = 0x10
    SFDeviceAssetManager *_deviceAssetManager;	// 24 = 0x18
    NSMutableSet *_bluetoothDevices;	// 32 = 0x20
    CUBluetoothClient *_bluetoothClient;	// 40 = 0x28
    CUSystemMonitor *_systemMonitor;	// 48 = 0x30
    NSMutableSet *_tasks;	// 56 = 0x38
}

+ (id)sharedAssetMonitor;	// IMP=0x002000000003dfdb
- (void).cxx_destruct;	// IMP=0x002000000003f3db
@property(readonly, copy, nonatomic) NSString *state;
- (struct os_state_data_s *)stateDump;	// IMP=0x001000000003eecd
- (void)downloadAssetsForQuery:(id)arg1;	// IMP=0x001000000003ebe0
- (void)triggerAssetCleanupWithBluetoothDeviceRemoved:(id)arg1;	// IMP=0x001000000003e902
- (void)bluetoothDeviceUnpaired:(id)arg1;	// IMP=0x001000000003e7a3
- (void)bluetoothDevicePaired:(id)arg1;	// IMP=0x001000000003e624
- (id)queryForBluetoothDevice:(id)arg1;	// IMP=0x001000000003e59f
- (void)setUpBluetoothDeviceMonitor;	// IMP=0x001000000003e3a2
- (void)addObservers;	// IMP=0x001000000003e1d8
- (void)activateIfReady;	// IMP=0x001000000003e0e3
- (id)init;	// IMP=0x001000000003e030

@end

