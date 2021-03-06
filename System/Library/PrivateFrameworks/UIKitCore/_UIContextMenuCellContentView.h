//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UISPasteVariant, UIStackView, _UISlotView;
@protocol _UIContextMenuCellLayout;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCellContentView : UIView
{
    _Bool _needsConstraintRebuild;	// 184 = 0xb8
    _Bool _isEmphasized;	// 185 = 0xb9
    unsigned long long _options;	// 192 = 0xc0
    unsigned long long _preferredLineLimit;	// 200 = 0xc8
    unsigned long long _overrideNumberOfTitleLines;	// 208 = 0xd0
    id <_UIContextMenuCellLayout> _layout;	// 216 = 0xd8
    UIImageView *_decorationImageView;	// 224 = 0xe0
    UIImageView *_iconImageView;	// 232 = 0xe8
    UIButton *_accessoryButton;	// 240 = 0xf0
    UILabel *_emphasizedTitleLabel;	// 248 = 0xf8
    UIImageView *_emphasizediconImageView;	// 256 = 0x100
    NSLayoutConstraint *_nonSymbolImageWidth;	// 264 = 0x108
    NSLayoutConstraint *_nonSymbolImageHeight;	// 272 = 0x110
    _UISlotView *_securePasteButtonSlotView;	// 280 = 0x118
    UIStackView *_labelStackView;	// 288 = 0x120
    UILabel *_titleLabel;	// 296 = 0x128
    UILabel *_subtitleLabel;	// 304 = 0x130
    UISPasteVariant *_pasteVariant;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0000000000b2c607
@property(retain, nonatomic) UISPasteVariant *pasteVariant; // @synthesize pasteVariant=_pasteVariant;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(nonatomic) __weak _UISlotView *securePasteButtonSlotView; // @synthesize securePasteButtonSlotView=_securePasteButtonSlotView;
@property(nonatomic) _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(nonatomic) _Bool needsConstraintRebuild; // @synthesize needsConstraintRebuild=_needsConstraintRebuild;
@property(retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // @synthesize nonSymbolImageHeight=_nonSymbolImageHeight;
@property(retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // @synthesize nonSymbolImageWidth=_nonSymbolImageWidth;
@property(retain, nonatomic) UIImageView *emphasizediconImageView; // @synthesize emphasizediconImageView=_emphasizediconImageView;
@property(retain, nonatomic) UILabel *emphasizedTitleLabel; // @synthesize emphasizedTitleLabel=_emphasizedTitleLabel;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *decorationImageView; // @synthesize decorationImageView=_decorationImageView;
@property(readonly, nonatomic) id <_UIContextMenuCellLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long overrideNumberOfTitleLines; // @synthesize overrideNumberOfTitleLines=_overrideNumberOfTitleLines;
@property(nonatomic) unsigned long long preferredLineLimit; // @synthesize preferredLineLimit=_preferredLineLimit;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)_hasTrailingAccessory;	// IMP=0x0000000000b2c405
- (id)_childIndicatorImage;	// IMP=0x0000000000b2c364
- (id)_mixedSelectionImage;	// IMP=0x0000000000b2c2fa
- (id)_selectionImage;	// IMP=0x0000000000b2c290
- (id)_decorationSymbolImageConfiguration;	// IMP=0x0000000000b2c268
- (struct CGSize)_maxImageSize;	// IMP=0x0000000000b2c1a9
- (id)_subtitleTextColor;	// IMP=0x0000000000b2c0f1
- (id)_primaryContentColorForCurrentState;	// IMP=0x0000000000b2c028
- (id)_iconSymbolConfigurationForCurrentTraitsUsingBoldFont:(_Bool)arg1;	// IMP=0x0000000000b2bf24
- (void)_updateSubtitleLabelNumberOfLines;	// IMP=0x0000000000b2be3a
- (void)_updateTitleLabelNumberOfLines;	// IMP=0x0000000000b2bb61
- (id)_subtitleLabelFilterForCurrentTraits;	// IMP=0x0000000000b2bb03
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b2ab24
- (void)updateConstraints;	// IMP=0x0000000000b2a484
- (void)_updateAppearanceForStateChange;	// IMP=0x0000000000b2a2b5
- (void)_updateAttachedConstraintsForViewHierarchyChange;	// IMP=0x0000000000b29fa6
- (id)_contentImageViewForImage:(id)arg1;	// IMP=0x0000000000b29eec
- (void)_installSubtitleLabelIfNeeded;	// IMP=0x0000000000b29cc2
- (id)_primaryTitleLabel;	// IMP=0x0000000000b29b90
- (void)_installTitleLabelIfNeeded;	// IMP=0x0000000000b29ab5
- (void)_createLabelStackViewIfNeeded;	// IMP=0x0000000000b29999
- (unsigned int)_secureName;	// IMP=0x0000000000b29973
- (void)_setupSecureView;	// IMP=0x0000000000b291ec
- (void)prepareForReuse;	// IMP=0x0000000000b29085
- (void)_hideContents;	// IMP=0x0000000000b28faa
@property(readonly, nonatomic) unsigned long long measuredNumberOfTitleLines;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)arg1;	// IMP=0x0000000000b28b76
- (void)layoutSubviews;	// IMP=0x0000000000b28ae6
- (void)_setNeedsConstraintRebuild;	// IMP=0x0000000000b28ab3
- (void)_setDecorationImage:(id)arg1;	// IMP=0x0000000000b28805
- (void)setAccessoryAction:(id)arg1;	// IMP=0x0000000000b2860d
- (void)setImage:(id)arg1;	// IMP=0x0000000000b28379
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000b281e9
- (void)setAttributedTitle:(id)arg1;	// IMP=0x0000000000b2804c
- (void)setTitle:(id)arg1;	// IMP=0x0000000000b27eaf
@property(readonly, nonatomic) UIView *iconView;
@property(readonly, nonatomic) UIView *decorationView;
- (void)setLayoutClass:(Class)arg1;	// IMP=0x0000000000b27d4b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b27c5c

@end

