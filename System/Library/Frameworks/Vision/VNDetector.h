//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, VNControlledCapacityTasksQueue, VNMetalContext;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject
{
    struct os_unfair_lock_s _detectorMultiSessionAccessLock;	// 8 = 0x8
    NSDictionary *_configurationOptions;	// 16 = 0x10
    VNMetalContext *_metalContext;	// 24 = 0x18
    unsigned long long _backingStore;	// 32 = 0x20
    VNControlledCapacityTasksQueue *_synchronizationQueue;	// 40 = 0x28
}

+ (id)primaryInferenceNetworkDescriptorForIdentifier:(id)arg1 version:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000625a9
+ (unsigned int)VNClassCode;	// IMP=0x0010000000062573
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006252f
+ (void)runSuccessReportingBlockSynchronously:(CDUnknownBlockType)arg1 detector:(id)arg2 qosClass:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0010000000062334
+ (id)supportedImageSizeSetForEspressoModelWithName:(id)arg1 inputImageBlobName:(id)arg2 analysisPixelFormatType:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0010000000062237
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;	// IMP=0x0010000000062221
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x0010000000061ed6
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0010000000061ea6
+ (id)detectorWithConfigurationOptions:(id)arg1 forSession:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000061d7f
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000061d76
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg1;	// IMP=0x0010000000061cd8
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x0010000000061c77
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x0010000000061b99
+ (id)detectorName;	// IMP=0x00100000000618da
+ (Class)detectorClassForDetectorType:(id)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000617db
+ (Class)detectorClassForDetectorType:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000616ac
+ (_Bool)isReentrant;	// IMP=0x00100000000616a4
+ (id)detectorCropProcessingAsyncTasksQueue;	// IMP=0x0010000000061632
+ (id)detectorCropCreationAsyncTasksQueue;	// IMP=0x00100000000615c0
- (void).cxx_destruct;	// IMP=0x000000000006082f
@property(retain, nonatomic) VNControlledCapacityTasksQueue *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(readonly, nonatomic) unsigned long long backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) VNMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(readonly, copy) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
- (id)inferenceNetworkIdentifiers;	// IMP=0x00000000000607e4
- (void)recordImageCropQuickLookInfoFromOptionsSafe:(id)arg1 toObservation:(id)arg2;	// IMP=0x0000000000060732
- (void)recordImageCropQuickLookInfoToOptionsSafe:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;	// IMP=0x0000000000060657
- (void)recordImageCropQuickLookInfoFromOptions:(id)arg1 toObservation:(id)arg2;	// IMP=0x000000000006055a
- (void)recordImageCropQuickLookInfoToOptions:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;	// IMP=0x000000000006040c
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060309
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x0000000000060301
- (id)requiredCancellerInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006027c
- (_Bool)getOptionalCanceller:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000601f5
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ff08
@property(readonly, nonatomic) unsigned long long signPostAdditionalParameter;
- (_Bool)needsMetalContext;	// IMP=0x000000000005fe65
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fd28
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000005fc23
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000005fb12
- (_Bool)validateImageBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fa49
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000005f5dc
- (_Bool)currentQueueIsSynchronizationQueue;	// IMP=0x000000000005f5bd
- (id)processUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000005f32d
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005f325
- (_Bool)useGPU;	// IMP=0x000000000005f317
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000005f30f
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000005f23a
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005f13f
- (void)dealloc;	// IMP=0x000000000005f0b0
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x000000000005ef50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
