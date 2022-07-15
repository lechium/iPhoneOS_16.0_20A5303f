//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (PKUIUtilities)
+ (void)pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00500000000f6505
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00500000000f644d
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00500000000f6435
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00500000000f6420
- (void)pkui_setExcludedFromScreenCapture:(_Bool)arg1 andBroadcasting:(_Bool)arg2;	// IMP=0x00100000000f799b
- (struct CGRect)pkui_readableContentBoundsWithMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00100000000f7839
- (id)pkui_viewControllerFromResponderChain;	// IMP=0x00100000000f7791
- (id)pkui_translationAnimation;	// IMP=0x00100000000f773a
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;	// IMP=0x00100000000f7576
- (void)addDefaultTransformSpringWithStartTime:(double)arg1;	// IMP=0x00100000000f7512
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;	// IMP=0x00100000000f7337
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;	// IMP=0x00100000000f731f
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;	// IMP=0x00100000000f72b1
- (_Bool)pkui_setAlpha:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f7278
- (_Bool)pkui_setAlpha:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f7264
- (_Bool)pkui_setCornerRadius:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f7173
- (_Bool)pkui_setTransform:(struct CATransform3D)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f6dfb
- (_Bool)pkui_setPosition:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f6c82
- (_Bool)pkui_setBounds:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f686f
- (_Bool)pkui_setFrame:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f673a
- (void)pkui_smallShakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f6686
- (void)pkui_shakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f65d2
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00100000001ce544
- (id)pk_childrenForAppearance;	// IMP=0x00100000001ce532
- (void)pkui_setMaskType:(unsigned long long)arg1;	// IMP=0x0010000000399444
@end
