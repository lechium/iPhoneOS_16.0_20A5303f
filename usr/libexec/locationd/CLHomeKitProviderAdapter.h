//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLHomeKitProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001805bc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001805a3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000180546
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000001807a6
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180779
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180751
- (void *)adaptee;	// IMP=0x001000000018071e
- (void)endService;	// IMP=0x0010000000180703
- (void)beginService;	// IMP=0x0010000000180655
- (id);	// IMP=0x0010000000180618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

