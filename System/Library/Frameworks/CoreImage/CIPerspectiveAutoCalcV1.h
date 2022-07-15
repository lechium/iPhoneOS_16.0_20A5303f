//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalcV1
{
    struct float3x3 K;	// 144 = 0x90
    struct float3x3 invK;	// 192 = 0xc0
    struct float3x3 T;	// 240 = 0xf0
    struct float3x3 invT;	// 288 = 0x120
    CIImage *gradMap;	// 336 = 0x150
    unsigned long long gradMapW;	// 344 = 0x158
    unsigned long long gradMapH;	// 352 = 0x160
    MISSING_TYPE **gradMapBmp;	// 360 = 0x168
    unsigned long long gradMapRb;	// 368 = 0x170
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vLines;	// 376 = 0x178
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hLines;	// 400 = 0x190
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> vLineCluster;	// 424 = 0x1a8
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> hLineCluster;	// 448 = 0x1c0
    _Bool vGuidesValid;	// 472 = 0x1d8
    _Bool hGuidesValid;	// 473 = 0x1d9
    float vGuidesAOE;	// 476 = 0x1dc
    float hGuidesAOE;	// 480 = 0x1e0
    CDStruct_ec37f00f vGuide0;	// 488 = 0x1e8
    CDStruct_ec37f00f vGuide1;	// 504 = 0x1f8
    CDStruct_ec37f00f hGuide0;	// 520 = 0x208
    CDStruct_ec37f00f hGuide1;	// 536 = 0x218
    struct PseudoRand pseudoRando;	// 552 = 0x228
    float rX;	// 560 = 0x230
    float rY;	// 564 = 0x234
    float rZ;	// 568 = 0x238
    float pitchCorrectionAreaCoverage;	// 572 = 0x23c
    float yawCorrectionAreaCoverage;	// 576 = 0x240
    double minimumPitchCorrectionAreaCoverage;	// 584 = 0x248
    double minimumYawCorrectionAreaCoverage;	// 592 = 0x250
}

- (id).cxx_construct;	// IMP=0x00000000001863d5
- (void).cxx_destruct;	// IMP=0x0000000000186357
@property(readonly) float yawCorrectionAreaCoverage; // @synthesize yawCorrectionAreaCoverage;
@property(readonly) float pitchCorrectionAreaCoverage; // @synthesize pitchCorrectionAreaCoverage;
@property double minimumYawCorrectionAreaCoverage; // @synthesize minimumYawCorrectionAreaCoverage;
@property double minimumPitchCorrectionAreaCoverage; // @synthesize minimumPitchCorrectionAreaCoverage;
- (void)computeTransform;	// IMP=0x000000000018529b
- (void)computeGuides;	// IMP=0x0000000000184706
- (void)clusterLineSegments;	// IMP=0x00000000001830f2
- (void)extractLineSegments;	// IMP=0x0000000000182aec
- (void)rangeLimitGradientMap;	// IMP=0x0000000000182847
- (void)thresholdGradientMap;	// IMP=0x000000000018266e
- (void)normalizeGradientMap;	// IMP=0x000000000018230c
- (void)createGradientMap;	// IMP=0x0000000000181fda
- (void)standardizeImage;	// IMP=0x0000000000181d7a
- (double)confidence;	// IMP=0x0000000000181cf5
- (_Bool)compute;	// IMP=0x000000000018148e
- (void)dealloc;	// IMP=0x000000000018144d
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;	// IMP=0x0000000000181256

@end
