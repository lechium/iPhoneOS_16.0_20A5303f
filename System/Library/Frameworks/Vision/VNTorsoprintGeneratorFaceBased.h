//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNTorsoprintGeneratorFaceBased
{
}

+ (float)magnifiedBBoxScaleFactor;	// IMP=0x00800000002a1972
+ (float)minimumTorsoInsideInputImageThreshold;	// IMP=0x00800000002a1964
+ (struct CGSize)torsoprintDescriptorSize;	// IMP=0x00800000002a194e
+ (struct CGSize)torsoprintInputImageSizeForFaceOrientation:(int)arg1;	// IMP=0x00800000002a1928
- (_Bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect)arg1 insideImageWithSize:(struct CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect *)arg4 error:(id *)arg5;	// IMP=0x00000000002a14fe
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002a135c
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002a1034
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002a0ae1
- (id)torsoprintForImageBuffer:(struct __CVBuffer *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002a0ad9

@end

