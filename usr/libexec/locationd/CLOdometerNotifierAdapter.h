//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLOdometerNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000127c88
+ (id)getSilo;	// IMP=0x0010000000127a76
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127a5d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000127a00
- (void)unregisterForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x0020000000127f11
- (void)registerForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x0010000000127ee3
- (void)updatePhoneWorkoutElevationSubscription:(_Bool)arg1;	// IMP=0x0010000000127eb7
- (void)querySignificantElevationDeltaFromDate:(id)arg1 toDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000127cdc
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000127c60
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127c33
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000127c0b
- (void *)adaptee;	// IMP=0x0010000000127bd8
- (void)endService;	// IMP=0x0010000000127bbd
- (void)beginService;	// IMP=0x0010000000127b0f
- (id)init;	// IMP=0x0010000000127ad2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
