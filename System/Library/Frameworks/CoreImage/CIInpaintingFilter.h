//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, InpaintingExecutionContext, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIInpaintingFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMaskImage;	// 80 = 0x50
    CIVector *inputMaskBoundingBox;	// 88 = 0x58
    NSArray *inputFaceBoundingBoxes;	// 96 = 0x60
    NSArray *inputInpaintingProcessingResolutions;	// 104 = 0x68
    NSNumber *inputInpaintingBlendingRadius;	// 112 = 0x70
    NSNumber *inputInpaintingMode;	// 120 = 0x78
    InpaintingExecutionContext *_executionContext;	// 128 = 0x80
}

+ (id)getEspressoResources;	// IMP=0x006000000006c18a
+ (id)customAttributes;	// IMP=0x006000000006afca
@property(readonly) InpaintingExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) NSNumber *inputInpaintingMode; // @synthesize inputInpaintingMode;
@property(retain, nonatomic) NSNumber *inputInpaintingBlendingRadius; // @synthesize inputInpaintingBlendingRadius;
@property(retain, nonatomic) NSArray *inputInpaintingProcessingResolutions; // @synthesize inputInpaintingProcessingResolutions;
@property(retain, nonatomic) NSArray *inputFaceBoundingBoxes; // @synthesize inputFaceBoundingBoxes;
@property(retain, nonatomic) CIVector *inputMaskBoundingBox; // @synthesize inputMaskBoundingBox;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(readonly, getter=getLastExecutionTime) double lastExecutionTime;
@property(readonly, getter=getLastProcessingResolution) int lastProcessingResolution;
- (id)performFullPipelineInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006c0b3
- (id)performMultiresolutionInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006c016
- (id)performTilingPipelineInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006bf79
- (id)performSinglePassInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006bedc
- (struct CGRect)inputMaskBoundingBoxAsValidCGRect;	// IMP=0x000000000006bdf8
- (id)outputImage;	// IMP=0x000000000006b81a
- (id)getSelectedFacesInpaintingModelDescriptor;	// IMP=0x000000000006b80d
- (id)getSelectedGeneralInpaintingModelDescriptor;	// IMP=0x000000000006b800
- (_Bool)shouldFaceSpecificModelBeUsed;	// IMP=0x000000000006b2a2
- (void)dealloc;	// IMP=0x000000000006af5b
- (id)init;	// IMP=0x000000000006aebc

@end
