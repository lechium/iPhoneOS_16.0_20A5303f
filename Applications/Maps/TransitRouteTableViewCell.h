//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, TransitArtworkListView, _MKUILabel;

@interface TransitRouteTableViewCell
{
    _Bool _inRecursiveLayout;	// 40 = 0x28
    TransitArtworkListView *_shieldListView;	// 48 = 0x30
    NSLayoutConstraint *_topToShieldListViewConstraint;	// 56 = 0x38
    _MKUILabel *_badgeLabel;	// 64 = 0x40
    NSLayoutConstraint *_badgeLabelTrailingConstraint;	// 72 = 0x48
    NSLayoutConstraint *_topShieldViewToBadgeLabelConstraint;	// 80 = 0x50
    NSLayoutConstraint *_secondaryLabelBaselineAlignWithBadgeConstraint;	// 88 = 0x58
    NSLayoutConstraint *_secondaryLabelTrailingToBadgeLeadingConstraint;	// 96 = 0x60
    _Bool _canSpanFullWidth;	// 104 = 0x68
    double _leftPadding;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000006850dd
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) _Bool canSpanFullWidth; // @synthesize canSpanFullWidth=_canSpanFullWidth;
@property(readonly, nonatomic) NSArray *_indexedContentSubviewOrNullArray;
- (id)_buttonConstraintsController;	// IMP=0x0010000000684cb3
- (void)setShowDisclosureButton:(_Bool)arg1;	// IMP=0x0010000000684bb9
- (void)_configureRouteBadge;	// IMP=0x00100000006847ab
- (id)_badgeLabelFont;	// IMP=0x0010000000684786
- (void)_updateRouteBadge;	// IMP=0x00100000006845cf
- (void)_updateShieldListView;	// IMP=0x00100000006844d8
- (void)_updateCellLabels;	// IMP=0x001000000068445b
- (void)_updateConstraintValues;	// IMP=0x001000000068414c
- (double)_distanceToPositionPrimaryLabelFirstBaseline;	// IMP=0x001000000068413e
- (id)_anchorFromWhichToPositionPrimaryLabelFirstBaseline;	// IMP=0x0010000000684121
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00100000006840bb
@property(readonly, nonatomic) struct UIEdgeInsets contentHorizontalMargins;
- (_Bool)_isShieldListViewOverlappingWithBadge;	// IMP=0x0010000000683d1f
- (void)layoutSubviews;	// IMP=0x00100000006838f4
- (id)_autolayoutConstraints;	// IMP=0x0010000000683652
- (void)_createSubviews;	// IMP=0x0010000000683582
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000683525

@end
