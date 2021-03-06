//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceExpressionDetector
{
    struct shared_ptr<vision::mod::LandmarkAttributes> m_FaceAttributesImpl;	// 16 = 0x10
    _Bool _modelFilesWereMemmapped;	// 32 = 0x20
}

+ (id)createExpressionDetectionDictionaryFromScores:(id)arg1;	// IMP=0x00600000000c3adc
+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1;	// IMP=0x00600000000c350d
+ (int)expressionTypeFromString:(id)arg1;	// IMP=0x00600000000c341d
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000000c33ba
- (id).cxx_construct;	// IMP=0x00000000000c4a82
- (void).cxx_destruct;	// IMP=0x00000000000c4a71
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000c43c5
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c43bd
- (void)dealloc;	// IMP=0x00000000000c42ca
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c41ae

@end

