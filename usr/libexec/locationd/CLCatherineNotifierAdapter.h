//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCatherineNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000043f796
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000043f77d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000043f720
+ (_Bool)isSupported;	// IMP=0x001000000043f9a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x002000000043f980
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000043f953
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000043f92b
- (void *)adaptee;	// IMP=0x001000000043f8f8
- (void)endService;	// IMP=0x001000000043f8dd
- (void)beginService;	// IMP=0x001000000043f82f
- (id)init;	// IMP=0x001000000043f7f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

