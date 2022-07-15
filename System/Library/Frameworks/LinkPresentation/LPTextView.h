//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPTextViewStyle, NSAttributedString, NSRegularExpression, NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface LPTextView
{
    UILabel *_textView;	// 8 = 0x8
    UILabel *_coloredGlyphsView;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    LPTextViewStyle *_style;	// 64 = 0x40
    NSAttributedString *_attributedString;	// 72 = 0x48
    double _ascender;	// 80 = 0x50
    double _descender;	// 88 = 0x58
    long long _overrideMaximumNumberOfLines;	// 96 = 0x60
    NSRegularExpression *_emphasizedTextExpression;	// 104 = 0x68
}

+ (id)attributedStringHidingNonColoredRanges:(id)arg1;	// IMP=0x001000000006faf8
+ (id)attributedString:(id)arg1 resolvedAgainstStyle:(id)arg2 withEmphasizedTextExpression:(id)arg3 tintColor:(id)arg4 lineBreakMode:(long long)arg5 usesVibrancy:(_Bool)arg6 forLTR:(_Bool)arg7 withFont:(id)arg8;	// IMP=0x001000000006f15d
- (void).cxx_destruct;	// IMP=0x00000000000708b8
@property(copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // @synthesize emphasizedTextExpression=_emphasizedTextExpression;
@property(nonatomic) long long overrideMaximumNumberOfLines; // @synthesize overrideMaximumNumberOfLines=_overrideMaximumNumberOfLines;
- (id)subtitleButton;	// IMP=0x000000000007088e
- (id)lastBaselineAnchor;	// IMP=0x0000000000070858
- (id)firstBaselineAnchor;	// IMP=0x0000000000070822
- (void)applyAttributedString:(id)arg1;	// IMP=0x0000000000070785
- (void)_createTextViewWithAttributedString:(id)arg1;	// IMP=0x00000000000704e9
- (id)_createLabel;	// IMP=0x000000000007046b
- (void)tintColorDidChange;	// IMP=0x000000000007041f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000702c9
- (void)layoutComponentView;	// IMP=0x00000000000701d1
- (long long)effectiveMaximumNumberOfLines;	// IMP=0x00000000000701a1
- (struct CGRect)textRect;	// IMP=0x000000000007011e
- (struct UIEdgeInsets)effectiveInsets;	// IMP=0x0000000000070052
- (long long)computedNumberOfLines;	// IMP=0x000000000006ffad
- (double)descender;	// IMP=0x000000000006ff9b
- (double)ascender;	// IMP=0x000000000006ff89
- (double)lastLineDescent;	// IMP=0x000000000006ff2e
- (double)firstLineLeading;	// IMP=0x000000000006fed3
@property(readonly, retain, nonatomic) LPTextViewStyle *style;
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000006fe74
@property(readonly, retain, nonatomic) NSAttributedString *attributedString;
- (id)effectiveAttributedString;	// IMP=0x000000000006efd9
- (_Bool)_lp_isLTR;	// IMP=0x000000000006eef1
- (void)_buildSubviewsIfNeeded;	// IMP=0x000000000006eca4
- (id)initWithHost:(id)arg1 text:(id)arg2 style:(id)arg3;	// IMP=0x000000000006ebbd
- (id)initWithHost:(id)arg1;	// IMP=0x000000000006ebaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
