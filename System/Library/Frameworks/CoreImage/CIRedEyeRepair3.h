//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol RedEyeInspector3;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair3 : NSObject
{
    id <RedEyeInspector3> inspector;	// 8 = 0x8
    CDStruct_c3faddef fullBitmap;	// 16 = 0x10
    CDStruct_5973fb4f subRectangle;	// 56 = 0x38
    CDStruct_7286a259 FC;	// 72 = 0x48
    NSArray *faceArray;	// 448 = 0x1c0
    CDStruct_c3faddef faceBitmap;	// 456 = 0x1c8
    CDStruct_242bf05f S;	// 496 = 0x1f0
    struct {
        int width;
        int height;
        struct CGAffineTransform T;
        struct CGAffineTransform Tp;
        CDStruct_c3faddef O;
        CDStruct_c3faddef OO;
        _Bool computeEyePolygon;
        CDStruct_c3faddef EP;
        _Bool maskRender;
        CDStruct_c3faddef D;
        _Bool computeGradient;
        CDStruct_c3faddef G;
        CDStruct_c3faddef M;
        _Bool computeShine;
        CDStruct_c3faddef S;
        CDStruct_c3faddef P;
    } PB;	// 680 = 0x2a8
    CDStruct_ea27cb70 G;	// 1136 = 0x470
    CDStruct_3882bc9d M;	// 1216 = 0x4c0
    CDStruct_fc6961d5 FS;	// 1240 = 0x4d8
    int printFaceArrayLevel;	// 1256 = 0x4e8
    struct CGRect ROIRect;	// 1264 = 0x4f0
    float avgLuminance;	// 1296 = 0x510
    float minLuminance;	// 1300 = 0x514
    float maxLuminance;	// 1304 = 0x518
    float skinval;	// 1308 = 0x51c
    int ioffx;	// 1312 = 0x520
    int ioffy;	// 1316 = 0x524
    int erError;	// 1320 = 0x528
    NSMutableArray *repairs;	// 1328 = 0x530
    CDStruct_5973fb4f repairRect;	// 1336 = 0x538
    CDStruct_c3faddef repairMap;	// 1352 = 0x548
    NSMutableArray *failureCauses;	// 1392 = 0x570
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;	// IMP=0x0060000000137859
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x0060000000137719
+ (CDStruct_242bf05f)settingsWithOptions:(id)arg1;	// IMP=0x0060000000132fdf
+ (int)faceContext:(CDStruct_7286a259 *)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(CDStruct_242bf05f *)arg4;	// IMP=0x0060000000132d89
+ (int)bitmapRect:(CDStruct_a734b2e2 *)arg1 point:(struct CGPoint *)arg2 polygon:(struct CGPoint [8])arg3 andDistMatrix:(float [4])arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(CDStruct_242bf05f *)arg7;	// IMP=0x0060000000132279
+ (float)yawAngleWithFaceDictionary:(id)arg1;	// IMP=0x0060000000131ef1
+ (CDStruct_a734b2e2)bitmapRectWithImageSubRectangle:(struct CGRect)arg1 settings:(CDStruct_242bf05f *)arg2;	// IMP=0x0060000000131e8b
+ (void)insertIntoThreadHopper:(CDStruct_b443dc70 *)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8;	// IMP=0x00600000001d7aa3
+ (void)insertIntoConnectionHopper:(CDStruct_ccbddcce *)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6;	// IMP=0x00600000001d36e4
- (void)executeRepair:(id)arg1;	// IMP=0x0000000000139b7c
- (id)stringWithRER3Error:(int)arg1;	// IMP=0x0000000000139b40
- (id)repairArray;	// IMP=0x0000000000139b1f
- (int)transformRepairArray:(struct CGAffineTransform)arg1;	// IMP=0x0000000000139826
- (void)transformConvexHull:(CDStruct_d01ad076 *)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000000013978f
- (void)transformGlobalsWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000139250
- (struct CGPoint)leftHandedTransform:(struct CGAffineTransform)arg1 ofPoint:(struct CGPoint)arg2;	// IMP=0x00000000001391d1
- (id)mutableCopyOfArray:(id)arg1;	// IMP=0x00000000001390b6
- (id)repairWithSide:(int)arg1;	// IMP=0x0000000000138ee9
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x000000000013855e
- (void)printFaceArray;	// IMP=0x0000000000137be3
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;	// IMP=0x0000000000137a04
- (void)dealloc;	// IMP=0x00000000001376a4
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;	// IMP=0x0000000000137533
- (_Bool)openRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x000000000013739e
- (_Bool)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x0000000000136304
- (int)packGlobalRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x000000000013528e
- (int)saveRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x00000000001341f2
- (id)dictionaryRectArrayWithGlobalBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x00000000001340cf
- (id)dictionaryRectArrayWithBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x0000000000133f9c
- (CDStruct_a734b2e2)globalBitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x0000000000133e8c
- (CDStruct_a734b2e2)bitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x0000000000133d5a
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000133ca5
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000133bcd
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000133ad6
- (struct CGPoint)dictionaryPointWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000133aa4
- (struct CGPoint)dictionaryPointWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000133a49
- (struct CGPoint)globalBitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x00000000001339bb
- (struct CGPoint)bitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x000000000013390b
- (struct CGPoint)globalBitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x00000000001338cc
- (struct CGPoint)bitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x000000000013387d
- (CDStruct_a734b2e2)repairRect;	// IMP=0x0000000000133869
- (CDStruct_c3faddef *)repairMap;	// IMP=0x000000000013385c
- (void)repairExternalBuffer;	// IMP=0x0000000000133564
- (int)updateWithFaceIndex:(int)arg1;	// IMP=0x00000000001334ac
- (void)setInspector:(id)arg1;	// IMP=0x0000000000131e81
- (_Bool)isBlurryWithFocusStats:(CDStruct_fc6961d5)arg1;	// IMP=0x00000000001dd51d
- (CDStruct_fc6961d5)focusStatsWithBitmap:(CDStruct_c3faddef *)arg1 IOD:(float)arg2;	// IMP=0x00000000001dd1f5
- (_Bool)gatherFaceStatistics:(CDStruct_3882bc9d *)arg1;	// IMP=0x00000000001dcef3
- (int)executeRepairWithRepairDictionary:(id)arg1;	// IMP=0x00000000001dcc11
- (int)repairDictionary:(id *)arg1 withEyeIndex:(int)arg2;	// IMP=0x00000000001dc8f5
- (int)prepareMasksWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001db194
- (double)next12BitRandom;	// IMP=0x00000000001db16d
- (void)start12BitRandom:(int)arg1;	// IMP=0x00000000001db161
- (int)prepareBitmapsWithString:(char *)arg1;	// IMP=0x00000000001da0a8
- (int)renderEyePolygonToBitmap:(CDStruct_c3faddef *)arg1;	// IMP=0x00000000001d9e11
- (int)prepareTransformWithEyeIndex:(int)arg1;	// IMP=0x00000000001d9af4
- (int)prominenceConvexHull:(CDStruct_183601bc **)arg1 facts:(CDStruct_73443751 *)arg2;	// IMP=0x00000000001d8ab4
- (CDStruct_818bb265)RGBtoHSV:(CDStruct_818bb265)arg1;	// IMP=0x00000000001d890d
- (int)recognizeThreadsWinningThreadIndex:(int *)arg1 info:(CDStruct_818bb265 *)arg2;	// IMP=0x00000000001d7cbf
- (void)swapHopperElement:(CDStruct_c952897d *)arg1 withElement:(CDStruct_c952897d *)arg2;	// IMP=0x00000000001d7c03
- (_Bool)hopperElement:(CDStruct_c952897d *)arg1 isMoreScleraThanElement:(CDStruct_c952897d *)arg2;	// IMP=0x00000000001d7b89
- (int)color:(CDStruct_818bb265 *)arg1 underConvexHull:(CDStruct_d01ad076 *)arg2 saturated:(CDStruct_818bb265 *)arg3;	// IMP=0x00000000001d77da
- (float)threadSignedArea:(CDStruct_ed92ceb9 *)arg1 centroid:(struct CGPoint)arg2;	// IMP=0x00000000001d76f3
- (struct CGPoint)threadCentroid:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x00000000001d766d
- (int)attemptClosureOfThreadIndex:(int)arg1;	// IMP=0x00000000001d70a4
- (int)closeThreadIndex:(int)arg1 usingVectorField:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001d6d68
- (int)shape:(CDStruct_183601bc **)arg1 withThreadAtIndex:(int)arg2 centroid:(struct CGPoint)arg3;	// IMP=0x00000000001d6a13
- (int)improvedShape:(CDStruct_183601bc **)arg1 withShape:(CDStruct_892ad059 *)arg2;	// IMP=0x00000000001d61c5
- (int)newShape:(CDStruct_183601bc **)arg1 byInterpolatingBetweenCheckpoints:(CDStruct_e958be04 [100])arg2 nc:(int)arg3 usingVectorField:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000001d5a98
- (int)updatedCheckpoint:(struct CGPoint *)arg1 withCheckpoint:(struct CGPoint)arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(CDStruct_c3faddef *)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float *)arg9;	// IMP=0x00000000001d4e3b
- (void)slidingWindowAnalysisOfShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_04c5c26d *)arg2;	// IMP=0x00000000001d4c29
- (void)removeSpikesFromShape:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001d4974
- (void)removeSmallBumpsFromShape:(CDStruct_892ad059 *)arg1 center:(struct CGPoint)arg2 threshold:(float)arg3;	// IMP=0x00000000001d457a
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001d441f
- (void)removeRedundantPointsFromShape:(CDStruct_892ad059 *)arg1 closerThan:(float)arg2;	// IMP=0x00000000001d435e
- (void)termBitmaps;	// IMP=0x00000000001d428c
- (void)initBitmaps;	// IMP=0x00000000001d423d
- (int)connectThreadsInGrid;	// IMP=0x00000000001d3c05
- (int)findThreadsInGrid;	// IMP=0x00000000001d3acc
- (int)gatherThreadInfo:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x00000000001d3940
- (void)printThreadsOnlyClosed:(_Bool)arg1 message:(char *)arg2;	// IMP=0x00000000001d38a8
- (void)printThreadWithIndex:(int)arg1;	// IMP=0x00000000001d37f3
- (void)printConnectionHopper:(CDStruct_ccbddcce *)arg1 message:(char *)arg2;	// IMP=0x00000000001d3787
- (_Bool)edgePoint:(struct CGPoint *)arg1 withBitmap:(CDStruct_c3faddef *)arg2 center:(struct CGPoint)arg3 perp:(struct CGPoint)arg4;	// IMP=0x00000000001d30b4
- (int)analyzeMask:(CDStruct_c3faddef *)arg1 usingConvexHull:(CDStruct_d01ad076 *)arg2 producingOptimizedMask:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001d233a
- (struct CGPoint)centroidWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d2218
- (int)renderConvexHull:(CDStruct_d01ad076 *)arg1 distance:(float)arg2 fieldToBitmap:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001d1963
- (int)widenedHull:(CDStruct_183601bc **)arg1 withHull:(CDStruct_d01ad076 *)arg2 by:(float)arg3;	// IMP=0x00000000001d169c
- (int)renderHull:(CDStruct_d01ad076 *)arg1 toBitmap:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001d1461
- (void)measureHull:(CDStruct_d01ad076 *)arg1 majorAxis:(struct CGPoint *)arg2 majorTo:(struct CGPoint *)arg3 majorDiameter:(float *)arg4 minorAxis:(struct CGPoint *)arg5 minorTo:(struct CGPoint *)arg6 minorDiameter:(float *)arg7;	// IMP=0x00000000001d1130
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 shape:(CDStruct_892ad059 *)arg3;	// IMP=0x00000000001d1017
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 threadIndex:(int)arg3;	// IMP=0x00000000001d0e6c
- (_Bool)isConvex:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d0d2b
- (_Bool)trimStartPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d0c98
- (_Bool)trimEndPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d0c33
- (_Bool)trimConcaveFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d0bbe
- (int)addPoint:(struct CGPoint)arg1 toHull:(CDStruct_d01ad076 *)arg2;	// IMP=0x00000000001d0b17
- (void)termHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001d0af7
- (int)initHull:(CDStruct_183601bc **)arg1 withOrientation:(_Bool)arg2;	// IMP=0x00000000001d0a7f
- (void)regressionWithPointIndex:(int)arg1;	// IMP=0x00000000001d07bd
- (int)nextPointIndexWithPointIndex:(int)arg1;	// IMP=0x00000000001d0655
- (int)copyGridInto:(CDStruct_ea27cb70 *)arg1 transform:(struct CGAffineTransform)arg2 height:(int)arg3;	// IMP=0x00000000001d0283
- (int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2;	// IMP=0x00000000001d01c5
- (int)replacePointAndDirection:(int)arg1;	// IMP=0x00000000001d00e3
- (void)forAllGridThreadsNear:(struct CGPoint)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x00000000001cff55
- (void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x00000000001cfdce
- (int)lookForPoint:(struct CGPoint *)arg1 onLine:(CDStruct_12b04d25)arg2 nearestPoint:(struct CGPoint)arg3;	// IMP=0x00000000001cfcf4
- (void)removeThreadAtIndex:(int)arg1;	// IMP=0x00000000001cfc12
- (void)putThreadAtIndex:(int)arg1;	// IMP=0x00000000001cfb4a
- (int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4;	// IMP=0x00000000001cfa3c
- (int)newShape:(CDStruct_183601bc **)arg1;	// IMP=0x00000000001cf992
- (int)newThread:(CDStruct_183601bc **)arg1;	// IMP=0x00000000001cf8df
- (int)insertPoint:(struct CGPoint)arg1 andDirection:(struct CGPoint)arg2 intoGrid:(_Bool)arg3;	// IMP=0x00000000001cf744
- (void)point:(struct CGPoint)arg1 toGridRow:(int *)arg2 column:(int *)arg3;	// IMP=0x00000000001cf6a4
- (void)termGrid;	// IMP=0x00000000001cf603
- (_Bool)initGridWithBitmap:(CDStruct_c3faddef *)arg1 scale:(int)arg2;	// IMP=0x00000000001cf436
- (int)copyShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_892ad059 *)arg2 transform:(struct CGAffineTransform)arg3 height:(int)arg4;	// IMP=0x00000000001cf366
- (void)termShapePoints:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001cf347
- (int)addPoint:(struct CGPoint)arg1 toShapePoints:(CDStruct_892ad059 *)arg2;	// IMP=0x00000000001cf308
- (int)initShapePoints:(CDStruct_892ad059 *)arg1 withMaxPoints:(int)arg2;	// IMP=0x00000000001cf2ca
- (void)condenseFourChannelRecognitionMap:(CDStruct_c3faddef *)arg1 intoOneChanneMap:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001cf252
- (void)magnitudeMap:(CDStruct_c3faddef *)arg1 fromGabor:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001cf1d0

@end
