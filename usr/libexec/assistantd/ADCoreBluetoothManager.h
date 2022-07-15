//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSafetyBlock, CBCentralManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADCoreBluetoothManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    CBCentralManager *_cbManager;	// 24 = 0x18
    _Bool _invalidated;	// 32 = 0x20
    NSMutableDictionary *_peripheralsPendingRSSI;	// 40 = 0x28
    NSMutableArray *_peripheralsWithRSSIRead;	// 48 = 0x30
    NSArray *_servicesToScan;	// 56 = 0x38
    AFSafetyBlock *_completionWrapper;	// 64 = 0x40
    unsigned long long _counter;	// 72 = 0x48
}

+ (void)fetchCBUUIDForConnectedDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000213290
+ (void)retrieveConnectedDevicesInfoOnDoAPServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000213192
+ (void)retrieveConnectedDevicesInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000021311a
- (void).cxx_destruct;	// IMP=0x0020000000214821
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;	// IMP=0x00100000002145ae
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00100000002144a6
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0010000000214379
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000214178
- (void)_didReadRSSI:(id)arg1 forPeripheral:(id)arg2;	// IMP=0x00100000002140a8
- (void)_connectToPeripherals:(id)arg1;	// IMP=0x0010000000213d4c
- (id)_adCoreBluetoothDeviceForPeripheral:(id)arg1 RSSI:(id)arg2;	// IMP=0x0010000000213bec
- (id)_getPeripheralStateDescriptionFromState:(long long)arg1;	// IMP=0x0010000000213bcd
- (void)_retrieveConnectedDevicesInfoOnServices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000213620
- (id)_init;	// IMP=0x001000000021346b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
