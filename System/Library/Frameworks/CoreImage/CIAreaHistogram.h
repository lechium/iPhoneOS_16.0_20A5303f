//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaHistogram : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputExtent;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
    NSNumber *inputCount;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x006000000000ef1e
@property(retain, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000001054f
- (id)outputImageNonMPS;	// IMP=0x000000000000f8e2
- (id)outputData;	// IMP=0x000000000000f3ea
- (_Bool)_inputsAreOK;	// IMP=0x000000000000f33f
- (struct IRect)_netExtent;	// IMP=0x000000000000f182

@end
