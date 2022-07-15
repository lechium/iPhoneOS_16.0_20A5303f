//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPanGestureRecognizer.h"

@class NSString, UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer
{
    UIScrollView *_scrollView;	// 136 = 0x88
    SEL _scrollViewAction;	// 144 = 0x90
    struct CGPoint _reconsideredLockingLocation;	// 152 = 0x98
    unsigned int _lastLockingAxis:2;	// 168 = 0xa8
    unsigned int _lockingAxis:2;	// 168 = 0xa8
    unsigned int _hasParentScrollView:1;	// 168 = 0xa8
    unsigned int _caughtDeceleratingScrollView:1;	// 168 = 0xa8
    unsigned int _directionalLockEnabled:1;	// 168 = 0xa8
    unsigned int _transfersTrackingFromParentScrollView:1;	// 168 = 0xa8
    unsigned int _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered:1;	// 169 = 0xa9
    long long _modifierFlags;	// 176 = 0xb0
    long long _indirectScrollingState;	// 184 = 0xb8
    _Bool _scrollViewCanScrubWithTouch;	// 192 = 0xc0
    _Bool _activeEventIsDiscrete;	// 193 = 0xc1
    double _translationScaleFactor;	// 200 = 0xc8
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;	// 208 = 0xd0
    double _discreteFastScrollMultiplier;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000013a343f
@property(nonatomic, getter=_discreteFastScrollMultiplier, setter=_setDiscreteFastScrollMultiplier:) double discreteFastScrollMultiplier; // @synthesize discreteFastScrollMultiplier=_discreteFastScrollMultiplier;
@property(nonatomic) __weak UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer; // @synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer;
@property(nonatomic) double translationScaleFactor; // @synthesize translationScaleFactor=_translationScaleFactor;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000013a338c
- (_Bool)_allowsBounce;	// IMP=0x00000000013a3384
- (long long)_modifierFlags;	// IMP=0x00000000013a3373
- (id)_asyncDeliveryTargetForScrollEvent:(id)arg1;	// IMP=0x00000000013a32f0
- (void)_scrollingChangedWithEvent:(id)arg1;	// IMP=0x00000000013a3152
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000013a3070
@property(readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) _Bool beganCaughtDeceleratingScrollViewAndMoved;
@property(readonly, nonatomic, getter=_caughtDeceleratingScrollView) _Bool caughtDeceleratingScrollView;
@property(nonatomic, getter=isDirectionalLockEnabled) _Bool directionalLockEnabled;
- (double)_hysteresis;	// IMP=0x00000000013a2f9e
- (void)_scrollViewDidEndZooming;	// IMP=0x00000000013a2ef9
- (void)_resetGestureRecognizer;	// IMP=0x00000000013a2e2c
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x00000000013a2d8e
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000013a2c37
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013a2bb8
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;	// IMP=0x00000000013a25f9
- (_Bool)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2;	// IMP=0x00000000013a24b3
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;	// IMP=0x00000000013a23ff
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013a22b6
- (struct CGPoint)_velocityIncludingDiscreteScrollInView:(id)arg1;	// IMP=0x00000000013a2268
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x00000000013a21ef
- (struct CGPoint)translationInView:(id)arg1;	// IMP=0x00000000013a218b
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x00000000013a2084
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x00000000013a1f7d
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 affectingTranslation:(_Bool)arg3;	// IMP=0x00000000013a1c59
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x00000000013a1c05
- (void)_beginScroll;	// IMP=0x00000000013a1a9f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013a1992
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013a17c5
- (_Bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;	// IMP=0x00000000013a15a4
- (_Bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;	// IMP=0x00000000013a13ea
- (_Bool)_canTransferTrackingFromParentPagingScrollView;	// IMP=0x00000000013a1139
- (void)setView:(id)arg1;	// IMP=0x00000000013a1089
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x00000000013a0eb7
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000013a0df4
- (void)setDelegate:(id)arg1;	// IMP=0x00000000013a0d4d
- (_Bool)delaysTouchesBegan;	// IMP=0x00000000013a0ccb
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000013a0bed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
