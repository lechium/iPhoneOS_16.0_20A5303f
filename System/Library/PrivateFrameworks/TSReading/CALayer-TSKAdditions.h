//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (TSKAdditions)
+ (Class)tsd_renderableClass;	// IMP=0x0020000000216ded
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;	// IMP=0x0010000000089c9a
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 topCap:(double)arg3;	// IMP=0x0010000000089c7c
- (void)makeStretchableLayerWithoutImage:(struct CGImage *)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;	// IMP=0x0010000000089b68
- (void)makeStretchableLayerWithoutImage:(struct CGImage *)arg1 leftCap:(double)arg2 topCap:(double)arg3;	// IMP=0x0010000000089b4a
- (void)makeStretchableLayerWithImage:(struct CGImage *)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;	// IMP=0x0010000000089b0d
- (void)makeStretchableLayerWithImage:(struct CGImage *)arg1 leftCap:(double)arg2 topCap:(double)arg3;	// IMP=0x0010000000089aef
@property(readonly, nonatomic) struct CGPoint center;
- (void)scale:(double)arg1 aroundAnchorPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;	// IMP=0x00100000001999af
- (void)scale:(double)arg1 aroundBoundsPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;	// IMP=0x00100000001998f9
- (struct CATransform3D)transformToScale:(double)arg1 aroundAnchorPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;	// IMP=0x0010000000199820
- (struct CATransform3D)transformToScale:(double)arg1 aroundBoundsPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;	// IMP=0x00100000001994c6
- (void)resumeAtTime:(double)arg1;	// IMP=0x0010000000199435
- (void)resume;	// IMP=0x0010000000199411
- (void)pauseAtTime:(double)arg1;	// IMP=0x00100000001993bf
- (void)pause;	// IMP=0x001000000019939b
- (id)bakedLayer;	// IMP=0x00100000001992ec
- (struct CGImage *)newRasterizedImageRef;	// IMP=0x00100000001989d5
- (struct CGRect)frameIncludingSublayers;	// IMP=0x0010000000198734
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000001986c0
- (id)zoomDownAnimation;	// IMP=0x00100000001986a7
- (void)removeZoomDownAnimation;	// IMP=0x001000000019868e
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1 endingScale:(double)arg2 delay:(double)arg3;	// IMP=0x00100000001980b5
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1;	// IMP=0x0010000000198098
- (void)addZoomDownAnimation;	// IMP=0x001000000019805f
- (void)removeZoomAnimation;	// IMP=0x0010000000198046
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 startingScale:(double)arg2;	// IMP=0x0010000000197ace
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1;	// IMP=0x0010000000197ab4
- (void)addZoomAnimation;	// IMP=0x0010000000197a7e
- (void)removeResetAnimation;	// IMP=0x0010000000197a65
- (void)addResetAnimation;	// IMP=0x0010000000197a51
- (void)addResetAnimationWithDelegate:(id)arg1;	// IMP=0x001000000019766c
- (void)removeRippleAnimation;	// IMP=0x0010000000197653
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2 addPerspectiveProjection:(_Bool)arg3;	// IMP=0x00100000001969f2
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2;	// IMP=0x00100000001969db
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1;	// IMP=0x00100000001969c1
- (void)removeRotateInAnimation;	// IMP=0x00100000001969a8
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;	// IMP=0x001000000019679f
- (void)removeDistortAnimation;	// IMP=0x0010000000196786
- (void)addDistortAnimationWithVector:(struct CGPoint)arg1;	// IMP=0x00100000001962f5
- (void)removePopOutAnimation;	// IMP=0x00100000001962dc
- (void)addPopOutAnimation:(id)arg1;	// IMP=0x001000000019604a
- (_Bool)hasPopInAnimation;	// IMP=0x001000000019602a
- (void)removePopInAnimation;	// IMP=0x0010000000196011
- (void)addPopInAnimation:(id)arg1;	// IMP=0x0010000000195d7f
- (void)removeSproingAnimation;	// IMP=0x0010000000195d66
- (void)addSproingAnimationFromPoint:(struct CGPoint)arg1;	// IMP=0x00100000001958e1
- (void)removeFlipTransitionAnimation;	// IMP=0x00100000001958c8
- (void)addFlipTransitionAnimationToLayer:(id)arg1;	// IMP=0x0010000000195078
- (void)removeDragRotationAnimation;	// IMP=0x001000000019505f
- (void)addDragRotationAnimationWithDelta:(struct CGPoint)arg1;	// IMP=0x0010000000194e02
- (void)removePulseAnimation;	// IMP=0x0010000000194c9d
- (void)addPulseAnimation;	// IMP=0x0010000000194934
- (void)removeWaveAnimation;	// IMP=0x0010000000194920
- (void)removeWaveAnimationAnimated:(_Bool)arg1;	// IMP=0x00100000001945db
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3 addPerspectiveProjection:(_Bool)arg4;	// IMP=0x001000000019387d
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3;	// IMP=0x0010000000193863
- (void)addWaveAnimationWithOffset:(struct CGSize)arg1 zPosition:(double)arg2;	// IMP=0x0010000000193845
- (void)addWaveAnimation;	// IMP=0x0010000000193820
- (void)removeJiggleAnimation;	// IMP=0x0010000000193807
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;	// IMP=0x001000000019344d
- (void)addJiggleAnimation;	// IMP=0x001000000019342b
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;	// IMP=0x00100000001933cd
- (struct CATransform3D)transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint)arg3 parentFrame:(struct CGRect)arg4 animationCache:(id)arg5;	// IMP=0x0010000000191c46
- (void)removeAllAnimationsOnLayerTree;	// IMP=0x0010000000191b08
- (double)durationOfAllAnimations;	// IMP=0x001000000019193b
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize)arg1;	// IMP=0x0010000000191847
- (void)addPerspectiveProjection;	// IMP=0x00100000001916cc
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize)arg1;	// IMP=0x00100000001916ba
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;	// IMP=0x00100000001910c3
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;	// IMP=0x0010000000190cf0
- (void)setIfDifferentFrame:(struct CGRect)arg1 orTransform:(struct CGAffineTransform)arg2;	// IMP=0x0010000000190a4f
- (id)tileContentsLayer;	// IMP=0x00100000001ba093
- (void)setTileContents:(id)arg1;	// IMP=0x00100000001b9f7f
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;	// IMP=0x00100000001b9f4e
- (_Bool)tilingSafeHasContents;	// IMP=0x00100000001b9f35
- (void)tilingSafeSetSublayers:(id)arg1;	// IMP=0x00100000001b9ed8
- (void)setNeedsLayoutForTilingLayers;	// IMP=0x00100000001b9ea7
- (void)p_clearAllLayerDelegates;	// IMP=0x00100000001f2596
@end

