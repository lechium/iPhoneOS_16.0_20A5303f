//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLKappaNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000ac9fc1
+ (id)getSilo;	// IMP=0x0010000000ac9e0e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ac9df5
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000ac9d98
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000ac9f99
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ac9f6c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ac9f44
- (void *)adaptee;	// IMP=0x0010000000ac9f11
- (void)endService;	// IMP=0x0010000000ac9ef6
- (void)beginService;	// IMP=0x0010000000ac9ea7
- (id)init;	// IMP=0x0010000000ac9e6a
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0010000000ac9d92
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ac9bf5
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000ac9bef
- (int)syncgetKappaState;	// IMP=0x0010000000ac9b8e
- (void)forceTrigger;	// IMP=0x0010000000ac9b6d
- (void)dontcollect;	// IMP=0x0010000000ac9a99
- (void)collect;	// IMP=0x0010000000ac99c5
- (void)simulateTriggerWithDelay:(int)arg1;	// IMP=0x0010000000ac9869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

