//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class AVLayoutItemAttributes, AVMicaPackage, AVUserInteractionObserverGestureRecognizer, NSNumber, NSString, NSTimer, UIFont, UIViewPropertyAnimator, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVButton : UIButton
{
    NSString *_accessibilityLabelOverride;	// 8 = 0x8
    _Bool _collapsed;	// 16 = 0x10
    _Bool _included;	// 17 = 0x11
    _Bool _removed;	// 18 = 0x12
    _Bool _hasFullScreenAppearance;	// 19 = 0x13
    _Bool _hasAlternateAppearance;	// 20 = 0x14
    _Bool _wasLongPressed;	// 21 = 0x15
    _Bool _treatsForcePressAsLongPress;	// 22 = 0x16
    _Bool _usesBackgroundEffectViewForTextOnlyButtons;	// 23 = 0x17
    _Bool _multipleTouchesEndsTracking;	// 24 = 0x18
    _Bool _appliesTransformToImageViewWhenHighlighted;	// 25 = 0x19
    _Bool _disablesHighlightWhenLongPressed;	// 26 = 0x1a
    _Bool _clampsHitRectInsetsWhenContainedInScrollableView;	// 27 = 0x1b
    _Bool _secondGeneration;	// 28 = 0x1c
    _Bool _wasForcePressTriggered;	// 29 = 0x1d
    AVLayoutItemAttributes *_layoutAttributes;	// 32 = 0x20
    long long _tintEffectStyle;	// 40 = 0x28
    double _forceThreshold;	// 48 = 0x30
    double _force;	// 56 = 0x38
    double _maximumForceSinceTrackingBegan;	// 64 = 0x40
    NSString *_activeImageName;	// 72 = 0x48
    NSString *_imageName;	// 80 = 0x50
    NSString *_alternateImageName;	// 88 = 0x58
    double _alternateImagePadding;	// 96 = 0x60
    double _fullscreenAlternateImagePadding;	// 104 = 0x68
    UIFont *_inlineFont;	// 112 = 0x70
    UIFont *_fullScreenFont;	// 120 = 0x78
    UIFont *_alternateFullScreenFont;	// 128 = 0x80
    AVMicaPackage *_micaPackage;	// 136 = 0x88
    double _micaSnapshotAlpha;	// 144 = 0x90
    UIViewPropertyAnimator *_highlightAnimator;	// 152 = 0x98
    double _trackingStartTime;	// 160 = 0xa0
    double _horizontalTranslationOfLongPress;	// 168 = 0xa8
    NSNumber *_previousHorizontalPositionOfLongPress;	// 176 = 0xb0
    NSTimer *_longPressTimer;	// 184 = 0xb8
    AVUserInteractionObserverGestureRecognizer *_userInteractionGestureRecognizer;	// 192 = 0xc0
    UIVisualEffectView *_backgroundEffectView;	// 200 = 0xc8
    UIFont *_activeFont;	// 208 = 0xd0
    struct CGSize _extrinsicContentSize;	// 216 = 0xd8
    struct NSDirectionalEdgeInsets _hitRectInsets;	// 232 = 0xe8
}

