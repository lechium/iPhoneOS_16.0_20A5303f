//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIFileSaverProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x00800000000d2cb0
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x00800000000d2ca8
+ (_Bool)canReduceOutputChannels;	// IMP=0x00800000000d2ca0
+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000000d2c98
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000d2c90
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000d2c78
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000d2a55

@end
