//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGuidedFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputGuideImage;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputEpsilon;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000b4994
@property(copy) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(copy) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain) CIImage *inputGuideImage; // @synthesize inputGuideImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000b5b08
- (id)computeAB:(id)arg1;	// IMP=0x00000000000b578f
- (id)_swizzleImageYZZ1:(id)arg1;	// IMP=0x00000000000b568f
- (id)_swizzleImageYYZ1:(id)arg1;	// IMP=0x00000000000b558f
- (id)_swizzleImageXXX1:(id)arg1;	// IMP=0x00000000000b548f
- (id)_combineRGB_and_A;	// IMP=0x00000000000b5432
- (id)_finalResult;	// IMP=0x00000000000b53d5
- (id)_computeABKernel;	// IMP=0x00000000000b5379
- (id)subtract:(id)arg1 minus:(id)arg2;	// IMP=0x00000000000b520c
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;	// IMP=0x00000000000b50ed
- (id)_multiplyImagesKernel;	// IMP=0x00000000000b5090
- (id)_boxFilter:(id)arg1 fullFloat:(_Bool)arg2;	// IMP=0x00000000000b4e7a
- (id)_fullFloatBoxFilter;	// IMP=0x00000000000b4e1d
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize)arg2;	// IMP=0x00000000000b4cf6
- (id)_downsampledColorImage:(id)arg1;	// IMP=0x00000000000b4bb6

@end
