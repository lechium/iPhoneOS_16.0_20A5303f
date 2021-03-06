//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSString, NSTimer, VUIMPMediaItemDownloadController, VUIMediaEntityAssetControllerState, VUIMediaEntityType;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetController : NSObject
{
    _Bool _supportsStartingDownload;	// 8 = 0x8
    _Bool _requestingPermissionToDownload;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 16 = 0x10
    id <VUIMediaEntityAssetControllerDelegate> _delegate;	// 24 = 0x18
    VUIMediaEntityAssetControllerState *_state;	// 32 = 0x20
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;	// 40 = 0x28
    VUIMPMediaItemDownloadController *_downloadController;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 56 = 0x38
    MPMediaItem *_mediaItem;	// 64 = 0x40
    NSTimer *_waitForDeletionTimer;	// 72 = 0x48
}

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;	// IMP=0x00100000002baab8
+ (_Bool)_supportsStartingDownloadWithMediaItem:(id)arg1;	// IMP=0x00100000002ba981
+ (void)initialize;	// IMP=0x00100000002b7fa4
- (void).cxx_destruct;	// IMP=0x00000000002babd3
@property(retain, nonatomic) NSTimer *waitForDeletionTimer; // @synthesize waitForDeletionTimer=_waitForDeletionTimer;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic, getter=isRequestingPermissionToDownload) _Bool requestingPermissionToDownload; // @synthesize requestingPermissionToDownload=_requestingPermissionToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIMPMediaItemDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void)_notifyDelegateStateDidChange:(id)arg1;	// IMP=0x00000000002ba907
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ba855
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ba735
- (_Bool)_isDownloaded;	// IMP=0x00000000002ba6c7
- (void)_onProcessingQueue_calculateStateAndNotify:(_Bool)arg1;	// IMP=0x00000000002ba4f1
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(_Bool)arg5 supportsCancellation:(_Bool)arg6 notify:(_Bool)arg7;	// IMP=0x00000000002ba18b
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(_Bool)arg2;	// IMP=0x00000000002ba15f
- (void)_onProcessingQueue_startMonitoringDownload;	// IMP=0x00000000002ba148
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b986b
- (void)_onProcessingQueue_startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b924f
- (void)_onProcessingQueue_invalidateAndSetState;	// IMP=0x00000000002b921d
- (void)_onProcessingQueue_invalidate;	// IMP=0x00000000002b91c8
- (void)_onProcessingQueue_setDownloadController:(id)arg1;	// IMP=0x00000000002b9112
- (id)_onProcessingQueue_downloadController;	// IMP=0x00000000002b9104
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002b8f7c
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;	// IMP=0x00000000002b8d8c
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000002b8c99
- (void)cancelKeyFetch;	// IMP=0x00000000002b8c93
- (void)cancelAndRemoveDownload;	// IMP=0x00000000002b8c63
- (void)resumeDownload;	// IMP=0x00000000002b8c0a
- (void)pauseDownload;	// IMP=0x00000000002b8bb1
- (void)fetchNewKeysForDownloadedVideo;	// IMP=0x00000000002b8bab
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002b89b6
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002b86ac
@property(readonly, nonatomic) _Bool contentAllowsCellularDownload;
@property(readonly, nonatomic) _Bool supportsRedownloadingContent;
- (void)invalidate;	// IMP=0x00000000002b85fe
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000002b8394
- (id)init;	// IMP=0x00000000002b8325
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x00000000002b7fed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

