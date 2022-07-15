//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDevice, NSNumber, NSUUID;
@protocol HDPairedDeviceCapabilityProvidingDelegate;

@protocol HDPairedDeviceCapabilityProviding
@property(nonatomic) __weak id <HDPairedDeviceCapabilityProvidingDelegate> delegate;
- (void)startListeningForUpdates;
- (_Bool)isCapabilitySupported:(NSUUID *)arg1 onDevice:(NRDevice *)arg2;
- (NRDevice *)activePairedDevice;
- (NSNumber *)isCapabilitySupportedOnActivePairedDevice:(NSUUID *)arg1 error:(id *)arg2;
@end
