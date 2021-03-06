//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_CarPlay : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000001012ebc
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000001014797
- (unsigned long long)contentClipCornersForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000101478c
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000001014784
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x000000000101463a
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000001014632
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x000000000101462a
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000001014621
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000001014618
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x000000000101460f
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001014601
- (_Bool)reorderingCellWantsShadows;	// IMP=0x00000000010145f9
- (double)defaultAlphaForReorderingCell;	// IMP=0x00000000010145eb
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x000000000101444d
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x00000000010143b6
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x00000000010143a8
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x00000000010142a2
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000001014167
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000101414e
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000001014138
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000101411f
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000001014109
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010140eb
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010140e2
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010140d4
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000101407a
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000101405f
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000001014044
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013fdb
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001013fc2
- (id)_imageWithName:(id)arg1 accessoryBaseColor:(id)arg2;	// IMP=0x0000000001013eda
- (id)_defaultAccessoryColorFocused:(_Bool)arg1;	// IMP=0x0000000001013ea1
- (id)defaultFocusedAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013e88
- (id)defaultAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013e6f
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floating:(_Bool)arg3;	// IMP=0x0000000001013e09
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000001013e01
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000001013df9
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001013dbf
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001013d85
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001013d54
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001013cb3
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001013c81
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000001013c5e
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013c45
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000001013c2c
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001013bff
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000001013bdc
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013bc3
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000001013baa
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001013ba1
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001013b99
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001013b91
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000001013b75
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;	// IMP=0x0000000001013b67
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000001013b59
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000001013b25
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000001013b03
- (double)_defaultPlainHeaderFooterHeightForTableViewStyle:(long long)arg1;	// IMP=0x0000000001013aab
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001013a9d
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001013a8b
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001013a0c
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x00000000010139e3
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x00000000010139db
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x00000000010139c8
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x00000000010139a4
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000001013985
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000001013966
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x000000000101395d
- (double)defaultPaddingBetweenRows;	// IMP=0x000000000101394f
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x000000000101393d
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000001013934
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000001013926
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x00000000010137d0
- (double)defaultCellCornerRadius;	// IMP=0x00000000010137c7
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x00000000010137be
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x00000000010137b5
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000010137ac
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x000000000101379a
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000001013788
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000001013776
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000001013768
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000101375a
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000101374c
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013744
- (struct UIEdgeInsets)headerFooterOffsetFromContentInsetForTableView:(id)arg1;	// IMP=0x000000000101372a
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1;	// IMP=0x00000000010136fd
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x00000000010136b3
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013567
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001013475
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000001013467
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000001013459
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x000000000101339f
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000010132e9
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x00000000010132db
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000010132cd
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x00000000010132c5
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x00000000010132b1
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x00000000010132a3
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x000000000101329b
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001013293
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000101319d
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x00000000010130a7
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000001012f96
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000001012f6d
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001012f54
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000001012f4c
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001012f12
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000001012f0a
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000001012f01
- (id)sidebarVariant;	// IMP=0x0000000001012ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

