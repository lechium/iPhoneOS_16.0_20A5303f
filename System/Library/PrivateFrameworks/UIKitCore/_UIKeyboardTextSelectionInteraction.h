//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSMapTable, NSString, NSTimer, _UIKeyboardTextSelectionGestureController, _UIPanOrFlickGestureRecognizer, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionInteraction : UITextInteraction
{
    _UIKeyboardTextSelectionGestureController *_owner;	// 8 = 0x8
    NSMapTable *_weakMap;	// 16 = 0x10
    id _deallocToken;	// 24 = 0x18
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;	// 32 = 0x20
    NSTimer *_touchPadTimer;	// 40 = 0x28
    CDUnknownBlockType _touchPadTimerCompletion;	// 48 = 0x30
    _UIPanOrFlickGestureRecognizer *_activePress;	// 56 = 0x38
}

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;	// IMP=0x0010000000c74db6
- (void).cxx_destruct;	// IMP=0x0000000000c7cd8c
- (void)removeTemporaryGesture;	// IMP=0x0000000000c7ccb4
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000c7c27c
- (void)_clearTouchPadCallback;	// IMP=0x0000000000c7c25b
- (void)_cancelTouchPadTimer;	// IMP=0x0000000000c7c223
- (void)_startTouchPadTimerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c7c0e3
- (void)panningGesture:(id)arg1;	// IMP=0x0000000000c7ad94
- (void)panningGestureAddedTouch:(id)arg1;	// IMP=0x0000000000c7ac5d
- (void)twoFingerTap:(id)arg1;	// IMP=0x0000000000c7a853
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000c79fde
- (void)_logTapCounts:(id)arg1;	// IMP=0x0000000000c79eb6
- (void)_longForcePressDetected:(id)arg1;	// IMP=0x0000000000c79e23
- (void)_beginLongForcePressTimerForGesture:(id)arg1;	// IMP=0x0000000000c79d26
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 isShiftKeyBeingHeld:(_Bool)arg4;	// IMP=0x0000000000c79984
- (void)handleRemoteIndirectGestureWithState:(id)arg1;	// IMP=0x0000000000c796ba
- (void)forwardIndirectGestureWithType:(long long)arg1 state:(long long)arg2 translation:(struct CGPoint)arg3 flickDirection:(unsigned long long)arg4 touchCount:(unsigned long long)arg5;	// IMP=0x0000000000c79519
- (void)cancelLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000c79507
- (void)endLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000c794f5
- (void)finishLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000c7944e
- (void)updateLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c7936f
- (void)beginLongPressWithTranslation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c7916d
- (void)longPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3;	// IMP=0x0000000000c78f85
- (void)disableEnclosingScrollViewScrolling;	// IMP=0x0000000000c78e2e
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;	// IMP=0x0000000000c787f0
- (void)clearKeyboardTouchesForGesture:(id)arg1;	// IMP=0x0000000000c785e0
- (void)_cancelLongForcePressTimer;	// IMP=0x0000000000c78568
- (struct CGPoint)cursorLocationForTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000c784fa
- (void)beginCursorManipulationFromRect:(struct CGRect)arg1;	// IMP=0x0000000000c78407
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;	// IMP=0x0000000000c783de
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000c783cc
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c78182
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000c780ae
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c77f8c
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint)arg1 isShiftKeyBeingHeld:(_Bool)arg2 executionContext:(id)arg3;	// IMP=0x0000000000c77aa8
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c778d5
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000c7782e
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c7769b
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000c77451
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;	// IMP=0x0000000000c77235
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;	// IMP=0x0000000000c76f65
- (_Bool)isPlacedCarefully;	// IMP=0x0000000000c76ef7
- (void)_tidyUpGesture;	// IMP=0x0000000000c76e53
- (void)_prepareForGesture;	// IMP=0x0000000000c76dad
- (void)_willBeginIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000c76c4e
- (struct CGPoint)boundedTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000c76aac
- (_Bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000c768d7
- (struct CGPoint)acceleratedTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isActive:(_Bool)arg3;	// IMP=0x0000000000c7679c
- (void)_didEndIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000c766bc
- (id)selectionController;	// IMP=0x0000000000c7666c
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000c763b5
- (double)additionalPressDurationForTypingCadence:(id)arg1;	// IMP=0x0000000000c76287
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;	// IMP=0x0000000000c7623a
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000c76052
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000c75aef
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000c75845
- (id)owner;	// IMP=0x0000000000c75830
- (void)_configureLongPressRecognizer:(id)arg1;	// IMP=0x0000000000c75749
- (void)_configureLongPressAddedTouchRecognizer:(id)arg1;	// IMP=0x0000000000c756ff
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000c755f7
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000c75430
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;	// IMP=0x0000000000c75340
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;	// IMP=0x0000000000c74ec5
- (id)gestures;	// IMP=0x0000000000c74cf5
- (void)registerOwner:(id)arg1;	// IMP=0x0000000000c74c15
- (void)dealloc;	// IMP=0x0000000000c74bc2
- (void)detach;	// IMP=0x0000000000c74b63
- (void)_clearHiding;	// IMP=0x0000000000c74b2b
- (void)hideInsideRecogniser:(id)arg1;	// IMP=0x0000000000c748f2
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000c747f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
