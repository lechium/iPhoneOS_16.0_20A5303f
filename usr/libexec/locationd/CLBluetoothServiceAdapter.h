//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBluetoothServiceAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000058f998
+ (id)getSilo;	// IMP=0x001000000058f786
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000058f76d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000058f710
- (void)scan;	// IMP=0x002000000058fa31
- (_Bool)syncgetHasConnectedDevices;	// IMP=0x001000000058fa13
- (void)fetchHasConnectedDevicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000058f9de
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000058f970
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000058f943
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000058f91b
- (void *)adaptee;	// IMP=0x001000000058f8e8
- (void)endService;	// IMP=0x001000000058f8cd
- (void)beginService;	// IMP=0x001000000058f81f
- (id)init;	// IMP=0x001000000058f7e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

