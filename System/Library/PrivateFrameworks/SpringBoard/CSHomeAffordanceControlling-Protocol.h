//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, UIPanGestureRecognizer, UIWindow;
@protocol CSHomeGestureParticipating, PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol CSHomeAffordanceControlling <NSObject>
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
- (id <PLKeyboardHomeAffordanceAssertion>)keyboardAssertionForGestureWindow:(UIWindow *)arg1;
- (void)unregisterHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
- (void)registerHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
@end

