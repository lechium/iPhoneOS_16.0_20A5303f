//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AEVConversionUtils : NSObject
{
}

+ (struct CGImage *)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;	// IMP=0x0080000000043afb
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x0080000000043a9e
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1;	// IMP=0x0080000000043a80
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x00800000000438cc
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x00800000000436f6
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;	// IMP=0x00800000000434e1

@end

