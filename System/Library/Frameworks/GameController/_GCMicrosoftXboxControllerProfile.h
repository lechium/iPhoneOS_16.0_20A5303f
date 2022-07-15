//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCMicrosoftXboxControllerProfile : NSObject
{
}

+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x00100000000536e7
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x0010000000053524
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000532c9
+ (long long)logicalDeviceDeterminePhysicalInputType:(id)arg1;	// IMP=0x0010000000053089
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x0010000000052f36
+ (id)logicalDeviceControllerDetailedProductCategory:(id)arg1;	// IMP=0x0010000000052e2c
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x0010000000052e18
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x0010000000052e00
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x0010000000052de8
+ (id)deviceManager;	// IMP=0x0010000000052cba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
