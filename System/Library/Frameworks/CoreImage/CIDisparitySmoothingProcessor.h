//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel
{
}

+ (_Bool)synchronizeInputs;	// IMP=0x008000000006fbf3
+ (_Bool)outputIsOpaque;	// IMP=0x008000000006fbeb
+ (int)outputFormat;	// IMP=0x008000000006fbdc
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000006fbd4
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000006fb9d
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000006f961
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x008000000006f8e1
+ (void)releasePipelines;	// IMP=0x008000000006f8be
+ (void)compilePipelines:(id)arg1;	// IMP=0x008000000006f7de
+ (_Bool)hasValidPipelines;	// IMP=0x008000000006f7cd

@end
