//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAnimation.h"

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation
{
    struct CGPoint _originalOffset;	// 72 = 0x48
    struct CGPoint _targetOffset;	// 88 = 0x58
    _Bool _targetOffsetValidAtStart;	// 104 = 0x68
    double _accuracy;	// 112 = 0x70
    _Bool _adjustsForContentOffsetDelta;	// 120 = 0x78
    CABasicAnimation *_customAnimation;	// 128 = 0x80
    _Bool _forDiscreteScroll;	// 136 = 0x88
    _Bool _beingReplacedForDiscreteScroll;	// 137 = 0x89
}

- (void).cxx_destruct;	// IMP=0x000000000136e8b2
- (void)dealloc;	// IMP=0x000000000136e844
- (float)progressForFraction:(float)arg1;	// IMP=0x000000000136e73b
- (void)setProgress:(float)arg1;	// IMP=0x000000000136e551
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;	// IMP=0x000000000136e510

@end
