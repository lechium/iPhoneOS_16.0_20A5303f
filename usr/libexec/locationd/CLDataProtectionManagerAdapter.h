//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDataProtectionManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000006d6766
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006d674d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006d66f0
- (_Bool)syncgetDeviceUnlockedSinceFirstBoot;	// IMP=0x00200000006d6bb8
- (int)syncgetDataAvailability;	// IMP=0x00100000006d6ba2
- (void)postDataAvailability;	// IMP=0x00100000006d69a9
- (void)fetchDataAvailabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d6978
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d6950
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006d6923
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006d68fb
- (void *)adaptee;	// IMP=0x00100000006d68c8
- (void)endService;	// IMP=0x00100000006d68ad
- (void)beginService;	// IMP=0x00100000006d67ff
- (id)init;	// IMP=0x00100000006d67c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

