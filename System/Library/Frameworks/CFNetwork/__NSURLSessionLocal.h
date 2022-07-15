//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSession.h"

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface __NSURLSessionLocal : NSURLSession
{
    unsigned long long _identSeed;	// 8 = 0x8
    void *_tubeManager;	// 16 = 0x10
    NSMutableDictionary *_connectionsToTasks;	// 24 = 0x18
    NSMutableArray *_outstandingTasks;	// 32 = 0x20
    NSHashTable *_unownedUnresumedTasks;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_invalidateQueue;	// 48 = 0x30
    CDUnknownBlockType _invalidateCallback;	// 56 = 0x38
    const struct XCookieStorage *_xCookies;	// 64 = 0x40
    const struct XCredentialStorage *_xCreds;	// 72 = 0x48
    _Bool _xCookiesInitComplete;	// 80 = 0x50
    _Bool _xCredsInitComplete;	// 81 = 0x51
    struct mutex _xCookieStorageInitLock;	// 88 = 0x58
    struct mutex _xCredStorageInitLock;	// 152 = 0x98
    _Bool _isInvalid;	// 216 = 0xd8
    NSURLSessionConfiguration *_proxyConfig;	// 224 = 0xe0
    NSURLSession *_proxySession;	// 232 = 0xe8
    _Bool _shouldRecreateProxySession;	// 240 = 0xf0
    NSURLSession *_sessionForCacheLookups;	// 248 = 0xf8
    struct os_unfair_lock_s _unownedUnresumedTasksLock;	// 256 = 0x100
}

- (id).cxx_construct;	// IMP=0x00000000000059d4
- (void).cxx_destruct;	// IMP=0x00000000000059a7
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000000596f
- (void)_onqueue_completeInvalidation:(_Bool)arg1;	// IMP=0x0000000000005655
- (void)_onqueue_getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000546a
- (void)_onqueue_flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000545b
- (void)_onqueue_resetStorageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005449
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;	// IMP=0x0000000000005415
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 downloadConfiguration:(id)arg5;	// IMP=0x00000000000053e1
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x00000000000053ad
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000000005379
- (id)_downloadTaskWithTaskForClass:(id)arg1;	// IMP=0x0000000000004135
- (id)_uploadTaskWithTaskForClass:(id)arg1;	// IMP=0x00000000000040f1
- (id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;	// IMP=0x0000000000003ee7
- (id)webSocketTaskForRequest:(id)arg1;	// IMP=0x0000000000003cb3
- (id)_dataTaskWithTaskForClass:(id)arg1;	// IMP=0x0000000000003c6f
- (void)dealloc;	// IMP=0x0000000000003b82
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4;	// IMP=0x0000000000003857
- (void)_useTLSSessionCacheFromSession:(id)arg1;	// IMP=0x00000000000037d4
- (unsigned long long)nextSeed;	// IMP=0x00000000000037a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003789

// Remaining properties
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration;
@property(readonly) __weak NSURLSession *_groupSession;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
