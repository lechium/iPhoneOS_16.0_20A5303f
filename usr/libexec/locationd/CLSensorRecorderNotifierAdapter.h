//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSensorRecorderNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000009b67b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009b679d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009b6740
+ (_Bool)isSupportedForType:(int)arg1;	// IMP=0x00100000009b69c8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000009b69a0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009b6973
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000009b694b
- (void *)adaptee;	// IMP=0x00100000009b6918
- (void)endService;	// IMP=0x00100000009b68fd
- (void)beginService;	// IMP=0x00100000009b684f
- (id)init;	// IMP=0x00100000009b6812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

