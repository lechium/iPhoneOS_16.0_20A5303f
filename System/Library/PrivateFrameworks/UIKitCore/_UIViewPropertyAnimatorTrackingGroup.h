//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject
{
    NSArray *_trackingAnimators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b6cec
@property(readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;
- (void)finishAnimationAtPosition:(long long)arg1;	// IMP=0x00000000000b6c73
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x00000000000b6c05
- (void)pauseAnimation;	// IMP=0x00000000000b6bd3
- (void)startAnimationAfterDelay:(double)arg1;	// IMP=0x00000000000b6b65
- (void)startAnimation;	// IMP=0x00000000000b6b33
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) _Bool reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) long long state;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b68b8
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;	// IMP=0x00000000000b67f4
- (id)initWithAnimators:(id)arg1;	// IMP=0x00000000000b6789

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
