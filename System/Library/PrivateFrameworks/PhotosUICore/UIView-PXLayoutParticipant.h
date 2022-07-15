//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PXViewSpec;

@interface UIView (PXLayoutParticipant)
+ (struct CGSize)px_videoOverlayButtonSize;	// IMP=0x0010000000205e1c
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x0010000000205e05
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;	// IMP=0x0010000000205d54
+ (void)px_preloadResourcesForVideoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x0010000000205c7f
+ (id)px_circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0010000000b15f3b
+ (void)px_animateUsingDefaultDampedEaseInEaseOutWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000b15e13
+ (void)_px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withInitialVelocity:(struct PXDisplayVelocity)arg5 usingSpringAnimation:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000b14f8c
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PXDisplayVelocity)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000b14ef4
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PXDisplayVelocity)arg8 options:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0010000000b14e52
- (_Bool)shouldReloadForUserData:(id)arg1;	// IMP=0x00100000000a310a
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;	// IMP=0x00100000000a30b8
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_4f725fed *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_a79e78a9 *)arg4 textureInfo:(struct *)arg5 resizableCapInsets:(CDStruct_818bb265)arg6 reusableViewInfo:(id)arg7 screenScale:(double)arg8;	// IMP=0x00100000000a2620
- (void)pxg_prepareForReuse;	// IMP=0x00100000000a25f0
- (void)pxg_becomeReusable;	// IMP=0x00100000000a255f
- (void)pxg_removeFromSuperview;	// IMP=0x00100000000a254d
- (_Bool)pxg_hasSuperview;	// IMP=0x00100000000a251a
- (void)pxg_addToHostingView:(id)arg1;	// IMP=0x00100000000a248e
- (void)pxg_addToScrollViewController:(id)arg1;	// IMP=0x00100000000a2402
@property(retain, nonatomic, setter=px_setSpec:) PXViewSpec *px_spec;
- (void)px_transferToSuperview:(id)arg1;	// IMP=0x0010000000b14a19
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 toView:(id)arg2;	// IMP=0x0010000000b149bb
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 fromView:(id)arg2;	// IMP=0x0010000000b14607
- (void)px_enumerateDescendantSubviewsPassingTest:(CDUnknownBlockType)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b14368
- (void)px_enumerateDescendantSubviewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b1434c
- (_Bool)px_isAncestorOfFocusEnvironment:(id)arg1;	// IMP=0x0010000000b142ca
@property(readonly, nonatomic) _Bool px_hasHiddenAncestor;
- (void)px_addFullBoundsSubview:(id)arg1;	// IMP=0x0010000000b13f68
@property(readonly, nonatomic) struct UIEdgeInsets px_peripheryInsets;
@property(readonly, nonatomic) _Bool px_hasRightToLeftLayoutDirection;
@property(readonly, nonatomic) double px_screenScale;
@property(readonly, nonatomic) _Bool px_intersectsWindowBounds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
