//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x0060000000171878
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000171743
- (_Bool)_isIdentity;	// IMP=0x0000000000171668
- (id)_kernel;	// IMP=0x0000000000171648

@end
