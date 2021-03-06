//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

@interface NDAVBackgroundSession
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 240 = 0xf0
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 248 = 0xf8
    NSMutableDictionary *_identifiersToTCPConnections;	// 256 = 0x100
    NSMutableDictionary *_identifiersToDASActivities;	// 264 = 0x108
    NSMapTable *_assetDownloadTokensToAssets;	// 272 = 0x110
    NSURLSessionConfiguration *_clientConfig;	// 280 = 0x118
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x002000000006b730
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000006b486
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x001000000006b2ad
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didFinishDownloadForMediaSelectionPropertyList:(id)arg2;	// IMP=0x001000000006b216
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 forMediaSelectionPropertyList:(id)arg5;	// IMP=0x000000000006b10b
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 willDownloadVariants:(id)arg2;	// IMP=0x001000000006afcd
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x001000000006ae92
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000006a707
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x001000000006a4d8
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x001000000006a330
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x001000000006a215
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a20a
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000006a114
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000069f27
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000069be5
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x00100000000697e0
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x00100000000696d3
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0010000000069462
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x001000000006925a
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x0010000000068c23
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000068c1d
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0010000000068a32
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000068a2c
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000068948
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x00100000000688ea
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000068724
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0010000000067fb9
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 enableSPIDelegateCallbacks:(_Bool)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x001000000006715d
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x0010000000067142
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x0010000000066f07
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0010000000066eaa
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000066e99
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000066e88
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000066e77
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0010000000066de9
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x0010000000066de3
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0010000000066d55
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0010000000066cc7
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000066c39
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x001000000006671e
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x00100000000666a3
- (id)avAssetDownloadsDirectory;	// IMP=0x001000000006617b
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x0010000000066175
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x001000000006608a
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0010000000065f99
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x0010000000065e95
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0010000000065d1a
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0010000000065bd9
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x0010000000065a1a
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x001000000006574f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

