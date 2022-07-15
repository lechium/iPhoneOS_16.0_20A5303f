//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView
{
    VUIMediaTagsViewLayout *_tagsViewLayout;	// 8 = 0x8
    NSDictionary *_viewsMap;	// 16 = 0x10
    NSArray *_groupedSubviews;	// 24 = 0x18
    double _totalSubviewsWidth;	// 32 = 0x20
    UIImage *_commonSenseLightImage;	// 40 = 0x28
    UIImage *_commonSenseDarkImage;	// 48 = 0x30
}

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 existingView:(id)arg3;	// IMP=0x001000000016b8a0
- (void).cxx_destruct;	// IMP=0x000000000017321d
@property(retain, nonatomic) UIImage *commonSenseDarkImage; // @synthesize commonSenseDarkImage=_commonSenseDarkImage;
@property(retain, nonatomic) UIImage *commonSenseLightImage; // @synthesize commonSenseLightImage=_commonSenseLightImage;
@property(nonatomic) double totalSubviewsWidth; // @synthesize totalSubviewsWidth=_totalSubviewsWidth;
@property(retain, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(copy, nonatomic) NSDictionary *viewsMap; // @synthesize viewsMap=_viewsMap;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout; // @synthesize tagsViewLayout=_tagsViewLayout;
- (void)_addGenreLabelAndSeparator;	// IMP=0x0000000000172fd6
- (void)_removeGenreLabelAndSeparator;	// IMP=0x0000000000172e1d
- (double)_totalSubviewsWidth;	// IMP=0x0000000000172456
- (void)_removeSeparatorsFromGroupsIfNeeded:(_Bool)arg1;	// IMP=0x0000000000171ff6
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000171fc6
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000171bf3
- (_Bool)_shouldPutTextOnSeparateLines;	// IMP=0x0000000000171baf
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;	// IMP=0x0000000000171a69
- (id)_newImageViewAsSubview:(_Bool)arg1;	// IMP=0x00000000001719ae
- (_Bool)_shouldApplyTintColor:(id)arg1 forImage:(id)arg2;	// IMP=0x00000000001718bf
- (id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000001717dc
- (id)_newLabelAsSubview:(id)arg1;	// IMP=0x0000000000171714
- (id)_firstLabelSubview;	// IMP=0x00000000001715b3
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x00000000001715a1
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000017146c
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x000000000017136a
- (void)updateWithMetadata:(id)arg1;	// IMP=0x000000000016fcca
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x000000000016fc24
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000016fb9f
- (double)vui_baselineOffsetFromBottom;	// IMP=0x000000000016fb4d
- (double)firstBaselineOffsetFromTop;	// IMP=0x000000000016fafb
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000016f7ff
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x000000000016f4b4
- (void)_adjustViewsPositionFor:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x000000000016efd6
- (struct CGSize)_layoutSubviewsForSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000016bc56
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000016bb54
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;	// IMP=0x000000000016b9d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
