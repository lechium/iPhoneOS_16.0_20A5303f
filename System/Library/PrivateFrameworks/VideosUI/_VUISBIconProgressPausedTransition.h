//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressPausedTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    _Bool _toPaused;	// 32 = 0x20
    double _fraction;	// 40 = 0x28
}

+ (id)newTransitionToPaused:(_Bool)arg1;	// IMP=0x006000000006995e
- (void)_updateElapsedTimeFromFraction;	// IMP=0x0000000000069c91
- (void)_updateTimingFunction;	// IMP=0x0000000000069c30
- (void)_updateView:(id)arg1;	// IMP=0x0000000000069b5e
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000000069b3b
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000000069b14
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000000069a93
- (void)updateToPaused:(_Bool)arg1;	// IMP=0x0000000000069a38
- (void)dealloc;	// IMP=0x00000000000699f6
- (id)_initToPaused:(_Bool)arg1;	// IMP=0x0000000000069983

@end
