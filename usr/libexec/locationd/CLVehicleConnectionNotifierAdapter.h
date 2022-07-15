//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLVehicleConnectionNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000087dae7
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000087dace
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000087da71
- (void)deliverAndReleaseNotification:(struct __CFUserNotification *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x002000000087ddba
- (void)fetchIsDeviceVehicle:(id)arg1 deviceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000087ddb4
- (struct CLVehicleConnection)syncgetMostRecentInVehicle;	// IMP=0x001000000087dd76
- (struct CLVehicleConnection)syncgetMostRecentVehicleConnection;	// IMP=0x001000000087dd3c
- (void)fetchMostRecentConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000087dcfa
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000087dcd2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000087dca5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000087dc7d
- (void *)adaptee;	// IMP=0x001000000087dc4a
- (void)endService;	// IMP=0x001000000087dc2f
- (void)beginService;	// IMP=0x001000000087db80
- (id)init;	// IMP=0x001000000087db43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
