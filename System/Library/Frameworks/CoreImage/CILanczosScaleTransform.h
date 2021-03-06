//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputAspectRatio;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000000e566e
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e52fc
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000e497b
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000e2da1
- (_Bool)_isIdentity;	// IMP=0x00000000000e2d42

@end

