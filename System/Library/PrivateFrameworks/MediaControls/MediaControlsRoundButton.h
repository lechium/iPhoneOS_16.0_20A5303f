//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CCUICAPackageView, MRUShadowView, MRUVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsRoundButton : UIControl
{
    _Bool _labelHidden;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_packageName;	// 24 = 0x18
    NSString *_glyphState;	// 32 = 0x20
    MRUVisualStylingProvider *_stylingProvider;	// 40 = 0x28
    long long _axis;	// 48 = 0x30
    CCUICAPackageView *_packageView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    MRUShadowView *_shadowView;	// 72 = 0x48
    struct CGSize _imageSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000c2c3e
@property(retain, nonatomic) MRUShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isLabelHidden) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateContentSizeCategory;	// IMP=0x00000000000c2adf
- (void)updatePackageVisualStyling;	// IMP=0x00000000000c2750
- (void)updateLabelVisualStyling;	// IMP=0x00000000000c263f
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000c2611
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000c2560
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000000c2517
- (struct CGRect)accessibilityFrame;	// IMP=0x00000000000c24f8
- (_Bool)isAccessibilityElement;	// IMP=0x00000000000c24f0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c24a1
- (void)controlCenterApplyPrimaryContentShadow;	// IMP=0x00000000000c2424
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000c23ce
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000000c238d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000c2328
@property(readonly, nonatomic) struct CGRect imageFrame;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000c1ea6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000c1d6f
- (void)layoutSubviews;	// IMP=0x00000000000c1a37
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c183b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

