//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOperation, CKOperationGroup, CKRecordID, CPLCloudKitTransportTaskFetchCache, CPLSyncSession, CPLTransportScopeMapping, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol CPLCloudKitActivityRequest, CPLCloudKitTaskController, CPLCloudKitTransportTaskGate, CPLEngineStoreUserIdentifier, CPLEngineTransportGroup, OS_dispatch_queue, OS_xpc_object;

@interface CPLCloudKitTransportTask : NSObject
{
    NSMutableArray *_currentOperations;	// 8 = 0x8
    NSMutableArray *_lastOperationRequestUUIDs;	// 16 = 0x10
    NSMutableDictionary *_cachedScopes;	// 24 = 0x18
    NSMutableDictionary *_cacheScopeIdentifiersPerZoneID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _mustCallTaskDidFinish;	// 48 = 0x30
    unsigned long long _nonCKOperationCount;	// 56 = 0x38
    _Bool _foregroundHasBeenChanged;	// 64 = 0x40
    _Bool _hasProgress;	// 65 = 0x41
    NSProgress *_progress;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_progressQueue;	// 80 = 0x50
    NSMutableSet *_associatedMetrics;	// 88 = 0x58
    id <CPLCloudKitActivityRequest> _activityRequest;	// 96 = 0x60
    NSObject<OS_xpc_object> *_activity;	// 104 = 0x68
    _Bool _cancelled;	// 112 = 0x70
    NSProgress *_callbackOperationProgress;	// 120 = 0x78
    struct _xpc_activity_eligibility_changed_handler_s *_activityEligibilityChangeHandler;	// 128 = 0x80
    _Bool _highPriorityBackground;	// 136 = 0x88
    _Bool _forcedTask;	// 137 = 0x89
    _Bool _backgroundTask;	// 138 = 0x8a
    _Bool _allowsFetchCache;	// 139 = 0x8b
    _Bool _foreground;	// 140 = 0x8c
    _Bool _allowsCellular;	// 141 = 0x8d
    _Bool _boostable;	// 142 = 0x8e
    _Bool _isUpload;	// 143 = 0x8f
    _Bool _isMetadata;	// 144 = 0x90
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;	// 152 = 0x98
    id <CPLEngineTransportGroup> _transportGroup;	// 160 = 0xa0
    id trackingContext;	// 168 = 0xa8
    id <CPLCloudKitTaskController> _controller;	// 176 = 0xb0
    id <CPLCloudKitTransportTaskGate> _gate;	// 184 = 0xb8
    CPLSyncSession *_session;	// 192 = 0xc0
    CPLCloudKitTransportTaskFetchCache *_fetchCache;	// 200 = 0xc8
    NSString *_sourceBundleIdentifier;	// 208 = 0xd0
    double _timeoutIntervalForRequest;	// 216 = 0xd8
    double _timeoutIntervalForResource;	// 224 = 0xe0
    NSString *_idleDescription;	// 232 = 0xe8
    CPLTransportScopeMapping *_transportScopeMapping;	// 240 = 0xf0
}

