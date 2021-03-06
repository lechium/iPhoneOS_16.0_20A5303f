//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, UGCGlyphButtonAppearance, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer;
@protocol UGCGlyphButtonViewDelegate;

@interface UGCGlyphButtonView : UIView
{
    _Bool _selected;	// 8 = 0x8
    _Bool _muted;	// 9 = 0x9
    id <UGCGlyphButtonViewDelegate> _delegate;	// 16 = 0x10
    UIImageView *_glyph;	// 24 = 0x18
    UGCGlyphButtonAppearance *_glyphAppearance;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 48 = 0x30
    CALayer *_animationLayer;	// 56 = 0x38
    CALayer *_contentLayer;	// 64 = 0x40
    CALayer *_selectionLayer;	// 72 = 0x48
}

+ (id)dislikeButtonView;	// IMP=0x004000000082a08c
+ (id)likeButtonView;	// IMP=0x001000000082a022
+ (id)_sharedThumbButtonConfig;	// IMP=0x0010000000829f22
- (void).cxx_destruct;	// IMP=0x002000000082abd6
@property(retain, nonatomic) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UGCGlyphButtonAppearance *glyphAppearance; // @synthesize glyphAppearance=_glyphAppearance;
@property(retain, nonatomic) UIImageView *glyph; // @synthesize glyph=_glyph;
@property(nonatomic) __weak id <UGCGlyphButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)_handleGlyphTap;	// IMP=0x001000000082aa3c
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000082aa2b
- (void)_updateAppearanceAnimated:(_Bool)arg1;	// IMP=0x001000000082a4d2
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000082a47c
- (void)_setupButton;	// IMP=0x001000000082a1c5
- (id)initWithAppearance:(id)arg1;	// IMP=0x001000000082a0f6
- (double)animationDuration;	// IMP=0x0010000000829f14
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000829f0e

@end

