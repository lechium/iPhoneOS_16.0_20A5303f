//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNUINavigationListStyleApplier, NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;
@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCell : UITableViewCell
{
    _Bool _accessoryControlExpanded;	// 8 = 0x8
    _Bool _contentViewConstraintsLoaded;	// 9 = 0x9
    _Bool _showSeparator;	// 10 = 0xa
    UIImageView *_accessoryImageView;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_titleImageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    id <CNUINavigationListStyle> _navigationListStyle;	// 48 = 0x30
    CNUINavigationListStyleApplier *_styleApplier;	// 56 = 0x38
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;	// 64 = 0x40
    NSLayoutConstraint *_subtitleLabelFirstBaselineAnchorConstraint;	// 72 = 0x48
    NSLayoutConstraint *_subtitleLabelLeadingAnchorConstraint;	// 80 = 0x50
    NSLayoutConstraint *_subtitleLabelTrailingAnchorConstraint;	// 88 = 0x58
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorConstraint;	// 96 = 0x60
    NSLayoutConstraint *_titleLabelLeadingAnchorConstraint;	// 104 = 0x68
    NSLayoutConstraint *_titleLabelTrailingAnchorConstraint;	// 112 = 0x70
    UILayoutGuide *_accessoryImageViewLayoutGuide;	// 120 = 0x78
    UILayoutGuide *_titleImageViewLayoutGuide;	// 128 = 0x80
}

+ (id)expandedAccessoryImageViewAccessibilityLabel;	// IMP=0x006000000009aed0
+ (id)accessoryImageViewAccessibilityLabel;	// IMP=0x006000000009ae74
+ (id)highlightedDisclosureImage;	// IMP=0x006000000009adfb
+ (id)disclosureImage;	// IMP=0x006000000009ade2
+ (id)reuseIdentifier;	// IMP=0x006000000009add5
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;	// IMP=0x006000000009ab0d
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2;	// IMP=0x006000000009aa37
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;	// IMP=0x006000000009a9a8
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;	// IMP=0x006000000009a919
- (void).cxx_destruct;	// IMP=0x000000000009a5ed
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide; // @synthesize titleImageViewLayoutGuide=_titleImageViewLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide; // @synthesize accessoryImageViewLayoutGuide=_accessoryImageViewLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint; // @synthesize titleLabelTrailingAnchorConstraint=_titleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint; // @synthesize titleLabelLeadingAnchorConstraint=_titleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint; // @synthesize titleLabelFirstBaselineAnchorConstraint=_titleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint; // @synthesize subtitleLabelTrailingAnchorConstraint=_subtitleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint; // @synthesize subtitleLabelLeadingAnchorConstraint=_subtitleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint; // @synthesize subtitleLabelFirstBaselineAnchorConstraint=_subtitleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property(nonatomic, getter=isContentViewConstraintsLoaded) _Bool contentViewConstraintsLoaded; // @synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded;
@property(nonatomic, getter=isAccessoryControlExpanded) _Bool accessoryControlExpanded; // @synthesize accessoryControlExpanded=_accessoryControlExpanded;
@property(retain, nonatomic) CNUINavigationListStyleApplier *styleApplier; // @synthesize styleApplier=_styleApplier;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009a352
- (void)updateVisualStateAnimated:(_Bool)arg1;	// IMP=0x000000000009a2eb
- (void)updateConstraintsConstants;	// IMP=0x000000000009a19e
- (void)updateConstraints;	// IMP=0x000000000009a13c
- (void)loadContentViewConstraints;	// IMP=0x00000000000992a2
- (void)setSeparatorStyle:(long long)arg1;	// IMP=0x0000000000099039
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000098fb9
- (void)setAccessoryControlExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000098f3c
- (void)prepareForReuse;	// IMP=0x0000000000098e65
- (void)setupAccessoryImageViewInView:(id)arg1;	// IMP=0x0000000000098cdc
- (void)loadContentView;	// IMP=0x0000000000098a75
- (void)applyStyle;	// IMP=0x0000000000098a29
- (void)styleUpdated;	// IMP=0x0000000000098997
- (void)dealloc;	// IMP=0x00000000000988d5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000987fe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000987d3
- (double)titleLabelFirstBaselineAnchorConstraintConstant;	// IMP=0x0000000000098771
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;	// IMP=0x00000000000986c4
- (double)contentViewBottomAnchorConstraintConstant;	// IMP=0x0000000000098662
- (double)minimumContentHeight;	// IMP=0x000000000009861f

@end
