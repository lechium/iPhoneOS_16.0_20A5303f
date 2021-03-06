//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class AXMIDIDevice, AXMIDIDeviceEntity, AXMIDIDeviceEntityEndpoint;

@protocol AXMIDIDeviceProtocol <NSObject>
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveSource:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddSource:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 didRemoveEntity:(AXMIDIDeviceEntity *)arg2;
- (void)device:(AXMIDIDevice *)arg1 didAddEntity:(AXMIDIDeviceEntity *)arg2;
@end

