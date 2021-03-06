//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSLayoutConstraint, UIColor, UIView;

@interface CarFocusableProgressButton
{
    double _progress;	// 8 = 0x8
    UIView *_fillView;	// 16 = 0x10
    UIView *_barView;	// 24 = 0x18
    NSLayoutConstraint *_horizontalConstraint;	// 32 = 0x20
    UIColor *_progressFillColor;	// 40 = 0x28
    UIColor *_progressFillFocusedColor;	// 48 = 0x30
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000270826
@property(retain, nonatomic) UIColor *progressFillFocusedColor; // @synthesize progressFillFocusedColor=_progressFillFocusedColor;
@property(retain, nonatomic) UIColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateProgressConstraint;	// IMP=0x00100000002705df
- (void)_updateColors;	// IMP=0x00100000002704f3
- (void)focusDidChange:(_Bool)arg1;	// IMP=0x001000000027049d
- (void)setProgessFillColor:(id)arg1;	// IMP=0x001000000027040d
- (void)_insertFillViewIfNecessary;	// IMP=0x001000000026fc82
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x001000000026fc1e
- (void)didMoveToWindow;	// IMP=0x001000000026fbdd

@end

