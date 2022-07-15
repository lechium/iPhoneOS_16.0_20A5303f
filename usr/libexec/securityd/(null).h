//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSIncomingQueueOperation, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSNewTLKOperation, CKKSOperationDependencies, CKKSOutgoingQueueOperation, CKKSProcessReceivedKeysOperation, CKKSReachabilityTracker, CKKSReencryptOutgoingItemsOperation, CKKSResultOperation, CKKSSecDbAdapter, CKKSSynchronizeOperation, CKKSZoneChangeFetcher, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOperation, NSOperationQueue, NSSet, NSString, OctagonStateMachine, OctagonStateMultiStateArrivalWatcher, TPSyncingPolicy;
@protocol OS_dispatch_queue, OTPersonaAdapter;

@interface (null) : NSObject
{
    _Bool _keyStateMachineRefetched;	// 8 = 0x8
    _Bool _keyStateFullRefetchRequested;	// 9 = 0x9
    _Bool _initiatedLocalScan;	// 10 = 0xa
    _Bool _itemModificationsBeforePolicyLoaded;	// 11 = 0xb
    _Bool _halted;	// 12 = 0xc
    _Bool _havoc;	// 13 = 0xd
    long long _accountStatus;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    CKKSAccountStateTracker *_accountTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CKKSCondition *_loggedIn;	// 64 = 0x40
    CKKSCondition *_loggedOut;	// 72 = 0x48
    CKKSCondition *_accountStateKnown;	// 80 = 0x50
    long long _trustStatus;	// 88 = 0x58
    CKKSCondition *_trustStatusKnown;	// 96 = 0x60
    CKKSLockStateTracker *_lockStateTracker;	// 104 = 0x68
    OctagonStateMachine *_stateMachine;	// 112 = 0x70
    id <OTPersonaAdapter> _personaAdapter;	// 120 = 0x78
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 128 = 0x80
    CKKSNearFutureScheduler *_suggestTLKUpload;	// 136 = 0x88
    CKKSIncomingQueueOperation *_lastIncomingQueueOperation;	// 144 = 0x90
    CKKSNewTLKOperation *_lastNewTLKOperation;	// 152 = 0x98
    CKKSOutgoingQueueOperation *_lastOutgoingQueueOperation;	// 160 = 0xa0
    CKKSProcessReceivedKeysOperation *_lastProcessReceivedKeysOperation;	// 168 = 0xa8
    CKKSReencryptOutgoingItemsOperation *_lastReencryptOutgoingItemsOperation;	// 176 = 0xb0
    CKKSSynchronizeOperation *_lastSynchronizeOperation;	// 184 = 0xb8
    CKKSResultOperation *_lastFixupOperation;	// 192 = 0xc0
    NSOperation *_holdOutgoingQueueOperation;	// 200 = 0xc8
    NSOperation *_holdIncomingQueueOperation;	// 208 = 0xd0
    NSOperation *_holdLocalSynchronizeOperation;	// 216 = 0xd8
    NSString *_zoneName;	// 224 = 0xe0
    CKKSOperationDependencies *_operationDependencies;	// 232 = 0xe8
    CKKSCondition *_policyLoaded;	// 240 = 0xf0
    OctagonStateMultiStateArrivalWatcher *_priorityViewsProcessed;	// 248 = 0xf8
    CKKSNearFutureScheduler *_outgoingQueueOperationScheduler;	// 256 = 0x100
    CKKSNearFutureScheduler *_outgoingQueuePriorityOperationScheduler;	// 264 = 0x108
    CKKSResultOperation *_resultsOfNextIncomingQueueOperationOperation;	// 272 = 0x110
    NSHashTable *_outgoingQueueOperations;	// 280 = 0x118
    NSMutableSet *_resyncRecordsSeen;	// 288 = 0x120
    CKKSSecDbAdapter *_databaseProvider;	// 296 = 0x128
    NSOperationQueue *_operationQueue;	// 304 = 0x130
    CKKSResultOperation *_accountLoggedInDependency;	// 312 = 0x138
    NSArray *_currentTrustStates;	// 320 = 0x140
    NSSet *_viewAllowList;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x0020000000186755
@property _Bool havoc; // @synthesize havoc=_havoc;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSArray *currentTrustStates; // @synthesize currentTrustStates=_currentTrustStates;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) CKKSResultOperation *accountLoggedInDependency; // @synthesize accountLoggedInDependency=_accountLoggedInDependency;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSSecDbAdapter *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) NSMutableSet *resyncRecordsSeen; // @synthesize resyncRecordsSeen=_resyncRecordsSeen;
@property(retain) NSHashTable *outgoingQueueOperations; // @synthesize outgoingQueueOperations=_outgoingQueueOperations;
@property(retain) CKKSResultOperation *resultsOfNextIncomingQueueOperationOperation; // @synthesize resultsOfNextIncomingQueueOperationOperation=_resultsOfNextIncomingQueueOperationOperation;
@property(retain) CKKSNearFutureScheduler *outgoingQueuePriorityOperationScheduler; // @synthesize outgoingQueuePriorityOperationScheduler=_outgoingQueuePriorityOperationScheduler;
@property(retain) CKKSNearFutureScheduler *outgoingQueueOperationScheduler; // @synthesize outgoingQueueOperationScheduler=_outgoingQueueOperationScheduler;
@property _Bool itemModificationsBeforePolicyLoaded; // @synthesize itemModificationsBeforePolicyLoaded=_itemModificationsBeforePolicyLoaded;
@property(retain) OctagonStateMultiStateArrivalWatcher *priorityViewsProcessed; // @synthesize priorityViewsProcessed=_priorityViewsProcessed;
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(readonly) CKKSOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property _Bool initiatedLocalScan; // @synthesize initiatedLocalScan=_initiatedLocalScan;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain) NSOperation *holdLocalSynchronizeOperation; // @synthesize holdLocalSynchronizeOperation=_holdLocalSynchronizeOperation;
@property(retain) NSOperation *holdIncomingQueueOperation; // @synthesize holdIncomingQueueOperation=_holdIncomingQueueOperation;
@property(retain) NSOperation *holdOutgoingQueueOperation; // @synthesize holdOutgoingQueueOperation=_holdOutgoingQueueOperation;
@property(retain) CKKSResultOperation *lastFixupOperation; // @synthesize lastFixupOperation=_lastFixupOperation;
@property(retain) CKKSSynchronizeOperation *lastSynchronizeOperation; // @synthesize lastSynchronizeOperation=_lastSynchronizeOperation;
@property(retain) CKKSReencryptOutgoingItemsOperation *lastReencryptOutgoingItemsOperation; // @synthesize lastReencryptOutgoingItemsOperation=_lastReencryptOutgoingItemsOperation;
@property(retain) CKKSProcessReceivedKeysOperation *lastProcessReceivedKeysOperation; // @synthesize lastProcessReceivedKeysOperation=_lastProcessReceivedKeysOperation;
@property(retain) CKKSOutgoingQueueOperation *lastOutgoingQueueOperation; // @synthesize lastOutgoingQueueOperation=_lastOutgoingQueueOperation;
@property(retain) CKKSNewTLKOperation *lastNewTLKOperation; // @synthesize lastNewTLKOperation=_lastNewTLKOperation;
@property(retain) CKKSIncomingQueueOperation *lastIncomingQueueOperation; // @synthesize lastIncomingQueueOperation=_lastIncomingQueueOperation;
@property(retain) CKKSNearFutureScheduler *suggestTLKUpload; // @synthesize suggestTLKUpload=_suggestTLKUpload;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property _Bool keyStateFullRefetchRequested; // @synthesize keyStateFullRefetchRequested=_keyStateFullRefetchRequested;
@property _Bool keyStateMachineRefetched; // @synthesize keyStateMachineRefetched=_keyStateMachineRefetched;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSCondition *trustStatusKnown; // @synthesize trustStatusKnown=_trustStatusKnown;
@property long long trustStatus; // @synthesize trustStatus=_trustStatus;
@property(retain) CKKSCondition *accountStateKnown; // @synthesize accountStateKnown=_accountStateKnown;
@property(retain) CKKSCondition *loggedOut; // @synthesize loggedOut=_loggedOut;
@property(retain) CKKSCondition *loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (id)fastStatus:(id)arg1 zoneStateEntry:(id)arg2;	// IMP=0x0010000000185eef
- (id)intransactionSlowStatus:(id)arg1;	// IMP=0x0010000000184d31
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000184987
- (id)viewsForPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001847be
- (_Bool)waitUntilReadyForRPCForOperation:(id)arg1 fast:(_Bool)arg2 errorOnNoCloudKitAccount:(_Bool)arg3 errorOnPolicyMissing:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000018441a
- (id)policyDependentViewStateForName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000184108
- (_Bool)waitForPolicy:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000183f5e
- (void)halt;	// IMP=0x0010000000183b07
- (void)cancelAllOperations;	// IMP=0x0010000000183aba
- (void)cancelPendingOperations;	// IMP=0x00100000001838f2
- (void)waitForOperationsOfClass:(Class)arg1;	// IMP=0x0010000000183749
- (_Bool)waitUntilAllOperationsAreFinished;	// IMP=0x00100000001836cd
- (_Bool)scheduleOperationWithoutDependencies:(id)arg1;	// IMP=0x00100000001835c4
- (void)scheduleOperation:(id)arg1;	// IMP=0x0010000000183488
- (_Bool)waitForKeyHierarchyReadiness;	// IMP=0x001000000018326f
- (_Bool)waitForFetchAndIncomingQueueProcessing;	// IMP=0x0010000000183107
- (_Bool)outgoingQueueEmpty:(id *)arg1;	// IMP=0x0010000000183061
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x0010000000182f85
- (void)selfPeerChanged:(id)arg1;	// IMP=0x0010000000182edd
- (_Bool)shouldRetryAfterFetchError:(id)arg1 zoneID:(id)arg2;	// IMP=0x0010000000182b7a
- (_Bool)ckErrorOrPartialError:(id)arg1 isError:(long long)arg2 zoneID:(id)arg3;	// IMP=0x001000000018297e
- (void)changesFetched:(id)arg1 deletedRecordIDs:(id)arg2 zoneID:(id)arg3 newChangeToken:(id)arg4 moreComing:(_Bool)arg5 resync:(_Bool)arg6;	// IMP=0x0010000000182725
- (id)participateInFetch:(id)arg1;	// IMP=0x00100000001825ec
- (_Bool)_onQueueZoneIsReadyForFetching:(id)arg1;	// IMP=0x00100000001820f2
- (_Bool)zoneIsReadyForFetching:(id)arg1;	// IMP=0x0010000000182009
- (void)_onqueuePrioritizePriorityViews;	// IMP=0x0010000000181c6a
- (id)viewStateForName:(id)arg1;	// IMP=0x0010000000181be7
- (void)setSyncingViewsAllowList:(id)arg1;	// IMP=0x0010000000181bd5
- (id)createViewState:(id)arg1 contextID:(id)arg2 zoneIsNew:(_Bool)arg3 priorityView:(_Bool)arg4 ckksManagedView:(_Bool)arg5;	// IMP=0x001000000018189f
- (void)onqueueCreatePriorityViewsProcessedWatcher;	// IMP=0x0010000000181646
- (_Bool)setCurrentSyncingPolicy:(id)arg1 policyIsFresh:(_Bool)arg2;	// IMP=0x0010000000180e63
- (_Bool)setCurrentSyncingPolicy:(id)arg1;	// IMP=0x0010000000180e4f
@property(readonly) TPSyncingPolicy *syncingPolicy;
- (void)endTrustedOperation;	// IMP=0x0010000000180d8e
- (void)beginTrustedOperation:(id)arg1 suggestTLKUpload:(id)arg2 requestPolicyCheck:(id)arg3;	// IMP=0x0010000000180b73
- (void)handleCKLogout;	// IMP=0x0010000000180a41
- (void)handleCKLogin;	// IMP=0x0010000000180807
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x0010000000180381
- (long long)accountStatusFromCKAccountInfo:(id)arg1;	// IMP=0x001000000018031d
- (id)createAccountLoggedInDependency:(id)arg1;	// IMP=0x00100000001801fb
- (void)beginCloudKitOperation;	// IMP=0x00100000001801a7
- (_Bool)insideSQLTransaction;	// IMP=0x0010000000180139
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000001800a9
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180019
- (_Bool)_onqueueResetAllInflightOQE:(id *)arg1;	// IMP=0x001000000017fa1e
- (id)resyncLocal;	// IMP=0x001000000017f9a3
- (id)resyncWithCloud;	// IMP=0x001000000017f928
- (void)xpc24HrNotification;	// IMP=0x001000000017f8e4
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f798
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x001000000017f6a5
- (id)updateDeviceState:(_Bool)arg1 waitForKeyHierarchyInitialization:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x001000000017f4b7
- (void)scanLocalItems;	// IMP=0x001000000017f473
- (id)rpcWaitForPriorityViewProcessing;	// IMP=0x001000000017f37c
- (id)rpcProcessIncomingQueue:(id)arg1 errorOnClassAFailure:(_Bool)arg2;	// IMP=0x001000000017f05e
- (id)rpcFetchAndProcessIncomingQueue:(id)arg1 because:(id)arg2 errorOnClassAFailure:(_Bool)arg3;	// IMP=0x001000000017e791
- (id)rpcFetchBecause:(id)arg1;	// IMP=0x001000000017e123
- (id)resultsOfNextProcessIncomingQueueOperation;	// IMP=0x001000000017e000
- (void)_onqueueProcessOutgoingQueue:(id)arg1 priorityRush:(_Bool)arg2;	// IMP=0x001000000017dd48
- (id)rpcProcessOutgoingQueue:(id)arg1 operationGroup:(id)arg2;	// IMP=0x001000000017d95f
- (id)findFirstPendingOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000017d79b
- (id)findFirstPendingOperation:(id)arg1;	// IMP=0x001000000017d787
- (id)viewsRequiringTLKUpload;	// IMP=0x001000000017d690
- (void)receiveTLKUploadRecords:(id)arg1;	// IMP=0x001000000017d532
- (id)findKeySets:(_Bool)arg1;	// IMP=0x001000000017d3ae
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x001000000017ce39
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x001000000017c7e6
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4 rateLimiter:(id)arg5;	// IMP=0x001000000017b748
- (_Bool)_onqueueOtherDevicesReportHavingTLKs:(id)arg1 trustStates:(id)arg2;	// IMP=0x001000000017a3b3
- (id)tlkMissingOperation:(id)arg1;	// IMP=0x001000000017a2a0
@property(readonly) NSDate *earliestFetchTime;
@property(readonly) NSSet *viewList;
- (id)viewsInState:(id)arg1;	// IMP=0x0010000000179c8d
- (_Bool)anyViewsInState:(id)arg1;	// IMP=0x0010000000179ab0
- (id)loseTrustOperation:(id)arg1;	// IMP=0x001000000017999d
- (id)becomeReadyOperation:(id)arg1;	// IMP=0x001000000017988a
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000001759ae
- (void)_onqueuePokeKeyStateMachine;	// IMP=0x001000000017593a
- (void)keyStateMachineRequestProcess;	// IMP=0x00100000001758f6
- (id)rpcResetCloudKit:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000175217
- (id)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000174d78
- (id)performInitializedOperation;	// IMP=0x0010000000174c9c
@property(readonly) NSDictionary *stateConditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 accountTracker:(id)arg4 lockStateTracker:(id)arg5 reachabilityTracker:(id)arg6 savedTLKNotifier:(id)arg7 cloudKitClassDependencies:(id)arg8 personaAdapter:(id)arg9;	// IMP=0x001000000017403b
- (void)modifyTLKSharesForExternallyManagedView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b3352
- (void)loadKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b3274
- (void)fetchCloudKitExternallyManagedViewKeyHierarchy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b30cd
- (void)fetchExternallyManagedViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b2f52
- (void)proposeTLKForExternallyManagedView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b2be8
- (void)resetExternallyManagedCloudKitView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b2a5a
- (id)externalManagedViewForRPC:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b26c1

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
