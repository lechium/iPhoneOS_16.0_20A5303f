//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApply : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputLensModelParams;	// 80 = 0x50
}

@property(retain, nonatomic) CIImage *inputLensModelParams; // @synthesize inputLensModelParams;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e898f
- (id)kernel;	// IMP=0x00000000000e8915

@end

