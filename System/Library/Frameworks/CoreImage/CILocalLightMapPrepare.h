//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightMapPrepare : CIFilter
{
    NSData *inputLightMap;	// 72 = 0x48
    NSNumber *inputLightMapWidth;	// 80 = 0x50
    NSNumber *inputLightMapHeight;	// 88 = 0x58
    CIImage *inputGuideImage;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000ec25b
- (id)outputImage;	// IMP=0x00000000000ec435

@end
