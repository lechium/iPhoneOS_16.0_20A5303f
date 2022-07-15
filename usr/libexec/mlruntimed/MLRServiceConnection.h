//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESBundleRegistry, DESRecordStoreManager, DESSandBoxManager, MISSING_TYPE, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MLRServiceConnection : NSObject
{
    double _connectionStartTime;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    DESBundleRegistry *_bundleRegistry;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    DESRecordStoreManager *_recordStoreManager;	// 40 = 0x28
    DESSandBoxManager *_sandBoxExtension;	// 48 = 0x30
    NSObject<OS_xpc_object> *_activity;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000014b97
@property(readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (_Bool)taskIsDeferred;	// IMP=0x0010000000014b85
- (void)debugInfoStringForPluginID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014a46
- (void)wakeUpWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014a3b
- (MISSING_TYPE *)setValue:forInfoKey:bundleID:completion: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000148b3
- (void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001451a
- (void)fetchTelemetryForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014150
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013f50
- (void)runLiveEvaluationForBundleId:(id)arg1 taskSource:(long long)arg2 baseURL:(id)arg3 localeIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000013c7e
- (void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 sandboxExtensions:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000134f7
- (void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001321a
- (void)saveCoreDuetEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000130b0
- (void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012ea5
- (void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012cc7
- (void)fetchRecordsForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012931
- (void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000127a3
- (void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000123db
- (void)fetchInstalledBundlesIdsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001224f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000011843

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
