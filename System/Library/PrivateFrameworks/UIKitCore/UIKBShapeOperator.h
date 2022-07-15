//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBShapeOperator : NSObject
{
    double _scale;	// 8 = 0x8
}

+ (id)operatorWithScale:(double)arg1;	// IMP=0x00600000009c6568
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)shapesByInsettingShapes:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000009ca032
- (id)shapesByResizingShapes:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000009c9c14
- (id)shapesByRepositioningShapes:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000009c980b
- (id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2 horizontal:(_Bool)arg3 vertical:(_Bool)arg4;	// IMP=0x00000000009c90bd
- (id)shapesByVerticallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000009c90a3
- (id)shapesByHorizontallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000009c9089
- (id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000009c906c
- (struct CGPoint)offsetForCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000009c8cc2
- (id)shapesByCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x00000000009c8734
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3;	// IMP=0x00000000009c78bf
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000009c6e45
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000009c6ab2
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000009c685f
- (struct CGRect)rectByScalingRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000009c682c
- (struct CGRect)_scaleRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;	// IMP=0x00000000009c6723
- (CDStruct_c3b9c2ee)_scaleRange:(CDStruct_c3b9c2ee)arg1 factor:(double)arg2;	// IMP=0x00000000009c65a5

@end
