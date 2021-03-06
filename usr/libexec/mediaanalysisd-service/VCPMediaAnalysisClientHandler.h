//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMediaAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSString *_clientTeamID;	// 48 = 0x30
}

+ (unsigned long long)requestLimit;	// IMP=0x0020000000030dbb
+ (id)errorForStatus:(int)arg1;	// IMP=0x001000000003099c
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0010000000030937
- (void).cxx_destruct;	// IMP=0x0020000000044df2
- (void)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withRequestID:(int)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044a67
- (void)requestIdentificationOfFacesWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withRequestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004456e
- (void)requestAutoCounterSIMLValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 simlGroundTruthURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004419a
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 clusterStateURL:(id)arg3 groundTruthURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000043cbb
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043691
- (void)requestDumpAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000432ae
- (void)requestOptInAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 persons:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000042c85
- (void)queryAutoCounterOptInStatus:(int)arg1 withPhotoLibraryURL:(id)arg2 personLocalIdentifiers:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000042708
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000423f3
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000421f8
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004187f
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040f54
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040629
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003fcdd
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003fb1f
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003f183
- (void)requestResetPetClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e858
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003dec5
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d529
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003cb76
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000003c083
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003bff3
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003beb7
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x001000000003bc9f
- (void)cancelAllRequests;	// IMP=0x001000000003b8f5
- (void)cancelRequest:(int)arg1;	// IMP=0x001000000003b5f8
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000003a5f9
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000038bb0
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x00100000000389b9
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037d43
- (void)requestAssetAnalysis:(int)arg1 forLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withOptions:(id)arg4 analysisTypes:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000036f14
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000035a19
- (void)endEntryPoint;	// IMP=0x0010000000035a04
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x00100000000359e6
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x00100000000359ce
- (void)resetPerformanceMeasurements;	// IMP=0x00100000000359c4
- (void)queryPerformanceMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003595b
- (void)requestImageProcessingWithCloudIdentifierRequests:(id)arg1 requestID:(int)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035194
- (void)requestImageProcessing:(id)arg1 forAssetWithCloudIdentifier:(id)arg2 requestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000345cf
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 requestID:(int)arg6 andReply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000033dc5
- (void)requestImageProcessing:(id)arg1 forAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000003374e
- (id)assetWithIdentifier:(id)arg1 identifierType:(unsigned long long)arg2 fromPhotoLibraryWithURL:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000032f0c
- (void)requestImageProcessing:(id)arg1 forImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000328ef
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000003207a
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000031931
- (void)completeRequest:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000316bc
- (_Bool)scheduleTask:(id)arg1 withRequestID:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000030f4e
- (void)requestMediaAnalysisDatabaseAccessSandboxExtensionWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030a8f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000301fe
- (id)init;	// IMP=0x00100000000301f0

@end

