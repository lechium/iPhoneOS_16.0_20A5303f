//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, LPAudioPlayButtonStyle, LPAudioPlayButtonTheme, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface LPPlayButtonControl : UIControl
{
    LPAudioPlayButtonStyle *_style;	// 8 = 0x8
    LPAudioPlayButtonTheme *_theme;	// 16 = 0x10
    CAShapeLayer *_borderLayer;	// 24 = 0x18
    CAShapeLayer *_innerProgressLayer;	// 32 = 0x20
    CAShapeLayer *_outerProgressLayer;	// 40 = 0x28
    CAShapeLayer *_highlightLayer;	// 48 = 0x30
    UILongPressGestureRecognizer *_highlightRecognizer;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    UIImageView *_imageView;	// 72 = 0x48
    _Bool _indeterminate;	// 80 = 0x50
    float _progress;	// 84 = 0x54
    _Bool _showingProgress;	// 88 = 0x58
    _Bool _isPlaying;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x0000000000088396
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)playable;	// IMP=0x0000000000088335
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000088323
- (void)_updateEnabledState;	// IMP=0x00000000000882bc
- (void)_updateInnerProgressLayerStroke;	// IMP=0x0000000000088248
- (void)_toggleToPlayState;	// IMP=0x00000000000881e4
- (void)_showPlayIndicator:(_Bool)arg1;	// IMP=0x0000000000088163
- (void)_createHighlightLayer;	// IMP=0x0000000000087fd6
- (void)_createOuterProgressView;	// IMP=0x0000000000087e7d
- (void)_createInnerProgressView;	// IMP=0x0000000000087d0b
- (void)_createImageView;	// IMP=0x0000000000087bd2
- (void)_createBackgroundView;	// IMP=0x0000000000087ae8
- (void)_createBorderView;	// IMP=0x0000000000087907
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;	// IMP=0x00000000000877bc
- (void)_updateOuterProgressLayerStroke;	// IMP=0x0000000000087753
- (void)showPlayIndicator:(_Bool)arg1;	// IMP=0x0000000000087741
- (void)setShowOuterBorder:(_Bool)arg1;	// IMP=0x0000000000087702
- (void)setShowBorder:(_Bool)arg1;	// IMP=0x00000000000876df
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000874e5
- (void)hideProgressAnimated:(_Bool)arg1;	// IMP=0x0000000000087409
- (void)endIndeterminateAnimation;	// IMP=0x0000000000087318
- (void)beginIndeterminateAnimation;	// IMP=0x00000000000871a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000087196
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000087155
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000087143
- (void)_hideTapHighlight;	// IMP=0x00000000000870b9
- (void)_highlightLongPressRecognized:(id)arg1;	// IMP=0x000000000008704d
- (void)_didScroll;	// IMP=0x0000000000087005
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;	// IMP=0x0000000000086ffd
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000086fa1
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000000086f9b
- (void)installRecognizersOnView:(id)arg1;	// IMP=0x0000000000086eac
- (void)layoutPlayButton;	// IMP=0x0000000000086dff
- (void)layoutSubviews;	// IMP=0x0000000000086dbe
- (float)buttonCornerRadius;	// IMP=0x0000000000086cb5
- (struct CGSize)buttonSize;	// IMP=0x0000000000086c50
- (id)defaultBackgroundColor;	// IMP=0x0000000000086c1c
- (id)outerBorderColor;	// IMP=0x0000000000086bff
- (id)pauseImage;	// IMP=0x0000000000086ba8
- (id)playImage;	// IMP=0x0000000000086b51
- (void)setPlayButtonState:(unsigned long long)arg1;	// IMP=0x000000000008696a
- (_Bool)isFlipped;	// IMP=0x0000000000086962
- (id)initWithStyle:(id)arg1 theme:(id)arg2;	// IMP=0x0000000000086768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

