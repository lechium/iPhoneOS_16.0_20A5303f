//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationRenderer.h"

@interface AKHeartAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newPathScaledToModelSpaceForAnnotation:(id)arg1;	// IMP=0x008000000008f169
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x008000000008f07e
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x008000000008ef4e
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x008000000008ead8
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;	// IMP=0x008000000008e7c6
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;	// IMP=0x008000000008e71a
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;	// IMP=0x008000000008e60d
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x008000000008e5f7
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x008000000008e47b

@end

