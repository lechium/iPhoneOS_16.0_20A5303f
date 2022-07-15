//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject
{
}

+ (int)radToFixedPointDeg:(double)arg1;	// IMP=0x008000000046a301
+ (double)fixedPointDegToRad:(int)arg1;	// IMP=0x008000000046a2ef
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize)arg2;	// IMP=0x00800000001eac0a
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(_Bool)arg2 nodeSize:(struct CGSize)arg3;	// IMP=0x008000000022df80
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0080000000162efc
+ (double)mapFormulaOfType:(int)arg1 argValues:(double *)arg2 isEscher:(_Bool)arg3;	// IMP=0x0080000000163389
+ (double)mapAdjustCoord:(struct OADAdjustCoord)arg1 geometry:(id)arg2;	// IMP=0x0080000000157686
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;	// IMP=0x0080000000227392
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;	// IMP=0x00800000001e94a4
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect)arg2;	// IMP=0x00800000001eac9d
+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;	// IMP=0x00800000001e9199
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;	// IMP=0x0080000000469fea
+ (id)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;	// IMP=0x008000000010b8a3
+ (struct CGRect)transformRect:(struct CGRect)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;	// IMP=0x0080000000218375
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;	// IMP=0x008000000010bc90
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize)arg2;	// IMP=0x00800000001dd599
+ (_Bool)isShapeALine:(id)arg1;	// IMP=0x0080000000157da5
+ (int)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2;	// IMP=0x008000000016320f
+ (float)normalizedAngle:(float)arg1;	// IMP=0x008000000022e333
+ (int)radToMilliMinutes:(double)arg1;	// IMP=0x008000000046a359
+ (double)milliMinutesToRad:(int)arg1;	// IMP=0x00800000001dd5f7
+ (int)radToNativeAngle:(double)arg1 isEscher:(_Bool)arg2;	// IMP=0x008000000046a335
+ (double)nativeAngleToRad:(int)arg1 isEscher:(_Bool)arg2;	// IMP=0x00800000001dd5d3

@end
