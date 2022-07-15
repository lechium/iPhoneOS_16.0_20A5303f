//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableSet;

@interface VCPFaceLibraryProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    unsigned long long _subtasks;	// 32 = 0x20
    NSMutableSet *_assetBatch;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
}

+ (void)_logSubtasks:(unsigned long long)arg1;	// IMP=0x002000000007518e
+ (id)taskWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000007509b
- (void).cxx_destruct;	// IMP=0x002000000007ebca
- (_Bool)autoCancellable;	// IMP=0x001000000007ebc2
- (int)run;	// IMP=0x001000000007dcd2
- (int)_processAutoCounterForPhotoLibrary:(id)arg1;	// IMP=0x001000000007d447
- (int)_clusterAndProcessPersonsForPhotoLibrary:(id)arg1 withContext:(id)arg2 progressMade:(_Bool *)arg3;	// IMP=0x001000000007ce41
- (int)_promotePersonsForPhotoLibrary:(id)arg1;	// IMP=0x001000000007ca30
- (int)_buildPersonsForPhotoLibrary:(id)arg1 withClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x001000000007c4ed
- (int)_clusterFacesWithClusterer:(id)arg1;	// IMP=0x001000000007c1ec
- (int)_updateQuickFaceIDModelForPhotoLibrary:(id)arg1 withContext:(id)arg2 andQuickFaceIDManager:(id)arg3;	// IMP=0x001000000007be03
- (int)_generateAndDetectFaceCropsForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000007b8d8
- (int)_detectFacesForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000007b681
- (_Bool)_readyToProcessProcessLibrary:(id)arg1;	// IMP=0x001000000007b492
- (int)completeSceneProcessing;	// IMP=0x001000000007b1fe
- (int)_processingLibraryWithTask:(id)arg1;	// IMP=0x001000000007ab9d
- (int)_maintainProcessingStatusWithTask:(id)arg1;	// IMP=0x001000000007a594
- (int)_analyzeAssetsWithChangeToken:(id)arg1 withTask:(id)arg2;	// IMP=0x00100000000791f6
- (int)_queryChangeTokenCountSince:(id)arg1 count:(unsigned long long *)arg2 withTask:(id)arg3;	// IMP=0x0010000000078f32
- (int)_processLocalIdentifiers:(id)arg1 change:(id)arg2 insert:(_Bool)arg3 withTask:(id)arg4;	// IMP=0x0010000000078837
- (int)_analyzeAllAssetsWithTask:(id)arg1;	// IMP=0x0010000000077e8d
- (int)_processFetchedAssets:(id)arg1 withProcessingTask:(id)arg2 andProgressReporter:(id)arg3;	// IMP=0x0010000000077ab1
- (int)_retryFailedAssetsWithTask:(id)arg1;	// IMP=0x0010000000077781
- (int)_retryEligibleAssetsWithTask:(id)arg1 andStatus:(unsigned long long)arg2 andReporter:(id)arg3;	// IMP=0x0010000000076f7d
- (int)_streamAnalysisWithTask:(id)arg1 andProcessingStatus:(unsigned long long)arg2;	// IMP=0x0010000000076962
- (int)_screenLocalIdentifiers:(id)arg1 withTask:(id)arg2 andPreviousStatus:(unsigned long long)arg3 andProgressReporter:(id)arg4;	// IMP=0x0010000000075e10
- (int)_addBatchWithAsset:(id)arg1 isRetry:(_Bool)arg2 withTask:(id)arg3;	// IMP=0x0010000000075408
- (_Bool)isCancelled;	// IMP=0x00100000000753e4
- (void)cancel;	// IMP=0x00100000000753d9
- (float)resourceRequirement;	// IMP=0x00100000000753cb
- (void)dealloc;	// IMP=0x0010000000075342
- (id)initWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000074dfe
- (id)init;	// IMP=0x0010000000074df0

@end
