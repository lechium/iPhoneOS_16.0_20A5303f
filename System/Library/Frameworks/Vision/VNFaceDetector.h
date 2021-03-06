//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceDetector
{
}

+ (_Bool)calculateTilesForRegionOfInterest:(struct CGRect)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 tileSizeInPixels:(unsigned long long)arg4 overlapFraction:(float)arg5 aspectRatioThreshold:(float)arg6 columns:(unsigned long long *)arg7 rows:(unsigned long long *)arg8 tiles:(void *)arg9 error:(id *)arg10;	// IMP=0x00100000001a3176
+ (void)printDebugInfo:(id)arg1 facesDataRaw:(void *)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;	// IMP=0x00100000001a2566
+ (_Bool)shouldDumpDebugIntermediates;	// IMP=0x00100000001a253b
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a23e2
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x00100000001a2298
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00100000001a2219
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00100000001a21b6
- (void)purgeIntermediates;	// IMP=0x00000000001a47ee
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001a39f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

