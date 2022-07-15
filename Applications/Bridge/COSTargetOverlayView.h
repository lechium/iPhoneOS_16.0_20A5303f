//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class COSTargetBackgroundView, COSTargetOutlineView, UIBezierPath, UILabel;

@interface COSTargetOverlayView : UIView
{
    double _targetWidthRatio;	// 8 = 0x8
    UIBezierPath *_cutoutPath;	// 16 = 0x10
    double _targetAspect;	// 24 = 0x18
    double _targetYOffset;	// 32 = 0x20
    double _targetCornerRadius;	// 40 = 0x28
    double _gradientHeight;	// 48 = 0x30
    COSTargetOutlineView *_outlineView;	// 56 = 0x38
    COSTargetBackgroundView *_backgroundView;	// 64 = 0x40
    double _cachedProgress;	// 72 = 0x48
    UILabel *_progressLabel;	// 80 = 0x50
    struct CGRect _targetRect;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000f82b1
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) double cachedProgress; // @synthesize cachedProgress=_cachedProgress;
@property(retain, nonatomic) COSTargetBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) COSTargetOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(nonatomic) double targetCornerRadius; // @synthesize targetCornerRadius=_targetCornerRadius;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) double targetYOffset; // @synthesize targetYOffset=_targetYOffset;
@property(nonatomic) double targetAspect; // @synthesize targetAspect=_targetAspect;
@property(retain, nonatomic) UIBezierPath *cutoutPath; // @synthesize cutoutPath=_cutoutPath;
@property(nonatomic) double targetWidthRatio; // @synthesize targetWidthRatio=_targetWidthRatio;
- (void)_configureMetrics;	// IMP=0x00100000000f7f91
- (void)_updateSubviews;	// IMP=0x00100000000f7ea5
- (void)_setupSubviews;	// IMP=0x00100000000f7b1b
- (void)_updateProgressViewFrame;	// IMP=0x00100000000f7a04
- (void)setScanningProgress:(double)arg1 key:(id)arg2;	// IMP=0x00100000000f796f
- (void)layoutSubviews;	// IMP=0x00100000000f792e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000f7890

@end
