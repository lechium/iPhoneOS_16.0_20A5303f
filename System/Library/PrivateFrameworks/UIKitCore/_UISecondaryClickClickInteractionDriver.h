//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, _UISecondaryClickDriverGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UISecondaryClickClickInteractionDriver : NSObject
{
    unsigned long long _currentState;	// 8 = 0x8
    _Bool _cancelsTouchesInView;	// 16 = 0x10
    _Bool _clicksUpAutomaticallyAfterTimeout;	// 17 = 0x11
    id <_UIClickInteractionDriverDelegate> _delegate;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
    double _allowableMovement;	// 40 = 0x28
    _UISecondaryClickDriverGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
}

+ (_Bool)prefersCancelsTouchesInView;	// IMP=0x0010000000f8d58b
+ (_Bool)requiresForceCapability;	// IMP=0x0010000000f8d583
- (void).cxx_destruct;	// IMP=0x0000000000f8ded4
@property(retain, nonatomic) _UISecondaryClickDriverGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) _Bool clicksUpAutomaticallyAfterTimeout; // @synthesize clicksUpAutomaticallyAfterTimeout=_clicksUpAutomaticallyAfterTimeout;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_attemptSecondaryClick;	// IMP=0x0000000000f8dc82
- (void)_handleGestureRecognizer:(id)arg1;	// IMP=0x0000000000f8dbe9
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000f8dae8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000f8dae0
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000f8dabf
@property(nonatomic) unsigned long long driverStyle;
@property(readonly, nonatomic) unsigned long long inputPrecision;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x0000000000f8d756
- (void)cancelInteraction;	// IMP=0x0000000000f8d6ce
@property(readonly, nonatomic) _Bool isCurrentlyAcceleratedByForce;
@property(readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property(readonly, nonatomic) _Bool hasExceededAllowableMovement;
@property(readonly, nonatomic) double touchDuration;
@property(readonly, nonatomic) double maximumEffectProgress;
- (id)init;	// IMP=0x0000000000f8d4e9

// Remaining properties
@property(nonatomic) unsigned long long behavior;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

