//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIFaceMaskKernel : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x0080000000095683
+ (_Bool)synchronizeInputs;	// IMP=0x008000000009567b
+ (int)outputFormat;	// IMP=0x008000000009566c
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000009565d
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000094a6e
+ (void)allocateBuffersIfNeeded:(id)arg1;	// IMP=0x00800000000949ee
+ (void)releaseBuffers;	// IMP=0x00800000000949cb
+ (void)allocateBuffers:(id)arg1;	// IMP=0x00800000000949a7
+ (_Bool)hasValidBuffers;	// IMP=0x0080000000094996
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x0080000000094916
+ (void)releasePipelines;	// IMP=0x00800000000948dc
+ (void)compilePipelines:(id)arg1;	// IMP=0x0080000000094762
+ (_Bool)hasValidPipelines;	// IMP=0x0080000000094744

@end
