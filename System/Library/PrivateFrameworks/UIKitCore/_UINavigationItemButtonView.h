//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView
{
    long long _style;	// 248 = 0xf8
    _Bool _pressed;	// 256 = 0x100
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 264 = 0x108
    _Bool _customBackgroundImageChangedToOrFromNil;	// 272 = 0x110
    UIImageView *_backgroundImageView;	// 280 = 0x118
    UIImageView *_imageView;	// 288 = 0x120
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 296 = 0x128
    unsigned long long _abbreviatedTitleIndex;	// 304 = 0x130
    UIColor *_accessibilityBackgroundTintColor;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0000000000192aed
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001929d5
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000001929cd
- (void)_backSelectGestureChanged:(id)arg1;	// IMP=0x00000000001928cb
- (void)_uninstallBackSelectGestureRecognizer;	// IMP=0x000000000019286f
- (void)_installBackSelectGestureRecognizer;	// IMP=0x00000000001927aa
- (void)_updateBackSelectGestureRecognizer;	// IMP=0x00000000001926ce
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001926bc
- (void)didMoveToWindow;	// IMP=0x000000000019267b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000192523
- (_Bool)canBecomeFocused;	// IMP=0x000000000019251b
- (Class)_appearanceGuideClass;	// IMP=0x000000000019250a
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000191fe5
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000191f0d
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191efb
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191d3b
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000191d1e
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191d0c
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191c1a
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191c14
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191c0e
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000191bfc
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191bf6
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000191bf0
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000191b62
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000191b50
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000019187e
- (_Bool)hasCustomBackgroundImage;	// IMP=0x0000000000191840
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;	// IMP=0x000000000019182f
- (_Bool)customBackgroundImageChangedToOrFromNil;	// IMP=0x000000000019181f
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000191802
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001917f0
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000191730
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x000000000019168d
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000191687
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000191681
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000019167b
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000191675
- (void)dealloc;	// IMP=0x00000000001915f3
- (id)_defaultFont;	// IMP=0x0000000000191383
- (_Bool)pressed;	// IMP=0x0000000000191373
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x00000000001912b1
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000019129a
- (void)setStyle:(long long)arg1;	// IMP=0x0000000000191286
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000190f7f
- (struct CGSize)imageSize;	// IMP=0x0000000000190e44
- (id)image;	// IMP=0x0000000000190dd0
- (id)title;	// IMP=0x0000000000190c6a
- (void)layoutSubviews;	// IMP=0x000000000019029c
- (id)backgroundImageView;	// IMP=0x0000000000190287
- (double)_titleYAdjustmentCustomization;	// IMP=0x000000000019027e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000018fea2
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000018fe42
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;	// IMP=0x000000000018fc28
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x000000000018fb94
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x000000000018fa9e
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x000000000018f914
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x000000000018f90c
- (id)_appearanceStorage;	// IMP=0x000000000018f8f7
- (void)tintColorDidChange;	// IMP=0x000000000018f8a1
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x000000000018f808
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x000000000018f7f6
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x000000000018f7bf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000018f69c
- (_Bool)_suppressesBackIndicatorView;	// IMP=0x000000000018f63a
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x000000000018f609
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x000000000018f55a
- (void)_resetRenderingModesForAccessibilityBackgrounds;	// IMP=0x000000000018f38a
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x000000000018f324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
