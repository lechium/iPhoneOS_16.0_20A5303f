//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSDownloadPolicy, SSMemoryEntity;

@interface PrepareDownloadOperation : ISOperation
{
    SSMemoryEntity *_download;	// 96 = 0x60
    _Bool _ignoresDownloadHandler;	// 104 = 0x68
    NSArray *_mediaAssets;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
    SSDownloadPolicy *_policy;	// 128 = 0x80
}

+ (long long)_URLSessionTaskPriorityForDownloadPriority:(long long)arg1;	// IMP=0x00200000001737c8
+ (long long)_URLSessionTaskPriorityForDownload:(id)arg1;	// IMP=0x0010000000173688
+ (id)_mediaAssetsForDownloadIdentifier:(long long)arg1 session:(id)arg2;	// IMP=0x001000000016d718
+ (_Bool)_isDTServiceHubIssuedRequest:(id)arg1;	// IMP=0x001000000016d67d
+ (void)enumerateOperationsWithDownloadQuery:(id)arg1 session:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000169dbe
- (void).cxx_destruct;	// IMP=0x0020000000173930
- (_Bool)_usesStreamingZipDataConsumerForAsset:(id)arg1;	// IMP=0x00100000001737ea
- (double)_transferProgressFractionWithAsset:(id)arg1;	// IMP=0x0010000000173406
- (_Bool)_shouldFailForDiskSpaceWithAsset:(id)arg1 dataConsumer:(id)arg2;	// IMP=0x0010000000172693
- (_Bool)_shouldFailForFinishedDownload;	// IMP=0x0010000000172643
- (_Bool)_shouldCancelAutomaticDownload;	// IMP=0x00100000001723ba
- (_Bool)_shouldCancelAsDuplicate;	// IMP=0x00100000001722dd
- (_Bool)_sendsStoreHeadersForAsset:(id)arg1;	// IMP=0x001000000017221f
- (_Bool)_requiresPoweredPluggedIn;	// IMP=0x00100000001720b3
- (void)_recordCoreAnalyticsEventForClient:(id)arg1 downloadKind:(id)arg2 url:(id)arg3;	// IMP=0x0010000000171dfa
- (id)_newURLRequestWithAsset:(id)arg1;	// IMP=0x00100000001717ea
- (id)_newDataConsumerWithAsset:(id)arg1 destinationPath:(id)arg2;	// IMP=0x001000000017143b
- (id)_newAVContentInfoDictionary;	// IMP=0x0010000000171058
- (id)_newAVAssetDownloadSessionOptionsWithAsset:(id)arg1 URLRequest:(id)arg2;	// IMP=0x0010000000170517
- (long long)_loadSizeForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016fc5a
- (long long)_loadSizeIfNecessaryForAsset:(id)arg1;	// IMP=0x001000000016fbb1
- (_Bool)_itemIsInSoftwareLibrary;	// IMP=0x001000000016faac
- (_Bool)_itemIsInMediaLibrary;	// IMP=0x001000000016f7f8
- (id)_clientIdentifier;	// IMP=0x001000000016f5d2
- (id)_bestMediaAsset;	// IMP=0x001000000016ecbb
- (long long)_assetSizeFromURLResponse:(id)arg1;	// IMP=0x001000000016eaf1
- (_Bool)_assetNeedsDecryption:(id)arg1;	// IMP=0x001000000016ea52
- (_Bool)_isPodcast;	// IMP=0x001000000016ea02
- (_Bool)_isPodcastRestore;	// IMP=0x001000000016e991
- (_Bool)_allowsCellularAccessForAsset:(id)arg1;	// IMP=0x001000000016dd6e
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x001000000016d668
- (long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2;	// IMP=0x001000000016d65d
- (void)run;	// IMP=0x001000000016a4aa
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool ignoresDownloadHandler;
@property(readonly, nonatomic) long long downloadIdentifier;
- (id)_initWithDownload:(id)arg1 mediaAssets:(id)arg2 policy:(id)arg3;	// IMP=0x0010000000169cdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

