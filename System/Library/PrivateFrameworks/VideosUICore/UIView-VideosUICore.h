//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSString, UIColor, UITraitCollection;

@interface UIView (VideosUICore)
+ (id)_timingFuctionWithOptions:(unsigned long long)arg1;	// IMP=0x002000000001e2a1
+ (void)vui_performWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x002000000001e288
+ (void)vui_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x002000000001e26c
+ (void)vui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x002000000001e253
+ (void)vui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000001e23a
+ (void)vui_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x002000000001e21e
+ (void)vui_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;	// IMP=0x002000000001e068
@property(nonatomic, getter=vuiIsUserInteractionEnabled) _Bool vuiUserInteractionEnabled;
- (void)vui_applyToolbarSemanticContext;	// IMP=0x001000000001e1f4
- (_Bool)vui_isInAWindow;	// IMP=0x001000000001e1e2
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001e1dc
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x001000000001e1d6
- (void)vui_setHighlighted:(_Bool)arg1;	// IMP=0x001000000001e1d0
- (_Bool)vui_highlighted;	// IMP=0x001000000001e1c8
- (void)vui_didMoveToWindow;	// IMP=0x001000000001e1c2
- (void)vui_willMoveToWindow:(id)arg1;	// IMP=0x001000000001e1bc
- (void)vui_prepareForReuse;	// IMP=0x001000000001e1b6
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x001000000001e17b
- (struct UIEdgeInsets)vui_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x001000000001e15d
- (void)vui_performAsCurrentTraitCollection:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e095
- (void)vui_setAccessibilityText:(id)arg1;	// IMP=0x001000000001e056
- (id)vui_accessibilityText;	// IMP=0x001000000001e044
- (void)vui_isAccessibilityElement:(_Bool)arg1;	// IMP=0x001000000001e032
- (struct CGSize)vui_sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000001e020
- (void)vui_setNeedsDisplay;	// IMP=0x001000000001e00e
- (void)vui_layoutIfNeeded;	// IMP=0x001000000001dffc
- (void)vui_setNeedsLayout;	// IMP=0x001000000001dfea
- (void)vui_removeFromSuperView;	// IMP=0x001000000001dfa1
- (_Bool)vui_insertSubview:(id)arg1 belowSubview:(id)arg2 oldView:(id)arg3;	// IMP=0x001000000001de40
- (_Bool)vui_insertSubview:(id)arg1 aboveSubview:(id)arg2 oldView:(id)arg3;	// IMP=0x001000000001dcdf
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;	// IMP=0x001000000001dbda
- (void)vui_sendSubviewToBack:(id)arg1;	// IMP=0x001000000001dbc8
- (void)vui_bringSubviewToFront:(id)arg1;	// IMP=0x001000000001dbb6
@property(readonly, nonatomic) NSArray *vuiSubviews;
- (_Bool)vui_isDescendantOfView:(id)arg1;	// IMP=0x001000000001db92
@property(nonatomic) struct CGPoint vuiCenter;
@property(nonatomic) unsigned long long vuiContentMode;
@property(readonly, nonatomic) UITraitCollection *vuiTraitCollection;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x001000000001daf2
@property(readonly, nonatomic) unsigned long long vuiOverrideUserInterfaceStyle;
@property(readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property(retain, nonatomic) UIColor *vuiTintColor;
@property(retain, nonatomic) NSString *vuiAccessibilityIdentifier;
@property(readonly, nonatomic) CALayer *vuiLayer;
@property(nonatomic) double vuiAlpha;
@property(nonatomic) _Bool vuiClipsToBounds;
@property(retain, nonatomic) UIColor *vuiBackgroundColor;
@property(nonatomic) unsigned long long vuiAutoresizingMask;
@property(readonly, nonatomic) _Bool vuiIsRTL;
@property(readonly, nonatomic) _Bool vuiDebugUI;
@end

