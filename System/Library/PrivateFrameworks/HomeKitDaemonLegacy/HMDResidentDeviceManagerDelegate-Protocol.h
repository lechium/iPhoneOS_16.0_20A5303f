//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDResidentDevice;
@protocol HMDResidentDeviceManager;

@protocol HMDResidentDeviceManagerDelegate <NSObject>
- (void)residentDeviceManagerDidUpdateResidents:(id <HMDResidentDeviceManager>)arg1;
- (void)residentDeviceManager:(id <HMDResidentDeviceManager>)arg1 didUpdatePrimaryResident:(HMDResidentDevice *)arg2 previousPrimaryResident:(HMDResidentDevice *)arg3;
- (void)residentDeviceManager:(id <HMDResidentDeviceManager>)arg1 didUpdateResidentAvailable:(_Bool)arg2;
@end

