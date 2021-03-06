//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCIContrastFromAverageColorFilter, VNCIContrastWithPivotColorFilter, VNProcessingDevice;

__attribute__((visibility("hidden")))
@interface VNContoursDetector
{
    VNProcessingDevice *_processingDevice;	// 16 = 0x10
    VNCIContrastFromAverageColorFilter *_ciContrastFromAvgFilter;	// 24 = 0x18
    VNCIContrastWithPivotColorFilter *_ciContrastWithPivotFilter;	// 32 = 0x20
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000162109
- (void).cxx_destruct;	// IMP=0x000000000016346c
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000162724
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001623ba
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016222c

@end

