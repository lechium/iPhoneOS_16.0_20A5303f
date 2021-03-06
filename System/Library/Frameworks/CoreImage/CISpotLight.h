//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISpotLight : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputLightPosition;	// 80 = 0x50
    CIVector *inputLightPointsAt;	// 88 = 0x58
    NSNumber *inputBrightness;	// 96 = 0x60
    NSNumber *inputConcentration;	// 104 = 0x68
    CIColor *inputColor;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x006000000016a7ab
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000016a4a4
- (id)_CISpotLight;	// IMP=0x000000000016a484

@end

