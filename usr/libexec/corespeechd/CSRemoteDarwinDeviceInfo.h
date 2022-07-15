//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSRemoteDarwinDeviceInfo : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00400000000dc046
- (_Bool)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg1;	// IMP=0x00400000000dc0a2
- (id)fetchRichDeviceUIDStringFromUUID:(id)arg1;	// IMP=0x00100000000dc09a
- (_Bool)isRemoteDarwinConnectedWithUUID:(id)arg1;	// IMP=0x00100000000dc092
- (_Bool)hasDarwinDeviceHandleVoiceTrigger;	// IMP=0x00100000000dc08a
- (_Bool)hasDarwinDeviceConnected;	// IMP=0x00100000000dc082
- (id);	// IMP=0x00100000000dc07a
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000dc074
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000dc06e
- (void)allDeviceDisconnected;	// IMP=0x00100000000dc068
- (void)deviceDisconnectedWithUUID:(id)arg1;	// IMP=0x00100000000dc062
- (void)deviceConnectedWithUUID:(id)arg1;	// IMP=0x00100000000dc05c
- (id)init;	// IMP=0x00100000000dc04e

@end
