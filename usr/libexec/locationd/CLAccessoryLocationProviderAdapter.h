//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAccessoryLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000029beb8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000029be9f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000029be42
+ (_Bool)isSupported;	// IMP=0x001000000029c2e0
- (void)syncSetNavigationStateChange:(int)arg1;	// IMP=0x002000000029c173
- (void)fetchAccessoryPASCDTransmissionStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000029c12d
- (void)fetchAccessoryBitSetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000029c102
- (void)fetchIsAccessoryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000029c0ca
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000029c0a2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000029c075
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000029c04d
- (void *)adaptee;	// IMP=0x001000000029c01a
- (void)endService;	// IMP=0x001000000029bfff
- (void)beginService;	// IMP=0x001000000029bf51
- (id)init;	// IMP=0x001000000029bf14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
