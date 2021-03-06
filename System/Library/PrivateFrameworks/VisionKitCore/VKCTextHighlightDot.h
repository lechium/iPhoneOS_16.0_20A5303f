//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface VKCTextHighlightDot : UIView
{
    _Bool _pulsing;	// 8 = 0x8
    UIColor *_highlightColor;	// 16 = 0x10
    CALayer *_textHighlightLayer;	// 24 = 0x18
    CALayer *_pulsingLayer;	// 32 = 0x20
    CALayer *_circleLayer;	// 40 = 0x28
    struct VKQuadSideLength _quadSideLength;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009f670
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(retain, nonatomic) CALayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CALayer *pulsingLayer; // @synthesize pulsingLayer=_pulsingLayer;
@property(nonatomic) __weak CALayer *textHighlightLayer; // @synthesize textHighlightLayer=_textHighlightLayer;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) struct VKQuadSideLength quadSideLength; // @synthesize quadSideLength=_quadSideLength;
- (void)configureForPulsing:(_Bool)arg1;	// IMP=0x000000000009ee0f
- (struct CGRect)_rectForViewSpace:(struct CGRect)arg1;	// IMP=0x000000000009ecf2
- (void)updateIndicatorDotForState;	// IMP=0x000000000009eb5a
- (struct CGRect)rectForIndicatorDot;	// IMP=0x000000000009ea96
- (double)opacityForCurrentQuadSize;	// IMP=0x000000000009e942
- (void)_updateLayout;	// IMP=0x000000000009e837
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009e7f6
- (void)layoutSubviews;	// IMP=0x000000000009e7b5
- (id)initWithColor:(id)arg1;	// IMP=0x000000000009e67f

@end

