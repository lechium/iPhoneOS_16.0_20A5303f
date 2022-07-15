//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView : UIView
{
    UIView *dimmingKnockoutView;	// 184 = 0xb8
    UIVisualEffectView *backdropView;	// 192 = 0xc0
    double _alpha;	// 200 = 0xc8
    double _currentCornerRadius;	// 208 = 0xd0
    double _cornerRadius;	// 216 = 0xd8
    long long _style;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000001434ae5
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)setPressed:(_Bool)arg1;	// IMP=0x0000000001434abc
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000001434aa4
- (void)_updateCornerRadius;	// IMP=0x0000000001434874
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x000000000143479c
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000143477e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000143471a
- (void)setAlpha:(double)arg1;	// IMP=0x000000000143469b
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;	// IMP=0x0000000001434613
- (id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1;	// IMP=0x00000000014345d0
- (id)_vibrancyEffectForStyle:(long long)arg1;	// IMP=0x00000000014345c8
- (id)_visualEffectForStyle:(long long)arg1;	// IMP=0x000000000143437c
- (void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2;	// IMP=0x000000000143418b
- (void)_configureViewsWithStyle:(long long)arg1;	// IMP=0x0000000001433f26
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000001433e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
