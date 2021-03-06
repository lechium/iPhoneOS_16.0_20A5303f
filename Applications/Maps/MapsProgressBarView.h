//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIView;

@interface MapsProgressBarView
{
    double _progress;	// 8 = 0x8
    UIView *_fillView;	// 16 = 0x10
    NSLayoutConstraint *_progressFillConstraint;	// 24 = 0x18
    unsigned long long _fillStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009f1fa8
@property(nonatomic) unsigned long long fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateFillTintColor;	// IMP=0x00100000009f1eba
- (void)_updateFillConstraint;	// IMP=0x00100000009f1def
- (void)layoutSubviews;	// IMP=0x00100000009f1ca7
- (void)updateTheme;	// IMP=0x00100000009f1b96
- (void)_customInit;	// IMP=0x00100000009f18af
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009f1840

@end

