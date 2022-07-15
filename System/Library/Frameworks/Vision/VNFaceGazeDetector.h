//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceGazeDetector
{
    struct shared_ptr<vision::mod::CamGazePredictor> _gazePredictor;	// 16 = 0x10
    struct shared_ptr<vision::mod::GazeFollowPredictor> _gazeFollowPredictor;	// 32 = 0x20
}

+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002987ad
- (id).cxx_construct;	// IMP=0x000000000029674f
- (void).cxx_destruct;	// IMP=0x00000000002966d4
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000294ec5
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000294c9d
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000293f4e

@end
