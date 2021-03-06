//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarImpulsePanningDynamicItem, MISSING_TYPE, MKMapView, NSDate, NSString, UIDynamicAnimator, UIDynamicBehavior, UILongPressGestureRecognizer, UIPushBehavior, UITapGestureRecognizer, UIView;
@protocol CarMapNudgerizerDelegate;

@interface CarMapNudgerizer : NSObject
{
    _Bool _hasBegunMomentaryImpulseInDirection[4];	// 8 = 0x8
    struct CGPoint _initialPanPoint;	// 16 = 0x10
    _Bool _animating;	// 32 = 0x20
    UIDynamicAnimator *_animator;	// 40 = 0x28
    UIDynamicBehavior *_panBehavior;	// 48 = 0x30
    UIPushBehavior *_leftPush;	// 56 = 0x38
    UIPushBehavior *_rightPush;	// 64 = 0x40
    UIPushBehavior *_upPush;	// 72 = 0x48
    UIPushBehavior *_downPush;	// 80 = 0x50
    UITapGestureRecognizer *_leftTapRecognizer;	// 88 = 0x58
    UILongPressGestureRecognizer *_leftLongPressRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_rightTapRecognizer;	// 104 = 0x68
    UILongPressGestureRecognizer *_rightLongPressRecognizer;	// 112 = 0x70
    UITapGestureRecognizer *_upTapRecognizer;	// 120 = 0x78
    MISSING_TYPE *_upLongPressRecognizer;	// 128 = 0x80
    UITapGestureRecognizer *_downTapRecognizer;	// 136 = 0x88
    UILongPressGestureRecognizer *_downLongPressRecognizer;	// 144 = 0x90
    UIView *_gestureRecognizerView;	// 152 = 0x98
    _Bool _active;	// 160 = 0xa0
    MKMapView *_mapView;	// 168 = 0xa8
    id <CarMapNudgerizerDelegate> _delegate;	// 176 = 0xb0
    CarImpulsePanningDynamicItem *_item;	// 184 = 0xb8
    long long _lastImpulseDirection;	// 192 = 0xc0
    NSDate *_lastImpulseDate;	// 200 = 0xc8
    unsigned long long _impulseCount;	// 208 = 0xd0
    CDStruct_1aa5c685 _panningMetrics;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0020000000520846
@property unsigned long long impulseCount; // @synthesize impulseCount=_impulseCount;
@property(retain) NSDate *lastImpulseDate; // @synthesize lastImpulseDate=_lastImpulseDate;
@property long long lastImpulseDirection; // @synthesize lastImpulseDirection=_lastImpulseDirection;
@property CDStruct_1aa5c685 panningMetrics; // @synthesize panningMetrics=_panningMetrics;
@property(retain, nonatomic) CarImpulsePanningDynamicItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <CarMapNudgerizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (double)_userDefaultsDoubleForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x001000000052064d
- (double)_userDefaultsCGFloatForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x001000000052063b
- (void)handleLongPress:(id)arg1;	// IMP=0x0010000000520586
- (void)handleTap:(id)arg1;	// IMP=0x0010000000520510
- (long long)_eventDirectionForButtonType:(long long)arg1;	// IMP=0x00100000005204fc
- (void)_clearGesturesAndAnimations;	// IMP=0x001000000052049a
- (void)_clearGestureRecognizersInFlight;	// IMP=0x0010000000520405
- (void)_clearGesture:(id)arg1;	// IMP=0x00100000005203a4
- (void)_removePanRecognizers;	// IMP=0x00100000005201df
- (void)_addPanRecognizers;	// IMP=0x001000000051fcc9
- (void)momentaryImpulseInDirection:(long long)arg1;	// IMP=0x001000000051fc71
- (void)endImpluseInDirection:(long long)arg1;	// IMP=0x001000000051fc4b
- (void)beginImpulseInDirection:(long long)arg1;	// IMP=0x001000000051fc25
- (void)_setHasBegunMomentaryImpulse:(_Bool)arg1 inDirection:(long long)arg2;	// IMP=0x001000000051fc1b
- (_Bool)_hasBegunMomentaryImpulseInDirection:(long long)arg1;	// IMP=0x001000000051fc11
- (void)_setImpulseInDirection:(long long)arg1 magnitude:(double)arg2;	// IMP=0x001000000051fbab
- (id)_behaviorForDirection:(long long)arg1;	// IMP=0x001000000051fb77
- (void)_beginImpulseInDirection:(long long)arg1 withMagnitude:(double)arg2;	// IMP=0x001000000051f7e1
- (double)impulseMagnitudeForDirection:(long long)arg1;	// IMP=0x001000000051f4ee
- (double)holdMagnitudeForDirection:(long long)arg1;	// IMP=0x001000000051f3c7
- (void)_momentaryImpulseRight;	// IMP=0x001000000051f31a
- (void)_endImpulseRight;	// IMP=0x001000000051f2b3
- (void)_beginImpulseRight;	// IMP=0x001000000051f25a
- (void)_momentaryImpulseLeft;	// IMP=0x001000000051f1ad
- (void)_endImpulseLeft;	// IMP=0x001000000051f146
- (void)_beginImpulseLeft;	// IMP=0x001000000051f0ed
- (void)_momentaryImpulseDown;	// IMP=0x001000000051f040
- (void)_endImpulseDown;	// IMP=0x001000000051efd9
- (void)_beginImpulseDown;	// IMP=0x001000000051ef80
- (void)_momentaryImpulseUp;	// IMP=0x001000000051eed3
- (void)_endImpulseUp;	// IMP=0x001000000051ee6c
- (void)_beginImpulseUp;	// IMP=0x001000000051ee13
- (void)_endAnimatingIfNeeded;	// IMP=0x001000000051edd2
- (void)_endAnimating;	// IMP=0x001000000051ed47
- (void)_beginAnimatingIfNeeded;	// IMP=0x001000000051ec3b
- (void)dynamicAnimatorDidPause:(id)arg1;	// IMP=0x001000000051ec29
- (void)_configureAnimator;	// IMP=0x001000000051e6cb
- (id)init;	// IMP=0x001000000051e587

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

