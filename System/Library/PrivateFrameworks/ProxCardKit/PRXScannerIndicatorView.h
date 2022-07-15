//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface PRXScannerIndicatorView : UIView
{
    _Bool _needsReset;	// 8 = 0x8
    CAShapeLayer *_viewFinderTintLayer;	// 16 = 0x10
    CAGradientLayer *_viewFinderBorderLayer;	// 24 = 0x18
    CAShapeLayer *_borderLayerMask;	// 32 = 0x20
    CAShapeLayer *_initialWhiteTintLayer;	// 40 = 0x28
}

+ (double)strokeWidth;	// IMP=0x0010000000010f68
+ (double)innerHoleRatio;	// IMP=0x0010000000010f5a
- (void).cxx_destruct;	// IMP=0x00000000000124cf
@property(nonatomic) _Bool needsReset; // @synthesize needsReset=_needsReset;
@property(readonly, nonatomic) CAShapeLayer *initialWhiteTintLayer; // @synthesize initialWhiteTintLayer=_initialWhiteTintLayer;
@property(readonly, nonatomic) CAShapeLayer *borderLayerMask; // @synthesize borderLayerMask=_borderLayerMask;
@property(readonly, nonatomic) CAGradientLayer *viewFinderBorderLayer; // @synthesize viewFinderBorderLayer=_viewFinderBorderLayer;
@property(readonly, nonatomic) CAShapeLayer *viewFinderTintLayer; // @synthesize viewFinderTintLayer=_viewFinderTintLayer;
- (void)complete;	// IMP=0x0000000000012459
- (void)reset;	// IMP=0x0000000000012447
- (void)animateInitialIfNeeded;	// IMP=0x0000000000011edb
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000011d6c
- (void)animateBorderFrom:(id)arg1 to:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000011bd3
- (void)animateToColors:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000011890
- (id)innerHolePathForRatio:(double)arg1 stroke:(double)arg2;	// IMP=0x0000000000011769
- (void)completed;	// IMP=0x000000000001151e
- (void)initial;	// IMP=0x00000000000112de
- (void)configure;	// IMP=0x0000000000010f76
- (void)layoutSubviews;	// IMP=0x0000000000010d9e
- (id)init;	// IMP=0x0000000000010cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
