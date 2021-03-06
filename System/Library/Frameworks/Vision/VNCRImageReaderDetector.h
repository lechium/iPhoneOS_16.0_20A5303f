//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRImageReader;

__attribute__((visibility("hidden")))
@interface VNCRImageReaderDetector
{
    CRImageReader *_imageReader;	// 16 = 0x10
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000004df46
+ (id)supportedLanguagesForProcessOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000004ddbc
+ (id)imageReaderRecognitionOptionsForProcessOptions:(id)arg1;	// IMP=0x006000000004dd04
+ (id)_imageReaderInitializationOptionsForCreationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000004d87a
- (void).cxx_destruct;	// IMP=0x000000000004f719
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000004effb
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000004ec60
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ebbb
- (id)_observationsForImageReaderOutput:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004e330
- (id)newImageReaderAndReturnError:(id *)arg1;	// IMP=0x000000000004e1dc
- (_Bool)isCRImageReaderViableAfterError:(id)arg1;	// IMP=0x000000000004e142
- (void)setCachedImageReader:(id)arg1;	// IMP=0x000000000004e12e
- (id)cachedImageReader;	// IMP=0x000000000004e119

@end

