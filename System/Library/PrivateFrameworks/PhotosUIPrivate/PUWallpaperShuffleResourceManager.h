//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSURL, PHPhotoLibrary, PIParallaxStyle, PUWallpaperShuffleLayerStackLoadingOperation;

__attribute__((visibility("hidden")))
@interface PUWallpaperShuffleResourceManager : NSObject
{
    PIParallaxStyle *_style;	// 8 = 0x8
    NSURL *_assetDirectory;	// 16 = 0x10
    NSDictionary *_initialPosterMediaByAssetUUIDs;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    long long _shuffleType;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSOperationQueue *_requestOperationQueue;	// 56 = 0x38
    NSMutableDictionary *_segmentationLoadingOperationsByAssetUUIDs;	// 64 = 0x40
    PUWallpaperShuffleLayerStackLoadingOperation *_currentLayerStackOperation;	// 72 = 0x48
    PUWallpaperShuffleLayerStackLoadingOperation *_nextLayerStackOperation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016b2c0
@property(retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *nextLayerStackOperation; // @synthesize nextLayerStackOperation=_nextLayerStackOperation;
@property(retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *currentLayerStackOperation; // @synthesize currentLayerStackOperation=_currentLayerStackOperation;
@property(readonly, nonatomic) NSMutableDictionary *segmentationLoadingOperationsByAssetUUIDs; // @synthesize segmentationLoadingOperationsByAssetUUIDs=_segmentationLoadingOperationsByAssetUUIDs;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSDictionary *initialPosterMediaByAssetUUIDs; // @synthesize initialPosterMediaByAssetUUIDs=_initialPosterMediaByAssetUUIDs;
@property(readonly, nonatomic) NSURL *assetDirectory; // @synthesize assetDirectory=_assetDirectory;
@property(retain, nonatomic) PIParallaxStyle *style; // @synthesize style=_style;
- (void)exportResourcesForFinalPosterMedia:(id)arg1 options:(unsigned long long)arg2 assetDirectory:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000016a85f
- (void)preloadResourceForPosterMedia:(id)arg1;	// IMP=0x000000000016a6bc
- (void)cancelPreloading;	// IMP=0x000000000016a540
- (id)_loadResourceForPosterMedia:(id)arg1 isPreloading:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016a048
- (void)requestResourceForPosterMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016997a
- (void)_handleSetStyle:(id)arg1;	// IMP=0x000000000016986f
- (void)startPreloadingResourcesForPosterMedia:(id)arg1;	// IMP=0x00000000001690eb
- (id)initWithPosterMedia:(id)arg1 style:(id)arg2 assetDirectory:(id)arg3 photoLibrary:(id)arg4 shuffleType:(long long)arg5;	// IMP=0x0000000000168cec

@end

