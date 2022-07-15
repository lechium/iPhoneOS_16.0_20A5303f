//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBezierPath.h>

@class NSMutableArray;

@interface UIBezierPath (Utilities)
+ (id)mapPaths:(id)arg1 toQuads:(id)arg2;	// IMP=0x002000000008911f
+ (double)radiusForQuads:(id)arg1 radiusRatio:(double)arg2;	// IMP=0x0020000000088f1a
+ (id)vk_roundAndGroupNormalizedQuadsForHighlight:(id)arg1 aspectRatio:(double)arg2 expansionScale:(double)arg3 radiusToAvgHeightRatio:(double)arg4;	// IMP=0x00200000000882d6
+ (struct CGPoint)vk_projectPoint:(struct CGPoint)arg1 lineStart:(struct CGPoint)arg2 lineEnd:(struct CGPoint)arg3;	// IMP=0x0020000000088156
+ (struct CGPoint)vk_calculateCenterForPoints:(struct CGPoint)arg1 p2:(struct CGPoint)arg2 p3:(struct CGPoint)arg3 radius:(double)arg4;	// IMP=0x0020000000087f27
+ (double)vk_signForRadiusWithVectorStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 otherPoint:(struct CGPoint)arg3;	// IMP=0x0020000000087eb1
+ (double)vk_clampedRadius:(double)arg1 p1:(struct CGPoint)arg2 p2:(struct CGPoint)arg3 p3:(struct CGPoint)arg4;	// IMP=0x0020000000087d89
+ (id)vk_shiftLinePerpendicularlyFromPoint:(struct CGPoint)arg1 to:(struct CGPoint)arg2 radius:(double)arg3;	// IMP=0x0020000000087c76
+ (void)_processPointsForRounding:(id)arg1 withRadius:(double)arg2;	// IMP=0x002000000008788c
+ (void)_processPointsForNarrowAngles:(id)arg1;	// IMP=0x0020000000087606
+ (const struct CGPath *)vk_newRoundedPathWithRadius:(double)arg1 points:(id)arg2;	// IMP=0x002000000008705e
+ (struct CGPath *)_cgPathFromClipperPath:(void *)arg1;	// IMP=0x0020000000086fb5
+ (_Bool)vk_cgPathcontainsAnyCurveToPoints:(struct CGPath *)arg1;	// IMP=0x0020000000086ee8
+ (id)vk_groupAndRoundPaths:(id)arg1 radius:(double)arg2 offset:(double)arg3;	// IMP=0x0020000000086618
+ (id)vk_subpathArrayFromCGPath:(struct CGPath *)arg1;	// IMP=0x0020000000085d30
+ (id)vk_pathFromCGPath:(struct CGPath *)arg1;	// IMP=0x00200000000858ca
+ (id)vk_allPointsFromCGPath:(struct CGPath *)arg1;	// IMP=0x0020000000085681
- (id)vk_expandWithOffset:(double)arg1;	// IMP=0x0010000000086482
- (id)_vk_flattenWithPath:(id)arg1 clipType:(int)arg2;	// IMP=0x00100000000860e6
- (id)vk_intersectAndFlattenWithPath:(id)arg1;	// IMP=0x00100000000860c2
- (id)vk_unionAndFlattenWithPath:(id)arg1;	// IMP=0x001000000008609b
- (id)vk_subpathArray;	// IMP=0x0010000000085ceb
- (id)debugQuickLookObject;	// IMP=0x0010000000085bd4
- (id)vk_pathFromFlippingInRect:(struct CGRect)arg1;	// IMP=0x00100000000858ee
- (void)vk_applyTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000000858dc
@property(readonly, nonatomic) NSMutableArray *vk_allPoints;
@property(readonly, nonatomic) double vk_lengthIgnoringCurves;
@property(readonly, nonatomic) struct CGPoint vk_centroid;
- (void)vk_appendBezierPath:(id)arg1;	// IMP=0x00100000000850c1
- (void)vk_addCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;	// IMP=0x00100000000850ac
- (void)vk_addLineToPoint:(struct CGPoint)arg1;	// IMP=0x001000000008509a
@property(readonly, nonatomic) const struct CGPath *vk_CGPath;
@end
