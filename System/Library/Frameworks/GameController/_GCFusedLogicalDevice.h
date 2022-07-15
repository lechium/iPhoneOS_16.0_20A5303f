//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_GCDefaultLogicalDevice.h"

@protocol _GCPhysicalDevice;

__attribute__((visibility("hidden")))
@interface _GCFusedLogicalDevice : _GCDefaultLogicalDevice
{
    id <_GCPhysicalDevice> _secondaryDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000984e6
@property(readonly, nonatomic) id <_GCPhysicalDevice> secondaryDevice; // @synthesize secondaryDevice=_secondaryDevice;
- (id)_makeControllerGamepadEventSource;	// IMP=0x000000000009801a
- (id)underlyingDevices;	// IMP=0x0000000000097f90
- (id)init;	// IMP=0x0000000000097f65
- (id)initWithPrimaryPhysicalDevice:(id)arg1 secondaryPhysicalDevice:(id)arg2 configuration:(id)arg3 manager:(id)arg4;	// IMP=0x0000000000097eeb

@end
