//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSpringTrackingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000009c92e6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009c92cd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009c9270
+ (_Bool)isSupported;	// IMP=0x00100000009c99df
- (void)querySinceRecord:(struct CLSpringTrackerEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00200000009c9814
- (int)syncgetStopTracking;	// IMP=0x00100000009c970b
- (int)syncgetStartTracking;	// IMP=0x00100000009c9517
- (_Bool)syncgetIsTracking;	// IMP=0x00100000009c94f8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009c94d0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009c94a3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009c947b
- (void *)adaptee;	// IMP=0x00100000009c9448
- (void)endService;	// IMP=0x00100000009c942d
- (void)beginService;	// IMP=0x00100000009c937f
- (id)init;	// IMP=0x00100000009c9342

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