+ (_Bool)allowsCellularForDownloadOperationOfSize:(unsigned long long)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00200000000d3070
+ (_Bool)allowsCellularForDownloadOperationOfResource:(id)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00100000000d2ff9
+ (void)initialize;	// IMP=0x00100000000ce451
+ (id)reverseMappingForMoveSteps;	// IMP=0x00100000000ab333
+ (id)mappingForMoveSteps;	// IMP=0x00100000000ab233
+ (void)setMoveStepFaultInjector:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ab20a
+ (CDUnknownBlockType)moveStepFaultInjector;	// IMP=0x00100000000ab1f1
+ (id)copiedRecordFromSourceRecord:(id)arg1 sourceDatabaseScope:(long long)arg2 toRecordID:(id)arg3 helper:(id)arg4 action:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000a7ac3
- (void).cxx_destruct;	// IMP=0x00100000000d45c6
@property(retain, nonatomic) CPLTransportScopeMapping *transportScopeMapping; // @synthesize transportScopeMapping=_transportScopeMapping;
@property(copy) NSString *idleDescription; // @synthesize idleDescription=_idleDescription;
@property(nonatomic) _Bool isMetadata; // @synthesize isMetadata=_isMetadata;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(readonly, nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isBoostable) _Bool boostable; // @synthesize boostable=_boostable;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) CPLCloudKitTransportTaskFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <CPLCloudKitTransportTaskGate> gate; // @synthesize gate=_gate;
@property(readonly, nonatomic) id <CPLCloudKitTaskController> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id trackingContext; // @synthesize trackingContext;
@property(nonatomic) _Bool allowsFetchCache; // @synthesize allowsFetchCache=_allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask; // @synthesize forcedTask=_forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground; // @synthesize highPriorityBackground=_highPriorityBackground;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup; // @synthesize transportGroup=_transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000d43cd
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x00100000000d4327
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000d42ae
- (id)_scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000d413c
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000d409f
@property(copy, nonatomic) NSDictionary *transportScopes;
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000d3e5d
- (void)enumerateAllZonesWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3cd4
- (void)_enumerateAllZonesForSharedDatabase:(_Bool)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3774
- (void)fetchUserRecordIDFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d32b5
- (void)getUserRecordIDFetchIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d3088
- (id)_stringForNetworkBehavior:(unsigned long long)arg1;	// IMP=0x00100000000d2fda
- (id)_stringForQoS:(long long)arg1;	// IMP=0x00100000000d2fb3
- (id)_statusForConfiguration:(id)arg1;	// IMP=0x00100000000d2e80
- (id)baseConfigurationForTask;	// IMP=0x00100000000d2b0e
- (void)setupConfigurationForOperation:(id)arg1;	// IMP=0x00100000000d293b
- (unsigned long long)_networkBehavior;	// IMP=0x00100000000d28a3
- (void)runOperations;	// IMP=0x00100000000d27ea
- (void)processErrorIfNeeded:(id)arg1;	// IMP=0x00100000000d27ce
- (void)popTaskOperation;	// IMP=0x00100000000d27b1
- (void)pushTaskOperation;	// IMP=0x00100000000d2794
- (void)taskDidFinish;	// IMP=0x00100000000d24dc
- (void)operationDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d2009
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1 forOperation:(id)arg2;	// IMP=0x00100000000d1f54
- (void)updateProgress:(double)arg1 forOperation:(id)arg2;	// IMP=0x00100000000d1eaf
- (void)updateOneBatchForOperation:(id)arg1;	// IMP=0x00100000000d1e1c
- (void)associateMetric:(id)arg1;	// IMP=0x00100000000d1d8d
@property(readonly, nonatomic) NSArray *lastOperationRequestUUIDs;
- (id)callbackOperationDidFinishWithError:(id)arg1;	// IMP=0x00100000000d1bd7
- (void)dispatchCallbackOperation:(id)arg1 progress:(id)arg2;	// IMP=0x00100000000d191f
- (void)_cancelCallbackProgress;	// IMP=0x00100000000d1864
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x00100000000d1637
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d13dd
- (void)updateProgress:(double)arg1;	// IMP=0x00100000000d1195
- (void)updateOneBatch;	// IMP=0x00100000000d0f85
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3 sourceBundleIdentifiers:(id)arg4;	// IMP=0x00100000000d02ed
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3;	// IMP=0x00100000000d0209
@property(readonly, nonatomic) CKOperation *currentOperation;
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x00100000000cfe30
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cfc91
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cfa9f
- (void)cancelIfBlocked;	// IMP=0x00100000000cf844
- (void)_cancelAllOperationsIfBlocked;	// IMP=0x00100000000cf4a6
- (void)cancel;	// IMP=0x00100000000cef72
- (void)runWithinSyncSession:(id)arg1;	// IMP=0x00100000000cef60
- (void)runWithNoSyncSession;	// IMP=0x00100000000cef4c
- (void)_runWithSyncSession:(id)arg1;	// IMP=0x00100000000ce9fc
- (void)_acquireActivityOfTypeAndLaunchOperation:(long long)arg1;	// IMP=0x00100000000ce7cb
- (void)_reallyStartOperation;	// IMP=0x00100000000ce6e3
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) CKOperationGroup *operationGroup;
@property(readonly, nonatomic) CKRecordID *currentUserID;
- (id)initWithController:(id)arg1;	// IMP=0x00100000000ce4a2
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ab575
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ab55f
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000ab557
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ab4b5
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000ab4af
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000ab4a7
- (void)moveRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 finalizeMoveChanges:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000aabc9
- (void)moveRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000aab7b
- (id)_moveChangesFromSourceRecords:(id)arg1 recordIDs:(id)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 helper:(id)arg5 sourceRecordIDs:(id *)arg6 operationContext:(id)arg7 error:(id *)arg8;	// IMP=0x00100000000aa24c
- (void)_applyMoveChanges:(id)arg1 sourceType:(long long)arg2 destinationType:(long long)arg3 helper:(id)arg4 operationContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000a9a92
- (void);	// IMP=0x00100000000a99cb
- (void)copyRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000a93c6
- (void)uploadDestinationRecords:(id)arg1 destinationType:(long long)arg2 scopeProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a93a4
- (void)_uploadDestinationRecords:(id)arg1 destinationType:(long long)arg2 scopeProvider:(id)arg3 operationContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a8bed
- (id)_destinationRecordsFromSourceRecords:(id)arg1 recordIDs:(id)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 helper:(id)arg5 sourceRecordIDs:(id *)arg6 operationContext:(id)arg7 action:(id)arg8 error:(id *)arg9;	// IMP=0x00100000000a866f
- (void)updateRecords:(id)arg1 cloudKitScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e97ed
- (id)_errorForUpdateError:(id)arg1;	// IMP=0x00100000000e9691
- (void)fetchRecordsFollowRemappingWithIDs:(id)arg1 wantsAllRecords:(_Bool)arg2 type:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e94ce
- (void)_fetchRecordsFollowRemappingWithIDs:(id)arg1 recordIDsToOriginalRecordIDs:(id)arg2 alreadySeen:(id)arg3 wantsAllRecords:(_Bool)arg4 type:(long long)arg5 storeRequestUUIDsIn:(id)arg6 addToResult:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000e8a6b
- (void)fetchZoneForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8792
- (void)_fetchZoneForZoneID:(id)arg1 operationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e8246
- (void)fetchPlaceholderRecordsForScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7c61
- (void)fetchUnknownTargetsInMapping:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e79ff
- (void)fetchFullRecordsForScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e77f9
- (void)_fetchRecordsForRemainingScopedIdentifiers:(id)arg1 alreadyFetchedScopedIdentifiers:(id)arg2 userRecordID:(id)arg3 foundCPLRecords:(id)arg4 foundCKRecords:(id)arg5 targetMapping:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000e706b
- (_Bool)_mergeFoundCKRecords:(id)arg1 updateFoundCPLRecords:(id)arg2 remainingScopedIdentifiers:(id)arg3 fetchedScopedIdentifiers:(id)arg4 userRecordID:(id)arg5 targetMapping:(id)arg6 error:(id *)arg7;	// IMP=0x00100000000e54c5
- (void)_mergePrivateRecord:(id)arg1 withSharedRecord:(id)arg2 merger:(id)arg3;	// IMP=0x00100000000e53ba
- (id)_sharedRecordToPrivateRecord:(id)arg1 scopedIdentifier:(id)arg2;	// IMP=0x00100000000e52c4
- (id)_interpretedSharedChangeFromCKRecord:(id)arg1 scopedIdentifier:(id)arg2 userRecordID:(id)arg3;	// IMP=0x00100000000e51ea
- (id)_interpretedChangeFromCKRecord:(id)arg1 scopedIdentifier:(id)arg2 userRecordID:(id)arg3;	// IMP=0x00100000000e4de3
- (void)fetchRecordWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4dcc
- (void)_fetchRecordWithScopedIdentifiers:(id)arg1 followRemapping:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e47a2
- (void)_fetchNextOperationType:(id)arg1 followRemapping:(_Bool)arg2 recordIDMapping:(id)arg3 inResult:(id)arg4 storeRequestUUIDsIn:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e4395
- (void)fetchRecordWithNames:(id)arg1 inScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e437b
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e4258
- (void)fetchRecordWithNames:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e3d17
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 wantsAllRecords:(_Bool)arg3 type:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e3cf3
- (void)_fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 desiredKeys:(id)arg3 wantsAllRecords:(_Bool)arg4 type:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e2c99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

