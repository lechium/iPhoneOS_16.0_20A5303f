//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCControllerCBDelegate : NSObject
{
    NSMutableArray *_foundPeripherals;	// 8 = 0x8
    NSMutableArray *_connectedPeripherals;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c8504
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c83dc
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c82e8
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c7f0a
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c7b4d
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c7947
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c6eed
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c6ce1
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000000c6aac
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x00000000000c68cc
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000000c6717
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;	// IMP=0x00000000000c666c
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x00000000000c65c1
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000c6397
- (void)startScanWithTimeout:(double)arg1;	// IMP=0x00000000000c5fe3
- (void)startScan;	// IMP=0x00000000000c5fc9
- (void)stopScan;	// IMP=0x00000000000c5f44
- (void)fireCompletionHandler;	// IMP=0x00000000000c5e93
- (id)init;	// IMP=0x00000000000c5e1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

