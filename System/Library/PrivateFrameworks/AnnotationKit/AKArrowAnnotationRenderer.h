//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationRenderer.h"

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newLinePathForArrow:(id)arg1 withHeads:(_Bool)arg2 fromBezierParameter:(double)arg3 toBezierParameter:(double)arg4 optionalPageController:(id)arg5 optionalContext:(struct CGContext *)arg6;	// IMP=0x00800000000d11b1
+ (void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(struct CGPoint *)arg2 outBezierStartParameter:(double *)arg3 outEndIntersection:(struct CGPoint *)arg4 outBezierEndParameter:(double *)arg5;	// IMP=0x00800000000d0e97
+ (struct CGPoint)_cubicBezierPointForParameter:(double)arg1 start:(struct CGPoint)arg2 controlPt1:(struct CGPoint)arg3 controlPt2:(struct CGPoint)arg4 end:(struct CGPoint)arg5;	// IMP=0x00800000000d0e1a
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5;	// IMP=0x00800000000d0da8
+ (void)_controlPointsForArrow:(id)arg1 outControlPoint1:(struct CGPoint *)arg2 outControlPoint2:(struct CGPoint *)arg3;	// IMP=0x00800000000d0bce
+ (void)_arrowHeadPathsForArrow:(id)arg1 inOutStartArrowHead:(struct CGPath *)arg2 outBezierStartParameter:(double *)arg3 inOutEndArrowHead:(struct CGPath *)arg4 outBezierEndParameter:(double *)arg5;	// IMP=0x00800000000d08cb
+ (unsigned long long)_drawableArrowHeads:(id)arg1;	// IMP=0x00800000000d06b1
+ (void)_drawPathForArrow:(id)arg1 inContext:(struct CGContext *)arg2 inPath:(struct CGPath *)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5;	// IMP=0x00800000000d0143
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x00800000000d00cd
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x00800000000d0042
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x00800000000cfb6b
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;	// IMP=0x00800000000cfb63
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;	// IMP=0x00800000000cf073
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x00800000000cf05d
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x00800000000ced84

@end

