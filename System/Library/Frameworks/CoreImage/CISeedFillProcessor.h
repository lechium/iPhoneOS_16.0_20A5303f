//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CISeedFillProcessor : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000007b355
+ (_Bool)allowPartialOutputRegion;	// IMP=0x008000000007b34d
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000007b32a
+ (_Bool)canReduceOutputChannels;	// IMP=0x008000000007b322
+ (int)outputFormat;	// IMP=0x008000000007b313
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000007adb7

@end

