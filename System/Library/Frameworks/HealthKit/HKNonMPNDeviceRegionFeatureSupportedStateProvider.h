//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject
{
}

+ (unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;	// IMP=0x00100000000e4ce4
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;	// IMP=0x00100000000e4cd9
+ (unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2;	// IMP=0x00100000000e4cce
+ (unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;	// IMP=0x00100000000e4cc3
+ (unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1;	// IMP=0x00100000000e4cb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
