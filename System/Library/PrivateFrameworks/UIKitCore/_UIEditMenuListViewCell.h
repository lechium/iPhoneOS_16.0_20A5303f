//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIStackView, UIView, _UIEditMenuListItem, _UISlotView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuListViewCell : UICollectionViewCell
{
    _UIEditMenuListItem *_item;	// 184 = 0xb8
    double _maximumContentWidth;	// 192 = 0xc0
    UIStackView *_contentStackView;	// 200 = 0xc8
    UILabel *_titleLabel;	// 208 = 0xd0
    UIImageView *_imageView;	// 216 = 0xd8
    UIView *_customView;	// 224 = 0xe0
    NSArray *_contentConstraints;	// 232 = 0xe8
    NSLayoutConstraint *_minimumWidthConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_maximumWidthConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_slotViewCenterYConstraint;	// 256 = 0x100
    _UISlotView *_securePasteButtonSlotView;	// 264 = 0x108
    struct UIEdgeInsets _arrowEdgeInsets;	// 272 = 0x110
}

+ (struct CGSize)layoutSizeForItem:(id)arg1 traitCollection:(id)arg2;	// IMP=0x006000000131f01c
- (void).cxx_destruct;	// IMP=0x000000000132142e
@property(readonly, nonatomic) _UISlotView *securePasteButtonSlotView; // @synthesize securePasteButtonSlotView=_securePasteButtonSlotView;
@property(readonly, nonatomic) NSLayoutConstraint *slotViewCenterYConstraint; // @synthesize slotViewCenterYConstraint=_slotViewCenterYConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // @synthesize maximumWidthConstraint=_maximumWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(nonatomic) struct UIEdgeInsets arrowEdgeInsets; // @synthesize arrowEdgeInsets=_arrowEdgeInsets;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(retain, nonatomic) _UIEditMenuListItem *item; // @synthesize item=_item;
- (void)prepareForReuse;	// IMP=0x0000000001321221
- (void)_hideContents;	// IMP=0x00000000013211e1
- (void)_overlaySlotView:(id)arg1;	// IMP=0x0000000001320ed9
- (unsigned int)_secureName;	// IMP=0x0000000001320e5e
- (void)_setupSlotView;	// IMP=0x0000000001320840
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000013207c1
- (void)_updateLayoutMargins;	// IMP=0x000000000132072d
- (void)_updateFont;	// IMP=0x000000000132065f
- (void)_updateConstraints;	// IMP=0x000000000132005f
- (void)_createViewHierarchy;	// IMP=0x000000000131fe52
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000131f79b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000131f573
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000131f527
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000131f4ca

@end

