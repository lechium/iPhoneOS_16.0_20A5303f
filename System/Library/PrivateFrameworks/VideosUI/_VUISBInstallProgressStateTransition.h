//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBInstallProgressStateTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00600000000693d1
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0060000000069389
- (void)_updateView:(id)arg1;	// IMP=0x00000000000695f2
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x00000000000695cf
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x00000000000695a8
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000000069527
- (void)dealloc;	// IMP=0x00000000000694e5
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000000006942f

@end

