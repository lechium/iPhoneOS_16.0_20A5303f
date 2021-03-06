//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBackgroundImage;	// 80 = 0x50
    CIImage *inputMaskImage;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0060000000018a5f
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000018c2a
- (float)_maskFillColorValue;	// IMP=0x0000000000018ba0
- (id)_kernelB0;	// IMP=0x0000000000018b80
- (id)_kernel;	// IMP=0x0000000000018b60

@end

