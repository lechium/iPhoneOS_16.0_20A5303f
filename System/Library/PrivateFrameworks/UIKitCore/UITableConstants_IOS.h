//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_IOS : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000001014cbc
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000001018435
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000001018300
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x00000000010180c2
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000001017fea
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000001017f3f
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000001017f36
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000001017f2d
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000001017f24
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001017f16
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000001017f0e
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000001017f00
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001017d38
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001017c68
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000001017c5a
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000001017b74
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000001017abc
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001017a09
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x000000000101799d
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000010178ea
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x000000000101787e
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001017860
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001017857
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001017849
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010177ef
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000001017701
- (id)defaultOutlineDisclosureImageForView:(id)arg1;	// IMP=0x0000000001017659
- (id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg1;	// IMP=0x0000000001017594
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x00000000010174bb
- (id)_defaultCircleDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x0000000001017375
- (id)_defaultDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x00000000010172b0
- (id)_symbolImageNamed:(id)arg1 withTextStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x0000000001017217
- (id)_accessoryTintColorForAccessoryBaseColor:(id)arg1;	// IMP=0x00000000010171e5
- (id)_defaultAccessoryTintColor;	// IMP=0x0000000001017177
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floating:(_Bool)arg3;	// IMP=0x0000000001016ef7
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000001016ee1
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000001016eae
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001016e37
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001016dc0
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001016d3f
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001016cbe
- (id)defaultPlainHeaderFooterFont;	// IMP=0x0000000001016c1f
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001016bed
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000001016b1e
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000001016a0f
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x00000000010169e2
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000001016948
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;	// IMP=0x00000000010168fa
- (id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;	// IMP=0x00000000010168a3
- (id)defaultSidebarHeaderFont;	// IMP=0x0000000001016880
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;	// IMP=0x0000000001016866
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x000000000101676c
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x000000000101671a
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000010166d3
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x000000000101668c
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000001016670
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x000000000101665e
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x000000000101663c
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001016628
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x00000000010165e3
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x00000000010165cc
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x00000000010165c4
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x00000000010165b1
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x000000000101658d
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000001016487
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000001016448
- (double)_defaultMarginWidthForTableView:(id)arg1 canUseLayoutMargins:(_Bool)arg2;	// IMP=0x0000000001016223
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x000000000101621a
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000001016211
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x00000000010161ff
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x00000000010161db
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x00000000010161bf
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000001015f16
- (double)defaultCellCornerRadius;	// IMP=0x0000000001015f0d
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000001015ea6
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000001015e42
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001015da3
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000001015d7d
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000001015d6f
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000001015d53
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000001015d28
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001015cfd
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001015cd2
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001015cca
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1;	// IMP=0x0000000001015c9d
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000001015c10
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001015ac4
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000010159dc
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x00000000010159c5
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x00000000010159a3
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x00000000010158e9
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000010158c6
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x000000000101580c
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000001015780
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000001015778
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000001015764
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000001015756
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x000000000101574b
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010156d8
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000101562e
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000001015193
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000001014e31
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000001014e08
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001014d95
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000001014d8d
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001014d53
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000001014d4b
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000001014d42
- (id)sidebarVariant;	// IMP=0x0000000001014d39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
