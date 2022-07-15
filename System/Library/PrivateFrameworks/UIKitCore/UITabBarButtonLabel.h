//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    double _boundsWidth;	// 184 = 0xb8
    _UITabBarItemAppearanceStorage *_appearanceStorage;	// 192 = 0xc0
    _Bool _isSelected;	// 200 = 0xc8
    _Bool _isHighlighted;	// 201 = 0xc9
    _Bool _hasSeenIdiom;	// 202 = 0xca
    Class _appearanceGuideClass;	// 208 = 0xd0
    UIColor *_unselectedTintColor;	// 216 = 0xd8
    UITabBarButton *_tabBarButton;	// 224 = 0xe0
}

+ (double)_fontPointSizeForIdiom:(long long)arg1;	// IMP=0x00600000002356dc
- (void).cxx_destruct;	// IMP=0x0000000000235e68
@property(nonatomic) __weak UITabBarButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property(retain, nonatomic) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000235d0f
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000235c6e
- (long long)_idiomForFontGivenIdiom:(long long)arg1;	// IMP=0x0000000000235bed
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;	// IMP=0x0000000000235731
- (id)_fontForIdiom:(long long)arg1;	// IMP=0x000000000023571d
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000235612
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000002355e0
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002355ce
- (void)_updateLabelsVibrancy;	// IMP=0x00000000002355c8
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002352c8
- (void)_updateForFontChangeWithIdiom:(long long)arg1;	// IMP=0x0000000000235220
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000023521a
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000235214
- (void)_setBadgeColor:(id)arg1;	// IMP=0x000000000023520e
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x0000000000235208
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000235202
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000002351fc
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000235177
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000235154
- (void)_legacyApperance_updateTextColorsForState;	// IMP=0x00000000002349c1
- (void)updateTextColorsForState;	// IMP=0x0000000000234775
- (void)tintColorDidChange;	// IMP=0x0000000000234734
- (void)resizeToFitWidth:(double)arg1;	// IMP=0x000000000023437c
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000023430a
- (id)initWithTabBarDisplayStyle:(long long)arg1;	// IMP=0x000000000023424e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000234187
- (_Bool)_shouldCeilSizeToViewScale;	// IMP=0x000000000023417f

@end
