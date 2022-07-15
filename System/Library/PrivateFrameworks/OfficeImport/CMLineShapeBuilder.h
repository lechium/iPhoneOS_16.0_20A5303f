//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADStroke;

__attribute__((visibility("hidden")))
@interface CMLineShapeBuilder
{
    OADStroke *_stroke;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000469b48
- (void)_renderLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 withOrientation:(float)arg3 inPath:(struct CGPath *)arg4;	// IMP=0x0000000000148758
- (struct CGRect)_boundingBoxForLineEnd:(id)arg1;	// IMP=0x0000000000148ecd
- (float)_getRotationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 withBounds:(id)arg3;	// IMP=0x00000000001486d9
- (void)_renderBentConnector3InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;	// IMP=0x00000000001d9c18
- (float)_adjustedCoefAtIndex:(int)arg1;	// IMP=0x00000000001d9dd1
- (void)_renderBentConnector2InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;	// IMP=0x00000000001dd60c
- (void)_renderStraightConnector1InPath:(struct CGPath *)arg1 withTransform:(struct CGAffineTransform)arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint *)arg4 headDst:(struct CGPoint *)arg5 tailSrc:(struct CGPoint *)arg6 tailDst:(struct CGPoint *)arg7;	// IMP=0x00000000001485a8
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000148324
- (void)setStroke:(id)arg1;	// IMP=0x0000000000147e44

@end
