//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000218bef
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000218bd6
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000218b79
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x002000000021a158
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x001000000021a152
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000219e91
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000219e8b
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x0010000000219e4f
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x00100000002192de
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x0010000000218e31
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x0010000000218e02
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000218dda
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000218dad
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000218d85
- (void *)adaptee;	// IMP=0x0010000000218d52
- (void)endService;	// IMP=0x0010000000218d37
- (void)beginService;	// IMP=0x0010000000218c88
- (id)init;	// IMP=0x0010000000218c4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

