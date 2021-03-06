//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVHapticPlayerChannel, NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer
{
    AVHapticPlayerChannel *_channel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004bf4
@property _Bool isMuted;
- (_Bool)startAtTime:(double)arg1 withImmediateParameters:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000045ce
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000040f6
- (_Bool)cancelAndReturnError:(id *)arg1;	// IMP=0x0000000000003d67
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x0000000000003964
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000003575
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000030a2
- (void)clearExternalResources:(id)arg1;	// IMP=0x0000000000002e1d
- (void)doSetMute:(_Bool)arg1;	// IMP=0x0000000000002cbb
- (void)dealloc;	// IMP=0x0000000000002aef
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000022a4
- (id)processImmediateParameters:(id)arg1;	// IMP=0x0000000000001e26
- (void)releaseExternalResources:(id)arg1 events:(id)arg2;	// IMP=0x0000000000001b6e
- (id)init;	// IMP=0x0000000000001b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

