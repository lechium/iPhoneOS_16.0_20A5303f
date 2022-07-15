//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HSNetworkInterfaceManagerDelegate;

@interface HSNetworkInterfaceManager : NSObject
{
    id <HSNetworkInterfaceManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003c447
@property(nonatomic) __weak id <HSNetworkInterfaceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setWiFiPowerState:(_Bool)arg1;	// IMP=0x001000000003c41a
@property(readonly, nonatomic) unsigned long long wiFiInterfaceStatus;
- (void)_unregisterForWiFiNotifications;	// IMP=0x001000000003c40c
- (void)_registerForWiFiNotifications;	// IMP=0x001000000003c406
- (void)_setBluetoothPowerState:(_Bool)arg1;	// IMP=0x001000000003c400
- (void)_handleBluetoothManagerStateChange:(id)arg1;	// IMP=0x001000000003c3a4
@property(readonly, nonatomic) unsigned long long bluetoothInterfaceStatus;
- (void)_unregisterForBluetoothNotifications;	// IMP=0x001000000003c396
- (void)_registerForBluetoothNotifications;	// IMP=0x001000000003c390
- (void)setNetworkInterfacePowerState:(_Bool)arg1;	// IMP=0x001000000003c2f7
- (void)dealloc;	// IMP=0x001000000003c278
- (void)stopObservingInterfaceChanges;	// IMP=0x001000000003c24a
- (void)startObservingInterfaceChanges;	// IMP=0x001000000003c21c

@end
