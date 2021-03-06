//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightShadowAdjust : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputShadowAmount;	// 88 = 0x58
    NSNumber *inputHighlightAmount;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00100000000b6f7f
@property(retain, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount;
@property(retain, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x00000000000b7d6d
- (id)_outputProperties;	// IMP=0x00000000000b7be7
- (id)outputImage;	// IMP=0x00000000000b74f5
- (id)_kernelSnoB_v0;	// IMP=0x00000000000b74d5
- (id)_kernelSHnoB_v0;	// IMP=0x00000000000b74b5
- (id)_kernelSH_v0;	// IMP=0x00000000000b7495
- (id)_kernelSHnoB_v1;	// IMP=0x00000000000b7475
- (id)_kernelSH_v1;	// IMP=0x00000000000b7455
- (id)_kernelSHnoB_v2;	// IMP=0x00000000000b7435
- (id)_kernelSH_v2;	// IMP=0x00000000000b7415
- (_Bool)_isIdentity;	// IMP=0x00000000000b737e
- (void)setDefaults;	// IMP=0x00000000000b7301
- (int)_defaultVersion;	// IMP=0x00000000000b72f6
- (int)_maxVersion;	// IMP=0x00000000000b72eb

@end

