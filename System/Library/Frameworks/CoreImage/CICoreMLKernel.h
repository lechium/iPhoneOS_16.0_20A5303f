//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CICoreMLKernel : CIImageProcessorKernel
{
}

+ (int)outputFormat;	// IMP=0x008000000005d521
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000005d512
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000005d005
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000005cf50

@end
