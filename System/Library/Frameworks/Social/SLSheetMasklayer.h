//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor, _SLSheetMaskLayer;

__attribute__((visibility("hidden")))
@interface SLSheetMasklayer : CALayer
{
    CALayer *_topLayer;	// 8 = 0x8
    CALayer *_leftLayer;	// 16 = 0x10
    CALayer *_bottomLayer;	// 24 = 0x18
    CALayer *_rightLayer;	// 32 = 0x20
    _SLSheetMaskLayer *_sheetMaskLayer;	// 40 = 0x28
    CALayer *_solidSheetMaskLayer;	// 48 = 0x30
    UIColor *_backgroundColor;	// 56 = 0x38
    struct CGRect _lastBounds;	// 64 = 0x40
    struct CGRect _lastMaskRect;	// 96 = 0x60
    double _clipCornerRadius;	// 128 = 0x80
    UIColor *_clipBackgroundColor;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000001f2d5
@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) double clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
- (void)updateMaskWithBounds:(struct CGRect)arg1 maskRect:(struct CGRect)arg2;	// IMP=0x000000000001ef50
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x000000000001e15d
- (void)restoreSheetCutout;	// IMP=0x000000000001e0c5
- (void)removeSheetCutout;	// IMP=0x000000000001e02e
- (void)removeAllAnimations;	// IMP=0x000000000001df96
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;	// IMP=0x000000000001dab6

@end
