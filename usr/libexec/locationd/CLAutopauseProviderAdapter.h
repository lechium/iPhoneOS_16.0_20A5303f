//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAutopauseProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000795846
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000079582d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000007957d0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000795a30
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000795a03
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000007959db
- (void *)adaptee;	// IMP=0x00100000007959a8
- (void)endService;	// IMP=0x001000000079598d
- (void)beginService;	// IMP=0x00100000007958df
- (id)init;	// IMP=0x00100000007958a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

