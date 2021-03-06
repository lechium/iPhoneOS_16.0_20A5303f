//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_Phone.h"

@class NSDictionary, NSLayoutConstraint, NSString, _UIStatusBarCellularItem, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarRegionAxisCenteringLayout, _UIStatusBarRegionAxisStackingLayout;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;	// 16 = 0x10
    NSLayoutConstraint *_backgroundHeightConstraint;	// 24 = 0x18
    _UIStatusBarCellularItem *_condensedCellularItem;	// 32 = 0x20
    NSLayoutConstraint *_leadingTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingHeightConstraint;	// 48 = 0x30
    _UIStatusBarRegionAxisStackingLayout *_leadingHorizontalLayout;	// 56 = 0x38
    NSLayoutConstraint *_centerTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_centerHeightConstraint;	// 72 = 0x48
    _UIStatusBarRegionAxisCenteringLayout *_centerHorizontalLayout;	// 80 = 0x50
    NSLayoutConstraint *_trailingTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_trailingHeightConstraint;	// 96 = 0x60
    _UIStatusBarRegionAxisStackingLayout *_trailingHorizontalLayout;	// 104 = 0x68
    NSLayoutConstraint *_expandedLeadingBottomConstraint;	// 112 = 0x70
    NSLayoutConstraint *_expandedTrailingBottomConstraint;	// 120 = 0x78
}

+ (double)height;	// IMP=0x0010000000f487f7
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;	// IMP=0x0010000000f487d4
+ (double)_heightExpanded:(_Bool)arg1;	// IMP=0x0010000000f487b8
- (void).cxx_destruct;	// IMP=0x0000000000f4f967
@property(retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // @synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint; // @synthesize expandedLeadingBottomConstraint=_expandedLeadingBottomConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout; // @synthesize trailingHorizontalLayout=_trailingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint; // @synthesize trailingHeightConstraint=_trailingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingTopConstraint; // @synthesize trailingTopConstraint=_trailingTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout; // @synthesize centerHorizontalLayout=_centerHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *centerHeightConstraint; // @synthesize centerHeightConstraint=_centerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerTopConstraint; // @synthesize centerTopConstraint=_centerTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout; // @synthesize leadingHorizontalLayout=_leadingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint; // @synthesize leadingHeightConstraint=_leadingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingTopConstraint; // @synthesize leadingTopConstraint=_leadingTopConstraint;
@property(retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem; // @synthesize condensedCellularItem=_condensedCellularItem;
@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // @synthesize lowerWifiGroup=_lowerWifiGroup;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (id)_backgroundActivityDetailRemovalAnimation;	// IMP=0x0000000000f4e7e0
- (void)setOnLockScreen:(_Bool)arg1;	// IMP=0x0000000000f4e771
- (void)_updateLockScreenSizing;	// IMP=0x0000000000f4e5b6
- (void)setExpanded:(_Bool)arg1;	// IMP=0x0000000000f4e558
- (void)_updateBackgroundHeight;	// IMP=0x0000000000f4e522
- (void)updateDataForService:(id)arg1;	// IMP=0x0000000000f4e46d
- (void)_updateExpandedTrailingRegion;	// IMP=0x0000000000f4e24d
- (void)_updateLowerRegionsWithData:(id)arg1;	// IMP=0x0000000000f4df3c
- (void)statusBarRegionsUpdated;	// IMP=0x0000000000f4df2a
- (void)dataUpdated:(id)arg1;	// IMP=0x0000000000f4df18
- (void)orientationUpdatedFromOrientation:(long long)arg1;	// IMP=0x0000000000f4dea9
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x0000000000f4dcc3
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000f4dbee
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000f4d98d
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000f4d65a
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f4d58a
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000f4d447
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000f4d1de
- (id)_animationForSingleLineDualCarrier;	// IMP=0x0000000000f4d043
- (id)willUpdateWithData:(id)arg1;	// IMP=0x0000000000f4ce41
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000f4ca9c
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000f4c963
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000f4c901
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000f4c6cc
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000f4a85a
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000f48b3e
- (id)clockFont;	// IMP=0x0000000000f48b2c
- (struct CGSize)smallPillSize;	// IMP=0x0000000000f48b1b
- (struct CGSize)pillSize;	// IMP=0x0000000000f48b05
- (id)pillFont;	// IMP=0x0000000000f48a8d
- (id)expandedFont;	// IMP=0x0000000000f48a15
- (id)timeFont;	// IMP=0x0000000000f4899d
- (id)normalFont;	// IMP=0x0000000000f48925
- (double)lowerExpandedBaselineOffset;	// IMP=0x0000000000f48917
- (double)dualLineExpandedBaselineOffset;	// IMP=0x0000000000f48909
- (double)expandedBaselineOffset;	// IMP=0x0000000000f488fb
- (double)baselineOffset;	// IMP=0x0000000000f48894
- (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x0000000000f4886a
- (double)regionSpacing;	// IMP=0x0000000000f4885c
- (double)effectiveHeight;	// IMP=0x0000000000f4880b
- (_Bool)wantsExpandedLeadingPlacements;	// IMP=0x0000000000f487b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