+ (id)buttonWithAccessibilityIdentifier:(id)arg1 accessibilityLabel:(id)arg2 isSecondGeneration:(_Bool)arg3;	// IMP=0x001000000010e5c2
+ (id)buttonWithAccessibilityIdentifier:(id)arg1 isSecondGeneration:(_Bool)arg2;	// IMP=0x001000000010e560
- (void).cxx_destruct;	// IMP=0x000000000010debe
@property(retain, nonatomic) UIFont *activeFont; // @synthesize activeFont=_activeFont;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer; // @synthesize userInteractionGestureRecognizer=_userInteractionGestureRecognizer;
@property(nonatomic) __weak NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress; // @synthesize previousHorizontalPositionOfLongPress=_previousHorizontalPositionOfLongPress;
@property(nonatomic) double horizontalTranslationOfLongPress; // @synthesize horizontalTranslationOfLongPress=_horizontalTranslationOfLongPress;
@property(nonatomic) _Bool wasForcePressTriggered; // @synthesize wasForcePressTriggered=_wasForcePressTriggered;
@property(nonatomic) double trackingStartTime; // @synthesize trackingStartTime=_trackingStartTime;
@property(nonatomic, getter=isSecondGeneration) _Bool secondGeneration; // @synthesize secondGeneration=_secondGeneration;
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic) _Bool clampsHitRectInsetsWhenContainedInScrollableView; // @synthesize clampsHitRectInsetsWhenContainedInScrollableView=_clampsHitRectInsetsWhenContainedInScrollableView;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic) _Bool disablesHighlightWhenLongPressed; // @synthesize disablesHighlightWhenLongPressed=_disablesHighlightWhenLongPressed;
@property(nonatomic) double micaSnapshotAlpha; // @synthesize micaSnapshotAlpha=_micaSnapshotAlpha;
@property(retain, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property(retain, nonatomic) UIFont *alternateFullScreenFont; // @synthesize alternateFullScreenFont=_alternateFullScreenFont;
@property(retain, nonatomic) UIFont *fullScreenFont; // @synthesize fullScreenFont=_fullScreenFont;
@property(retain, nonatomic) UIFont *inlineFont; // @synthesize inlineFont=_inlineFont;
@property(nonatomic) _Bool appliesTransformToImageViewWhenHighlighted; // @synthesize appliesTransformToImageViewWhenHighlighted=_appliesTransformToImageViewWhenHighlighted;
@property(nonatomic) double fullscreenAlternateImagePadding; // @synthesize fullscreenAlternateImagePadding=_fullscreenAlternateImagePadding;
@property(nonatomic) double alternateImagePadding; // @synthesize alternateImagePadding=_alternateImagePadding;
@property(copy, nonatomic) NSString *alternateImageName; // @synthesize alternateImageName=_alternateImageName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *activeImageName; // @synthesize activeImageName=_activeImageName;
@property(nonatomic) _Bool multipleTouchesEndsTracking; // @synthesize multipleTouchesEndsTracking=_multipleTouchesEndsTracking;
@property(nonatomic) double maximumForceSinceTrackingBegan; // @synthesize maximumForceSinceTrackingBegan=_maximumForceSinceTrackingBegan;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) double forceThreshold; // @synthesize forceThreshold=_forceThreshold;
@property(nonatomic) _Bool usesBackgroundEffectViewForTextOnlyButtons; // @synthesize usesBackgroundEffectViewForTextOnlyButtons=_usesBackgroundEffectViewForTextOnlyButtons;
@property(nonatomic) long long tintEffectStyle; // @synthesize tintEffectStyle=_tintEffectStyle;
@property(nonatomic) _Bool treatsForcePressAsLongPress; // @synthesize treatsForcePressAsLongPress=_treatsForcePressAsLongPress;
@property(nonatomic) _Bool wasLongPressed; // @synthesize wasLongPressed=_wasLongPressed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(readonly, copy) NSString *debugDescription;
- (double)_imageViewAlpha;	// IMP=0x000000000010d924
- (id)_preferredFont;	// IMP=0x000000000010d88c
- (id)_preferredImageName;	// IMP=0x000000000010d840
- (void)_updateBackgroundEffectViewIsHidden;	// IMP=0x000000000010d6fe
- (void)_updateEdgeInsets;	// IMP=0x000000000010d5de
- (void)_updateTintColorIfNeeded;	// IMP=0x000000000010d504
- (void)_updateImageIfNeeded;	// IMP=0x000000000010d4b8
- (void)_updateLayoutItem;	// IMP=0x000000000010d3c3
- (void)_resetTrackedState;	// IMP=0x000000000010d31b
- (void)_handleUserInteractionGestureRecognizer:(id)arg1;	// IMP=0x000000000010d29f
- (struct CGSize)_preferredLayoutSize;	// IMP=0x000000000010d1ca
- (void)layoutAttributesDidChange;	// IMP=0x000000000010d171
- (void)layoutSubviews;	// IMP=0x000000000010d08a
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000010cf8e
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000010cf3f
- (struct CGRect)hitRect;	// IMP=0x000000000010ce44
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000010cc3a
- (id)accessibilityLabel;	// IMP=0x000000000010cbce
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000010ca26
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000010c600
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000010c583
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000010c506
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000010c246
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000010c084
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000010beed
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000010bdc6
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000010b0ee
- (struct CGSize)minimumSize;	// IMP=0x000000000010b0dc
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

