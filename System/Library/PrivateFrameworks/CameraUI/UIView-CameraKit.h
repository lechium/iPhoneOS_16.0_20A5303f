//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (CameraKit)
+ (void)cam_animateIfNeededWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00200000001892de
+ (void)cam_animateIfNeededWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00200000001892c4
+ (void)cam_animateIfNeededWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x002000000002045b
+ (void)cam_animateIfNeededWithDuration:(double)arg1 usingSpringWithDamping:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0020000000189226
+ (struct CGAffineTransform)cam_transformForInterfaceOrientation:(long long)arg1;	// IMP=0x0020000000017f25
+ (void)cam_convertRect:(struct CGRect)arg1 toCeiledBounds:(struct CGRect *)arg2 andRoundedCenter:(struct CGPoint *)arg3 toViewScale:(id)arg4;	// IMP=0x0020000000188e57
+ (void)cam_ceilBounds:(struct CGRect *)arg1 andRoundCenter:(struct CGPoint *)arg2 toViewScale:(id)arg3;	// IMP=0x002000000002cbd5
+ (double)cam_setHiddenDefaultAnimationDuration;	// IMP=0x002000000001a2af
- (void)cam_setBorderColor:(id)arg1 width:(double)arg2;	// IMP=0x00100000001894f8
- (void)cam_setBorderColor:(id)arg1;	// IMP=0x00100000001894ba
- (void)cam_setBorder;	// IMP=0x001000000018945f
- (void)cam_removeAllAnimationsOnLayer:(id)arg1 recursively:(_Bool)arg2 shouldLog:(_Bool)arg3;	// IMP=0x00100000000657f4
- (void)cam_removeAllAnimationsRecursively:(_Bool)arg1 shouldLog:(_Bool)arg2;	// IMP=0x0010000000065794
- (void)cam_removeAnimationsForKeys:(id)arg1 setToCurrentPresentationValues:(_Bool)arg2;	// IMP=0x00100000001893e7
- (void)cam_removeAnimationForKey:(id)arg1 setToCurrentPresentationValue:(_Bool)arg2;	// IMP=0x00100000001892f2
- (void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000017e40
- (void)cam_setCenterAndBoundsForFrame:(struct CGRect)arg1;	// IMP=0x001000000003b9a8
- (_Bool)cam_isPoint:(struct CGPoint)arg1 withinBoundsWithPadding:(struct UIEdgeInsets)arg2 checkVisibility:(_Bool)arg3 recursive:(_Bool)arg4;	// IMP=0x0010000000188f41
- (_Bool)cam_isPoint:(struct CGPoint)arg1 withinBoundsWithPadding:(struct UIEdgeInsets)arg2;	// IMP=0x0010000000188f2b
@property(readonly, nonatomic) _Bool cam_isHidden;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a2e9
- (void)cam_setHidden:(_Bool)arg1 totalAnimationTime:(double)arg2 normalizedFadeoutDuration:(double)arg3;	// IMP=0x0010000000188c3c
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3;	// IMP=0x001000000001a2d4
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2;	// IMP=0x001000000001a2bf
- (void)cam_setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000001a26f
- (_Bool)cam_isOnScreen:(id)arg1;	// IMP=0x0010000000188b2f
- (void)cam_ensureSubview:(id)arg1;	// IMP=0x001000000000e654
@property(nonatomic, setter=cam_setGeometry:) CDStruct_3b81988a cam_geometry;
@end

