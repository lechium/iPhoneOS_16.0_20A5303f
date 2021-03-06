//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class VKCGlowParameters;

__attribute__((visibility("hidden")))
@interface VKCImageSubjectGlowLayer : CALayer
{
    _Bool _active;	// 8 = 0x8
    CALayer *_glowLayer;	// 16 = 0x10
    VKCGlowParameters *_thinGlowParameters;	// 24 = 0x18
    VKCGlowParameters *_thickGlowParameters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008f465
@property(retain, nonatomic) VKCGlowParameters *thickGlowParameters; // @synthesize thickGlowParameters=_thickGlowParameters;
@property(retain, nonatomic) VKCGlowParameters *thinGlowParameters; // @synthesize thinGlowParameters=_thinGlowParameters;
@property(retain, nonatomic) CALayer *glowLayer; // @synthesize glowLayer=_glowLayer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)animationGroupWithDuration:(double)arg1 beginTime:(double)arg2 animations:(id)arg3;	// IMP=0x000000000008f347
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3;	// IMP=0x000000000008f29c
- (id)shapeLayerLineWidth:(double)arg1 opacity:(double)arg2 path:(struct CGPath *)arg3;	// IMP=0x000000000008f1a6
- (void)renderGlowParameters:(id)arg1 path:(struct CGPath *)arg2 pathLength:(double)arg3 duration:(double)arg4 maxStrokeLengthFraction:(id)arg5;	// IMP=0x000000000008e943
- (void)configureAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3;	// IMP=0x000000000008e561
- (void)hideGlow:(_Bool)arg1;	// IMP=0x000000000008e3dc
- (void)stopAnimationAnimated:(_Bool)arg1;	// IMP=0x000000000008e3ac
- (void)beginAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3;	// IMP=0x000000000008e28e
- (id)thinGlowParametersWithScreenScale:(double)arg1;	// IMP=0x000000000008e0b9
- (id)init;	// IMP=0x000000000008dfe5

@end

