//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIEvent
{
    NSMutableSet *_allTouchesMutable;	// 56 = 0x38
    NSSet *_allTouchesImmutableCached;	// 64 = 0x40
    struct __CFDictionary *_keyedTouches;	// 72 = 0x48
    struct __CFDictionary *_keyedTouchesByWindow;	// 80 = 0x50
    struct __CFDictionary *_gestureRecognizersByWindow;	// 88 = 0x58
    NSMapTable *_latentSystemGestureWindows;	// 96 = 0x60
    struct __CFDictionary *_coalescedTouches;	// 104 = 0x68
    struct __CFDictionary *_finalTouches;	// 112 = 0x70
    _Bool _isCallingEventObservers;	// 120 = 0x78
    NSMutableSet *_exclusiveTouchWindows;	// 128 = 0x80
    _Bool _containsHIDPointerEvent;	// 136 = 0x88
    long long _singleAllowableExternalTouchPathIndex;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000ea9ae5
@property(nonatomic) long long singleAllowableExternalTouchPathIndex; // @synthesize singleAllowableExternalTouchPathIndex=_singleAllowableExternalTouchPathIndex;
@property(readonly, nonatomic, getter=_containsHIDPointerEvent) _Bool containsHIDPointerEvent;
- (unsigned long long)_inputPrecision;	// IMP=0x0000000000ea99c2
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000ea9910
- (id)predictedTouchesForTouch:(id)arg1;	// IMP=0x0000000000ea98ab
- (id)coalescedTouchesForTouch:(id)arg1;	// IMP=0x0000000000ea9748
- (id)_rawCoalescedTouchesForTouch:(id)arg1;	// IMP=0x0000000000ea9696
- (id)_lastPendingCoalescedTouchForIndex:(long long)arg1 hidEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0000000000ea9635
- (void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent *)arg1 toHidEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0000000000ea95ea
- (void)_addCoalescedTouch:(id)arg1 forIndex:(long long)arg2 hidEvent:(struct __IOHIDEvent *)arg3;	// IMP=0x0000000000ea953c
- (struct __CFDictionary *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000ea94d8
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1;	// IMP=0x0000000000ea947d
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1;	// IMP=0x0000000000ea9126
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2;	// IMP=0x0000000000ea9059
- (double)_initialTouchTimestampForWindow:(id)arg1;	// IMP=0x0000000000ea8e0f
@property(readonly, nonatomic) double _initialTouchTimestamp;
- (id)description;	// IMP=0x0000000000ea8bbf
- (id)_cloneEvent;	// IMP=0x0000000000ea8a20
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000ea8972
- (id)_exclusiveTouchWindows;	// IMP=0x0000000000ea895d
- (id)_firstTouchForView:(id)arg1;	// IMP=0x0000000000ea880a
- (id)_viewsForWindow:(id)arg1;	// IMP=0x0000000000ea863d
- (void)_invalidateGestureRecognizerForWindowCache;	// IMP=0x0000000000ea8621
- (id)_gestureRecognizersForWindow:(id)arg1;	// IMP=0x0000000000ea8390
- (id)_windows;	// IMP=0x0000000000ea81e9
- (void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3;	// IMP=0x0000000000ea8031
- (id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2;	// IMP=0x0000000000ea7e1d
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;	// IMP=0x0000000000ea7c34
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;	// IMP=0x0000000000ea740a
- (id)_touchesForView:(id)arg1 withPhase:(long long)arg2;	// IMP=0x0000000000ea71ac
- (void)_clearTouches;	// IMP=0x0000000000ea6f90
- (void)_removeTouchesForWindow:(id)arg1;	// IMP=0x0000000000ea6f78
- (void)_removeTouchesForKey:(id)arg1;	// IMP=0x0000000000ea6e5d
- (id)_touchesForWindow:(id)arg1;	// IMP=0x0000000000ea6e45
- (id)_touchesForKey:(id)arg1;	// IMP=0x0000000000ea6dbc
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;	// IMP=0x0000000000ea6d0a
- (void)_removeTouch:(id)arg1;	// IMP=0x0000000000ea6968
- (void)_clearViewForTouch:(id)arg1;	// IMP=0x0000000000ea689d
- (void)_addTouch:(id)arg1 forDelayedDelivery:(_Bool)arg2;	// IMP=0x0000000000ea64ac
- (void)_addGestureRecognizersForGestureOwner:(id)arg1 toTouch:(id)arg2 forContinuation:(_Bool)arg3;	// IMP=0x0000000000ea6232
- (void)_addGestureRecognizersForTouchContinuationInGestureOwner:(id)arg1 toTouch:(id)arg2;	// IMP=0x0000000000ea621a
- (void)_addGestureRecognizersForGestureOwner:(id)arg1 toTouch:(id)arg2;	// IMP=0x0000000000ea6205
- (_Bool)_anyInterestedGestureRecognizersForTouchInView:(id)arg1;	// IMP=0x0000000000ea6050
- (void)_collectGestureRecognizersForGestureOwner:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea545b
- (id)touchesForGestureRecognizer:(id)arg1;	// IMP=0x0000000000ea5443
- (id)_touchesForGestureRecognizer:(id)arg1;	// IMP=0x0000000000ea542b
- (id)touchesForView:(id)arg1;	// IMP=0x0000000000ea5413
- (id)touchesForWindow:(id)arg1;	// IMP=0x0000000000ea53fb
- (id)_allTouches;	// IMP=0x0000000000ea53c3
- (id)allTouches;	// IMP=0x0000000000ea5376
- (struct CGPoint)_digitizerLocation;	// IMP=0x0000000000ea52f3
- (void)dealloc;	// IMP=0x0000000000ea5259
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;	// IMP=0x0000000000ea4f6b
- (id)_init;	// IMP=0x0000000000ea4df8
- (long long)type;	// IMP=0x0000000000ea4df0

@end

