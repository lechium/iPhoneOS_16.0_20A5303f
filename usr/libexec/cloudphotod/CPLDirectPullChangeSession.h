//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeBatch, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineStore, NSString;

@interface CPLDirectPullChangeSession
{
    _Bool _shouldPullAtLeastOneBatch;	// 8 = 0x8
    CPLChangeBatch *_pendingAckForBatch;	// 16 = 0x10
    CPLChangeBatch *_expandedCloudBatch;	// 24 = 0x18
    CPLChangeBatch *_expandedClientBatch;	// 32 = 0x20
    CPLChangeBatch *_scopeChangesBatch;	// 40 = 0x28
    NSString *_lastSeenLibraryVersion;	// 48 = 0x30
    CPLEngineLibrary *_engineLibrary;	// 56 = 0x38
    CPLEngineStore *_store;	// 64 = 0x40
    CPLEngineScopeStorage *_scopes;	// 72 = 0x48
    CPLEngineChangePipe *_pullQueue;	// 80 = 0x50
    CPLEngineIDMapping *_idMapping;	// 88 = 0x58
    CPLEngineScheduler *_scheduler;	// 96 = 0x60
}

+ (id)selfCrashResetReason;	// IMP=0x0020000000097688
- (void).cxx_destruct;	// IMP=0x0020000000097754
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096977
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095887
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000948bd
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009406c
- (id)clientWorkDescription;	// IMP=0x001000000009405f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
