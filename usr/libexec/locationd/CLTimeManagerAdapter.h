//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000215f66
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000215f4d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000215ef0
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x0020000000216207
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x00100000002161ba
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x0010000000216178
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000216150
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000216123
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002160fb
- (void *)adaptee;	// IMP=0x00100000002160c8
- (void)endService;	// IMP=0x00100000002160ad
- (void)beginService;	// IMP=0x0010000000215fff
- (id)init;	// IMP=0x0010000000215fc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
