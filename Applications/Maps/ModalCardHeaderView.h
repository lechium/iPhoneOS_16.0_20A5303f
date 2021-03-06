//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HairlineView, MapsThemeButton, ModalCardHeaderConfiguration, NSLayoutConstraint, NSString, UILabel, UIStackView;

@interface ModalCardHeaderView
{
    NSLayoutConstraint *_topToTitleBaselineConstraint;	// 8 = 0x8
    NSLayoutConstraint *_titleBaselineToBottomConstraint;	// 16 = 0x10
    NSLayoutConstraint *_titleLeadingConstraint;	// 24 = 0x18
    _Bool _useAdaptativeFont;	// 32 = 0x20
    ModalCardHeaderConfiguration *_configuration;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    MapsThemeButton *_leadingButton;	// 56 = 0x38
    MapsThemeButton *_trailingButton;	// 64 = 0x40
    HairlineView *_bottomHairline;	// 72 = 0x48
    double _scrollViewOffset;	// 80 = 0x50
    UIStackView *_stackView;	// 88 = 0x58
}

+ (id)createModalBarButtonItem;	// IMP=0x004000000089deef
- (void).cxx_destruct;	// IMP=0x002000000089eecd
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool useAdaptativeFont; // @synthesize useAdaptativeFont=_useAdaptativeFont;
@property(nonatomic) double scrollViewOffset; // @synthesize scrollViewOffset=_scrollViewOffset;
@property(readonly, nonatomic) HairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(readonly, nonatomic) MapsThemeButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(readonly, nonatomic) MapsThemeButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ModalCardHeaderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *title;
- (void)_createConstraintsSpecificToConfiguration;	// IMP=0x001000000089ea5d
- (void)_setupInitialConstraints;	// IMP=0x001000000089e7e1
- (void)_updateSizeForCurrentConfiguration;	// IMP=0x001000000089e428
- (void)_customInit;	// IMP=0x001000000089dfb9
- (void)_setMask:(id)arg1;	// IMP=0x001000000089dda9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000089dcd8
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000089dc7e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000089dc24

@end

