//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/AXNamedReplayableGesture.h>

@interface AXNamedReplayableGesture (AXPIAdditions)
+ (void)_addFingerPoints:(id)arg1 toReplayableGesture:(id)arg2 atTime:(double)arg3;	// IMP=0x006000000000eb67
+ (void)_addAllFingerPointsForPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2 toReplayableGesture:(id)arg3 atTime:(double)arg4;	// IMP=0x006000000000eac5
+ (id)_pinchGestureWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 radiusDelta:(double)arg3 angleDelta:(double)arg4 startingWidth:(double)arg5;	// IMP=0x006000000000e282
+ (id)rotateLeftGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x006000000000e25f
+ (id)rotateRightGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x006000000000e23c
+ (id)pinchOutGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x006000000000e214
+ (id)pinchInGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x006000000000e1ec
+ (id)forceTouchGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x006000000000dffc
+ (id)scrollGestureFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x006000000000ddce
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4;	// IMP=0x006000000000d8d8
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x006000000000d8c3
+ (id)flickGestureStartingAtPoint:(struct CGPoint)arg1 endingAtPoint:(struct CGPoint)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x006000000000d7c5
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x006000000000d759
+ (id)holdGestureAtPoint:(struct CGPoint)arg1 withDuration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x006000000000d520
+ (id)longPressGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x006000000000d501
+ (id)_tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3 force:(double)arg4;	// IMP=0x006000000000d25b
+ (id)tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x006000000000d243
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2;	// IMP=0x006000000000d22c
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2;	// IMP=0x006000000000d215
+ (id)tapGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x006000000000d1fc
@end

