//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSAnimationSettings, CABasicAnimation, NSMutableDictionary;

@interface BKMousePointerCAAnimationDriver
{
    BSAnimationSettings *_animationSettings;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _elapsedTime;	// 24 = 0x18
    CABasicAnimation *_animation;	// 32 = 0x20
    NSMutableDictionary *_valueDictionary;	// 40 = 0x28
    struct CGPoint _currentTranslation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002d5c7
- (struct CGPoint)currentTranslation;	// IMP=0x001000000002d5af
- (_Bool)isComplete;	// IMP=0x001000000002d58d
- (void)applyForTime:(double)arg1;	// IMP=0x001000000002d4f8
- (id)initWithRelativeTranslation:(struct CGPoint)arg1 animationSettings:(id)arg2;	// IMP=0x001000000002d27f

@end

