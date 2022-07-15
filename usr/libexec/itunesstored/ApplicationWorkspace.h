//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSCountedSet, NSLock, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ApplicationWorkspace : NSObject
{
    NSMutableDictionary *_appProgress;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
    NSCountedSet *_pendingInstalls;	// 48 = 0x30
    ISOperationQueue *_placeholderIconOperationQueue;	// 56 = 0x38
    NSMutableArray *_syncWaitBlocks;	// 64 = 0x40
    NSMutableDictionary *_waitBlocks;	// 72 = 0x48
}

+ (_Bool)keepSafeHarborDataForBundleID:(id)arg1;	// IMP=0x00200000000f8846
+ (id)defaultWorkspace;	// IMP=0x00100000000f6de9
- (void).cxx_destruct;	// IMP=0x00200000000fdcf4
- (void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000fdadb
- (void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000fda64
- (void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000fd984
- (id)_thumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000fd7c8
- (void)_stopObservingODRProgress:(id)arg1;	// IMP=0x00100000000fd763
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2;	// IMP=0x00100000000fd64d
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000fd639
- (void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000fd5ec
- (void)_performNextOperation;	// IMP=0x00100000000fd34d
- (_Bool)_isInstallingForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000fd10d
- (_Bool)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000fd0da
- (void)_fireWaitBlocksForSyncTermination;	// IMP=0x00100000000fce7a
- (void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1;	// IMP=0x00100000000fcc31
- (id)_copyCombinedApplicationProgress:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000fcb7a
- (void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1;	// IMP=0x00100000000fc99c
- (void)_addProgressOperation:(id)arg1;	// IMP=0x00100000000fc6ee
- (void)_addOperationAtBeginning:(id)arg1;	// IMP=0x00100000000fc619
- (void)willSwitchUser;	// IMP=0x00100000000fb642
- (id)sinfPathForBundleID:(id)arg1;	// IMP=0x00100000000fb46d
- (void)waitForSyncBubbleToTerminateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb333
- (void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fb010
- (void)updatePlaceholderWithApplicationProgress:(id)arg1;	// IMP=0x00100000000faed9
- (void)updatePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000fadec
- (void)uninstallPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000facdd
- (void)suspendQuotas;	// IMP=0x00100000000fa921
- (_Bool)shouldModifyQuota:(id)arg1;	// IMP=0x00100000000fa8c0
- (void)setIconData:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000fa67b
- (void)resumeQuotas;	// IMP=0x00100000000f9c65
- (void)restorePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f9b79
- (void)resetProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f9a91
- (void)replayIncompleteOperations;	// IMP=0x00100000000f8aa5
- (void)markFailedPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f8996
- (_Bool)isRemovedSystemApp:(id)arg1;	// IMP=0x00100000000f8831
- (_Bool)isInstalledApp:(id)arg1;	// IMP=0x00100000000f8700
- (void)installPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f845a
- (_Bool)isMultiUser;	// IMP=0x00100000000f840f
- (_Bool)isDownloadingOrInstallingForItemIdentifier:(id)arg1;	// IMP=0x00100000000f7801
- (void)finishInstallOfApplicationHandle:(id)arg1;	// IMP=0x00100000000f74fd
- (void)endExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f7471
- (void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f740a
- (void)beginExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f73f8
- (void)addPlaceholderThumbnailOperation:(id)arg1;	// IMP=0x00100000000f7120
- (void)applyWorkspaceChanges:(id)arg1;	// IMP=0x00100000000f6e6e
- (id)init;	// IMP=0x00100000000f6adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
