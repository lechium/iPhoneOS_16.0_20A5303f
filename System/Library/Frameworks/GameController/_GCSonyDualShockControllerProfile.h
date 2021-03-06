//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualShockControllerProfile : NSObject
{
}

+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x001000000007140e
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x0010000000071327
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000710cc
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x001000000007107d
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070e50
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x0010000000070e48
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;	// IMP=0x0010000000070d3c
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070a9a
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x0010000000070a1f
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x0010000000070904
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x00100000000708f0
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x00100000000708d8
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x00100000000708c0
+ (id)deviceManager;	// IMP=0x0010000000070792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

