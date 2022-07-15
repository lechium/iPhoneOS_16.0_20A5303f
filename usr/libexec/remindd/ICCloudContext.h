//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, DADBuddyStateObserver, ICCloudContextSyncMetrics, ICSelectorDelayer, MISSING_TYPE, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSOperationQueue, NSString, NSTimer, RDAccountInitializerDidCompleteInitializeAllAccountsObserver, RDAccountPersonIDSaltObserver, RDStoreController, REMAppleAccountUtilities, _TtC7remindd21RDDebouncerWithNumber, _TtC7remindd37RDDebouncerWithCKDatabaseNotification;
@protocol ICCloudContextDelegate, OS_dispatch_queue;

@interface ICCloudContext : NSObject
{
    _Bool _fetchOperationsPending;	// 8 = 0x8
    _Bool _needsToUpdateSubscriptions;	// 9 = 0x9
    _Bool _disabled;	// 10 = 0xa
    _Bool _hasPassedBuddy;	// 11 = 0xb
    _Bool _isSystemAvailableForSyncing;	// 12 = 0xc
    _Bool _hasRetryTimer;	// 13 = 0xd
    _Bool _disabledInternal;	// 14 = 0xe
    _Bool _needsToProcessAllDirtyObjects;	// 15 = 0xf
    _Bool _didAddObservers;	// 16 = 0x10
    _Bool _fetchingEnabled;	// 17 = 0x11
    _Bool _syncDisabledByServer;	// 18 = 0x12
    _Bool _uploadSuspended;	// 19 = 0x13
    _Bool _supportsCloudKitSyncing;	// 20 = 0x14
    _Bool _shouldUnregisterBuddy;	// 21 = 0x15
    _Bool _didCheckForLongLivedOperations;	// 22 = 0x16
    _Bool _discretionaryNetwork;	// 23 = 0x17
    _Bool _automaticallyRetryNetworkFailures;	// 24 = 0x18
    _Bool _wasInternetReachable;	// 25 = 0x19
    _Bool _pendingAccountInitializerCompleteOnLaunch;	// 26 = 0x1a
    _Bool _needsToMergeLocalObjects;	// 27 = 0x1b
    _Bool _needsToUpdateCloudContextOnAccountsDidChange;	// 28 = 0x1c
    struct os_unfair_lock_s _containersByAccountIDLock;	// 32 = 0x20
    struct os_unfair_lock_s _accountInitializerDidCompleteOnAccountsDidChangeObserverLock;	// 36 = 0x24
    RDStoreController *_storeController;	// 40 = 0x28
    id <ICCloudContextDelegate> _cloudContextDelegate;	// 48 = 0x30
    long long _qualityOfService;	// 56 = 0x38
    unsigned long long _discretionaryNetworkBehavior;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_processingQueue;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    REMAppleAccountUtilities *_appleAccountUtilities;	// 88 = 0x58
    ICCloudContextSyncMetrics *_lastSyncMetrics;	// 96 = 0x60
    NSMutableSet *_objectIDsToRetry;	// 104 = 0x68
    NSTimer *_retryTimer;	// 112 = 0x70
    NSMutableDictionary *_retryCountsByOperationType;	// 120 = 0x78
    NSMutableDictionary *_databaseScopeStringsNeedingRetryFetchChangesByAccountID;	// 128 = 0x80
    NSMutableSet *_objectIDsToProcess;	// 136 = 0x88
    ICSelectorDelayer *_processingSelectorDelayer;	// 144 = 0x90
    ICSelectorDelayer *_pollingSelectorDelayer;	// 152 = 0x98
    NSDictionary *_containersByAccountID;	// 160 = 0xa0
    NSMutableDictionary *_accountZoneIDsNeedingFetchChanges;	// 168 = 0xa8
    NSMutableDictionary *_accountZoneIDsFetchingChanges;	// 176 = 0xb0
    NSMutableDictionary *_accountZoneIDsNeedingToBeSaved;	// 184 = 0xb8
    NSDictionary *_subscribedSubscriptionIDsByAccountID;	// 192 = 0xc0
    NSDate *_subscribedSubscriptionIDsLastModifiedDate;	// 200 = 0xc8
    double _timeoutIntervalForResource;	// 208 = 0xd0
    NSString *_apsTopic;	// 216 = 0xd8
    APSConnection *_apsConnection;	// 224 = 0xe0
    _TtC7remindd37RDDebouncerWithCKDatabaseNotification *_apsNotificationHandlingDebouncer;	// 232 = 0xe8
    _TtC7remindd21RDDebouncerWithNumber *_accountChangedNotificationHandlingDebouncer;	// 240 = 0xf0
    double _lastSyncSinceInternetReachable;	// 248 = 0xf8
    DADBuddyStateObserver *_buddyStateObserver;	// 256 = 0x100
    RDAccountInitializerDidCompleteInitializeAllAccountsObserver *_accountInitializerDidCompleteOnLaunchObserver;	// 264 = 0x108
    RDAccountInitializerDidCompleteInitializeAllAccountsObserver *_accountInitializerDidCompleteOnAccountsDidChangeObserver;	// 272 = 0x110
    NSMutableDictionary *_recognizedCloudObjectClasses;	// 280 = 0x118
    RDAccountPersonIDSaltObserver *_accountPersonIDSaltObserver;	// 288 = 0x120
    NSNotificationCenter *_unitTest_notificationCenter;	// 296 = 0x128
}

+ (id)babysittableWaiterID;	// IMP=0x00100000000456d6
+ (id)zoneIDsFromZoneInfos:(id)arg1;	// IMP=0x0010000000038662
+ (id)zoneInfosFromZoneIDs:(id)arg1;	// IMP=0x0010000000038371
+ (_Bool)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2;	// IMP=0x0010000000030448
+ (_Bool)_performLocalObjectMergeWithFetchedCloudObjectIDs:(id)arg1 cloudKitAccount:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002850c
+ (id)_objectIDsThatShouldAttemptLocalObjectMergeWithCloudObjects:(id)arg1;	// IMP=0x00100000000274ae
+ (void)faultAndPromptToFileRadarWithICTap2RadarType:(unsigned long long)arg1 logMessage:(id)arg2;	// IMP=0x0010000000022a20
+ (void)faultAndPromptToFileRadarWithICTap2RadarType:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 logMessage:(id)arg4;	// IMP=0x00100000000226af
+ (void)addRunExclusivelyOperations:(id)arg1 operationQueue:(id)arg2;	// IMP=0x0010000000021d69
+ (void)saveAndFaultIfFailWithContext:(id)arg1 shouldTakeServerAsTruth:(_Bool)arg2 logDescription:(id)arg3;	// IMP=0x0010000000021b70
+ (id)errorsFromError:(id)arg1;	// IMP=0x0010000000021761
+ (_Bool)haveZoneIDsInAccountZoneIDs:(id)arg1;	// IMP=0x001000000002166f
+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;	// IMP=0x0010000000021292
+ (void)recursivelyFixCrossZoneRelationship:(id)arg1 perObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020fdd
+ (id)objectsByDatabaseScope:(id)arg1;	// IMP=0x0010000000020d2c
+ (id)objectsByAccount:(id)arg1;	// IMP=0x0010000000020894
+ (id)sortedRecords:(id)arg1;	// IMP=0x001000000001fffb
+ (void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000001b621
+ (id)userRecordNameForContainer:(id)arg1;	// IMP=0x00100000000158f8
+ (id)errorFromOperations:(id)arg1;	// IMP=0x00100000000126c1
+ (id)errorFromErrors:(id)arg1;	// IMP=0x00100000000125a5
+ (id)errorForDisabledCloudSyncing;	// IMP=0x00100000000124e4
+ (id)allDirtyCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000eda9
+ (id)allCloudObjectIDsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000eaf5
+ (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x001000000000ea17
+ (id)allCloudObjectsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000e7b4
+ (id)metadataZoneID;	// IMP=0x001000000000c626
+ (id)migrationZoneID;	// IMP=0x001000000000c5aa
+ (id)appZoneID;	// IMP=0x001000000000c52e
+ (id)_recordTypesToSortChildrenAfterFetch;	// IMP=0x001000000000c307
+ (id)_cloudObjectClassesByRecordType;	// IMP=0x001000000000bf13
+ (id)_systemBuildVersion;	// IMP=0x001000000000beae
+ (id)processingQueue;	// IMP=0x0010000000006dde
+ (id)base64EncodedHMACStringFromString:(id)arg1 usingSalt:(id)arg2;	// IMP=0x001000000052aaf0
+ (_Bool)conformsToRDICCloudContextCryptoStringProviding;	// IMP=0x001000000052aac0
- (void).cxx_destruct;	// IMP=0x0020000000045c84
@property(retain, nonatomic) NSNotificationCenter *unitTest_notificationCenter; // @synthesize unitTest_notificationCenter=_unitTest_notificationCenter;
@property(retain, nonatomic) RDAccountPersonIDSaltObserver *accountPersonIDSaltObserver; // @synthesize accountPersonIDSaltObserver=_accountPersonIDSaltObserver;
@property(retain, nonatomic) NSMutableDictionary *recognizedCloudObjectClasses; // @synthesize recognizedCloudObjectClasses=_recognizedCloudObjectClasses;
@property(nonatomic) struct os_unfair_lock_s accountInitializerDidCompleteOnAccountsDidChangeObserverLock; // @synthesize accountInitializerDidCompleteOnAccountsDidChangeObserverLock=_accountInitializerDidCompleteOnAccountsDidChangeObserverLock;
- (struct os_unfair_lock_s);	// IMP=0x0010000000045c0f
@property(retain, nonatomic) RDAccountInitializerDidCompleteInitializeAllAccountsObserver *accountInitializerDidCompleteOnAccountsDidChangeObserver; // @synthesize accountInitializerDidCompleteOnAccountsDidChangeObserver=_accountInitializerDidCompleteOnAccountsDidChangeObserver;
@property(nonatomic) _Bool needsToUpdateCloudContextOnAccountsDidChange; // @synthesize needsToUpdateCloudContextOnAccountsDidChange=_needsToUpdateCloudContextOnAccountsDidChange;
@property(nonatomic) _Bool needsToMergeLocalObjects; // @synthesize needsToMergeLocalObjects=_needsToMergeLocalObjects;
@property(retain, nonatomic) RDAccountInitializerDidCompleteInitializeAllAccountsObserver *accountInitializerDidCompleteOnLaunchObserver; // @synthesize accountInitializerDidCompleteOnLaunchObserver=_accountInitializerDidCompleteOnLaunchObserver;
@property(nonatomic) _Bool pendingAccountInitializerCompleteOnLaunch; // @synthesize pendingAccountInitializerCompleteOnLaunch=_pendingAccountInitializerCompleteOnLaunch;
@property(retain, nonatomic) DADBuddyStateObserver *buddyStateObserver; // @synthesize buddyStateObserver=_buddyStateObserver;
@property(nonatomic) double lastSyncSinceInternetReachable; // @synthesize lastSyncSinceInternetReachable=_lastSyncSinceInternetReachable;
@property(nonatomic) _Bool wasInternetReachable; // @synthesize wasInternetReachable=_wasInternetReachable;
@property(retain, nonatomic) _TtC7remindd21RDDebouncerWithNumber *accountChangedNotificationHandlingDebouncer; // @synthesize accountChangedNotificationHandlingDebouncer=_accountChangedNotificationHandlingDebouncer;
@property(retain, nonatomic) _TtC7remindd37RDDebouncerWithCKDatabaseNotification *apsNotificationHandlingDebouncer; // @synthesize apsNotificationHandlingDebouncer=_apsNotificationHandlingDebouncer;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(retain, nonatomic) NSString *apsTopic; // @synthesize apsTopic=_apsTopic;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) _Bool automaticallyRetryNetworkFailures; // @synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures;
@property(nonatomic) _Bool discretionaryNetwork; // @synthesize discretionaryNetwork=_discretionaryNetwork;
@property(nonatomic) _Bool didCheckForLongLivedOperations; // @synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations;
@property(retain) NSDate *subscribedSubscriptionIDsLastModifiedDate; // @synthesize subscribedSubscriptionIDsLastModifiedDate=_subscribedSubscriptionIDsLastModifiedDate;
@property(retain) NSDictionary *subscribedSubscriptionIDsByAccountID; // @synthesize subscribedSubscriptionIDsByAccountID=_subscribedSubscriptionIDsByAccountID;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingToBeSaved; // @synthesize accountZoneIDsNeedingToBeSaved=_accountZoneIDsNeedingToBeSaved;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsFetchingChanges; // @synthesize accountZoneIDsFetchingChanges=_accountZoneIDsFetchingChanges;
@property(retain, nonatomic) NSMutableDictionary *accountZoneIDsNeedingFetchChanges; // @synthesize accountZoneIDsNeedingFetchChanges=_accountZoneIDsNeedingFetchChanges;
@property(nonatomic) struct os_unfair_lock_s containersByAccountIDLock; // @synthesize containersByAccountIDLock=_containersByAccountIDLock;
@property(retain, nonatomic) NSDictionary *containersByAccountID; // @synthesize containersByAccountID=_containersByAccountID;
@property(nonatomic) _Bool shouldUnregisterBuddy; // @synthesize shouldUnregisterBuddy=_shouldUnregisterBuddy;
@property(nonatomic) _Bool supportsCloudKitSyncing; // @synthesize supportsCloudKitSyncing=_supportsCloudKitSyncing;
@property(nonatomic) _Bool uploadSuspended; // @synthesize uploadSuspended=_uploadSuspended;
@property(nonatomic) _Bool syncDisabledByServer; // @synthesize syncDisabledByServer=_syncDisabledByServer;
@property(nonatomic, getter=isFetchingEnabled) _Bool fetchingEnabled; // @synthesize fetchingEnabled=_fetchingEnabled;
@property(nonatomic) _Bool didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property(retain) ICSelectorDelayer *pollingSelectorDelayer; // @synthesize pollingSelectorDelayer=_pollingSelectorDelayer;
@property(retain) ICSelectorDelayer *processingSelectorDelayer; // @synthesize processingSelectorDelayer=_processingSelectorDelayer;
@property(retain, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property(nonatomic) _Bool needsToProcessAllDirtyObjects; // @synthesize needsToProcessAllDirtyObjects=_needsToProcessAllDirtyObjects;
@property(getter=isDisabledInternal) _Bool disabledInternal; // @synthesize disabledInternal=_disabledInternal;
@property(retain, nonatomic) NSMutableDictionary *databaseScopeStringsNeedingRetryFetchChangesByAccountID; // @synthesize databaseScopeStringsNeedingRetryFetchChangesByAccountID=_databaseScopeStringsNeedingRetryFetchChangesByAccountID;
@property(retain, nonatomic) NSMutableDictionary *retryCountsByOperationType; // @synthesize retryCountsByOperationType=_retryCountsByOperationType;
@property(retain) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property _Bool hasRetryTimer; // @synthesize hasRetryTimer=_hasRetryTimer;
@property(retain, nonatomic) NSMutableSet *objectIDsToRetry; // @synthesize objectIDsToRetry=_objectIDsToRetry;
@property(nonatomic) _Bool isSystemAvailableForSyncing; // @synthesize isSystemAvailableForSyncing=_isSystemAvailableForSyncing;
@property(nonatomic) _Bool hasPassedBuddy; // @synthesize hasPassedBuddy=_hasPassedBuddy;
@property(retain) ICCloudContextSyncMetrics *lastSyncMetrics; // @synthesize lastSyncMetrics=_lastSyncMetrics;
@property(retain, nonatomic) REMAppleAccountUtilities *appleAccountUtilities; // @synthesize appleAccountUtilities=_appleAccountUtilities;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property _Bool needsToUpdateSubscriptions; // @synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions;
@property(readonly, nonatomic) _Bool fetchOperationsPending; // @synthesize fetchOperationsPending=_fetchOperationsPending;
@property(nonatomic) __weak id <ICCloudContextDelegate> cloudContextDelegate; // @synthesize cloudContextDelegate=_cloudContextDelegate;
@property(readonly, nonatomic) RDStoreController *storeController; // @synthesize storeController=_storeController;
- (id)waiterID;	// IMP=0x00100000000456e3
- (_Bool)retryPerformingCloudSchemaCatchUpSync;	// IMP=0x00100000000452dd
- (void)didCompleteCloudSchemaCatchUpSyncWithContextMap:(id)arg1 error:(id)arg2 syncTypeLabel:(id)arg3 debugLogLabel:(id)arg4;	// IMP=0x0010000000044d00
- (id)setUpCloudSchemaCatchUpSyncContextMapWithAccountIDs:(id)arg1;	// IMP=0x0010000000044919
- (void)adjustAPSNotificationDebouncerIntervalWithMigrationState:(_Bool)arg1;	// IMP=0x00100000000447eb
- (void)adjustAPSNotificationDebouncerInterval;	// IMP=0x00100000000444f3
- (void)migrationStateDidChange:(_Bool)arg1 didFinishMigration:(_Bool)arg2;	// IMP=0x001000000004436f
- (void)setMigrationStateToDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 createZoneAccountIfFinishMigration:(_Bool)arg3 accountID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000043236
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000042737
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x00100000000426c6
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000004265b
- (void)applicationWillEnterForeground;	// IMP=0x0010000000042562
- (void)applicationWillTerminate;	// IMP=0x001000000004255c
- (void)applicationDidEnterBackground;	// IMP=0x0010000000042556
- (void)didCompleteInitializeAllAccounts:(id)arg1;	// IMP=0x0010000000042237
- (void)accountsDidEnable;	// IMP=0x0010000000041d42
- (void)accountsDidDisable;	// IMP=0x0010000000041b9a
- (void)_accountsDidEnableOrDisable;	// IMP=0x001000000004193d
- (_Bool)shouldPollCloudKitWhenLaunchingAndBackgrounding;	// IMP=0x001000000004180d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000414be
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;	// IMP=0x001000000004144a
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000413e7
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2 accountID:(id)arg3;	// IMP=0x001000000004136a
- (void)deleteAllApplicationDataFromServerWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040e75
- (void)deleteAllServerChangeTokens;	// IMP=0x0010000000040a6e
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;	// IMP=0x00100000000406ee
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;	// IMP=0x001000000004040d
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3 accountID:(id)arg4;	// IMP=0x001000000003f8a5
- (void)retryOperationsIfNecessary;	// IMP=0x001000000003eb7a
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;	// IMP=0x001000000003e5cd
- (_Bool)shouldIgnoreErrorForBackoffTimer:(id)arg1 operationType:(id)arg2;	// IMP=0x001000000003e37f
- (id)errorCodesToIgnoreForBackoffTimer;	// IMP=0x001000000003e353
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;	// IMP=0x001000000003e2ce
- (void)clearRetryCountForOperationType:(id)arg1;	// IMP=0x001000000003e133
- (void)incrementRetryCountForOperationType:(id)arg1;	// IMP=0x001000000003dec3
- (void)_clearCloudDirtyForToken:(id)arg1;	// IMP=0x001000000003dcd9
- (id)_markCloudAsDirtyAndReturnToken;	// IMP=0x001000000003db99
- (id)_existingCloudDirtyToken;	// IMP=0x001000000003db0b
- (void)checkForLongLivedOperations;	// IMP=0x001000000003d1f3
- (void)updateCloudContextStateWithReason:(id)arg1;	// IMP=0x001000000003d1d9
- (void)updateCloudContextStateWithSyncOption:(long long)arg1 syncReason:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b785
- (_Bool)isInForeground;	// IMP=0x001000000003b77d
- (void)clearSubscribedSubscriptionIDs;	// IMP=0x001000000003b5f0
- (void)addSubscribedSubscriptionIDs:(id)arg1 accountID:(id)arg2;	// IMP=0x001000000003b1aa
- (void)loadSubscribedSubscriptionIDs;	// IMP=0x001000000003ad12
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a090
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000397b4
- (void)updateSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038bd7
- (void)setupAPSConnection;	// IMP=0x00100000000389e2
- (id)subscriptionForDatabase:(id)arg1;	// IMP=0x0010000000038903
- (void)clearZoneFetchState;	// IMP=0x0010000000038204
- (void)saveZoneFetchState;	// IMP=0x0010000000037e1b
- (void)loadZoneFetchState;	// IMP=0x0010000000037b1c
- (id)retryCountFetchDatabaseChangesOperationTypeForAccountID:(id)arg1 dataScopeString:(id)arg2;	// IMP=0x0010000000037af4
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 accountID:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037247
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2 accountID:(id)arg3;	// IMP=0x0010000000036fcd
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 accountID:(id)arg3;	// IMP=0x0010000000036ac8
- (void)sharedZoneWasDeleted:(id)arg1 accountID:(id)arg2;	// IMP=0x001000000003646d
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 accountID:(id)arg3;	// IMP=0x00100000000361b4
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 cloudSchemaCatchUpSyncContextMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035766
- (void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 cloudSchemaCatchUpSyncContextMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034ee9
- (void)fetchDatabaseChangesWithReason:(id)arg1 cloudSchemaCatchUpSyncContextMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034b79
- (void)firePollingSyncRequest;	// IMP=0x0010000000034a8a
- (void)_performSortingChildrenObjectsAfterFetchingInBlockOfManagedObjectContext:(id)arg1 fetchHasFullyCompleted:(_Bool)arg2 accountID:(id)arg3;	// IMP=0x0010000000034471
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 accountID:(id)arg3 changeTokenUpdated:(id)arg4 batchFetchHelper:(id)arg5;	// IMP=0x00100000000341ba
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;	// IMP=0x0010000000033850
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasChangedWithRecordID:(id)arg2 record:(id)arg3 error:(id)arg4 context:(id)arg5;	// IMP=0x0010000000032f5f
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;	// IMP=0x001000000003286b
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 batchFetchHelper:(id)arg4 error:(id)arg5;	// IMP=0x0010000000031e55
- (MISSING_TYPE *)newOperationToFetchRecordZoneChangesWithZoneConfigurations:database: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000307d2
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3;	// IMP=0x001000000002fc14
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 cloudSchemaCatchUpSyncContextMap:(id)arg3;	// IMP=0x001000000002f004
- (void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 cloudSchemaCatchUpSyncContextMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002e3f7
- (void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 cloudSchemaCatchUpSyncContextMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d9e1
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d882
- (void)fetchRecordZoneChangesWithReason:(id)arg1 cloudSchemaCatchUpSyncContextMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d70e
- (void)validateAccountZoneIDsNeedingFetchChanges;	// IMP=0x001000000002d4c4
- (void)_handleDatabaseNotification:(id)arg1 database:(id)arg2 accountID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002cb1a
- (void)handleDatabaseNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c258
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b645
- (void)_processCloudObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a43f
- (_Bool)_isRecognizedCloudObjectClass:(id)arg1;	// IMP=0x001000000002a192
- (void)_processFetchedCloudObjectsWithObjectIDs:(id)arg1 withManagedObjectContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002920c
- (void)_processFetchedCloudObjectsWithObjectIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029152
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028f69
- (void)retryProcessingCloudObjects;	// IMP=0x0010000000028e59
- (void)processAllDirtyCloudObjectsWithSyncReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028b93
- (void)processPendingToMergeObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027b4a
- (void)addOperationToMergeLocalObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026589
- (void)processPendingCloudObjectsWithLabel:(id)arg1 syncReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000025049
- (void)processPendingCloudObjects;	// IMP=0x0010000000025021
- (void)addOperationToProcessObjectsWithLabel:(id)arg1 syncReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000024ca0
- (void)_addOperationToProcessBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002466e
- (void)contextDidSave:(id)arg1;	// IMP=0x0010000000023bbe
- (id)operationToSaveZonesForZoneIDs:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000023042
- (id)operationToSaveZonesIfNecessaryForAccountID:(id)arg1;	// IMP=0x0010000000022a77
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;	// IMP=0x00100000000224b4
- (_Bool)partialError:(id)arg1 containsErrorCode:(long long)arg2;	// IMP=0x001000000002226d
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;	// IMP=0x001000000001f701
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000001f02c
- (void)modifyRecordsOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 rootRecordIDsByShareID:(id)arg3 onProcessingQueue:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000001deb4
- (void)modifyRecordsOperation:(id)arg1 recordWasSavedWithRecordID:(id)arg2 record:(id)arg3 context:(id)arg4 onProcessingQueue:(_Bool)arg5 error:(id)arg6;	// IMP=0x001000000001d32e
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;	// IMP=0x001000000001cd08
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;	// IMP=0x001000000001c723
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;	// IMP=0x001000000001c453
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 operationGroupName:(id)arg4 addDependencies:(_Bool)arg5 accountID:(id)arg6;	// IMP=0x0010000000019e5d
- (id)fetchAndCompletionOperationWithDeleteShareObjects:(id)arg1 accountID:(id)arg2 dependencyOperations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001942b
- (void)deleteSharesForObjects:(id)arg1 accountID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018efb
- (void)deleteSharesForObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018a86
- (void)didFetchShare:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000018532
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;	// IMP=0x001000000001833b
- (void)fetchOperation:(id)arg1 recordWasFetchedWithRecordID:(id)arg2 record:(id)arg3 error:(id)arg4;	// IMP=0x00100000000179fb
- (void)fetchOperation:(id)arg1 progressChangedWithRecordID:(id)arg2 progress:(double)arg3;	// IMP=0x0010000000017892
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2;	// IMP=0x0010000000017199
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2;	// IMP=0x0010000000016e8c
- (id)operationsToFetchRecordIDs:(id)arg1 operationGroupName:(id)arg2 accountID:(id)arg3;	// IMP=0x0010000000016856
- (void)addFetchOperationsForRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 runExclusively:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000162c0
- (void)fetchRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 runExclusively:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001613c
- (id)newPlaceholderObjectForRecordID:(id)arg1 account:(id)arg2 recordType:(id)arg3 context:(id)arg4;	// IMP=0x0010000000016063
- (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000015f7d
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4;	// IMP=0x0010000000015c0e
- (id)existingCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000015b27
- (void)updateUserRecordWithAccountID:(id)arg1 updateFunction:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015514
- (void)operationQueueFetchUserRecordWithAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015468
- (void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015362
- (void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000152f5
- (id)fetchUserRecordOperationWithAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015269
- (id)fetchUserRecordOperationWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014c43
- (void)unitTest_setAccountStatus:(long long)arg1 forAccountID:(id)arg2;	// IMP=0x0010000000014c31
- (id)unitTest_accountStatusNumberForAccountID:(id)arg1;	// IMP=0x0010000000014bae
- (id)accountStatusByAccountIDDescription;	// IMP=0x001000000001494f
- (void)removeStaleFetchDatabaseRetryMetadata;	// IMP=0x001000000001445a
- (void)removeStaleAccountStatus;	// IMP=0x0010000000014105
- (void)updateAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013ab1
- (void)setAccountStatus:(long long)arg1 forAccountID:(id)arg2;	// IMP=0x001000000001397c
- (long long)accountStatusFromAccountStatusNumber:(id)arg1;	// IMP=0x0010000000013964
@property(retain, nonatomic) NSDictionary *accountStatusNumberByAccountID;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012fe6
- (_Bool)canRetryImmediatelyAfterError:(id)arg1;	// IMP=0x0010000000012c96
- (double)timeIntervalToRetryAfterFromError:(id)arg1;	// IMP=0x00100000000128f2
- (_Bool)isInternetReachable;	// IMP=0x00100000000124b6
- (_Bool)isFetchingAllRecordZones;	// IMP=0x0010000000012340
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 accountID:(id)arg2 markZonesAsUserPurged:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011abc
- (void)configureOperation:(id)arg1;	// IMP=0x0010000000011957
- (void)clearPendingActivity;	// IMP=0x0010000000011533
- (void)cancelEverythingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010c31
- (void)_syncWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000104a4
- (void)syncWithReason:(id)arg1 discretionary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f0ff
- (_Bool)_generateAndSavePersonIDSaltIfNeeded:(id)arg1;	// IMP=0x001000000000ee42
- (id)allDirtyCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000ed58
- (id)allCloudObjectIDsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000ea81
- (id)allCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000ea2e
- (id)allCloudObjectsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000e740
- (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x001000000000e6ed
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;	// IMP=0x001000000000e3ae
- (id)allZoneIDs;	// IMP=0x001000000000e2e7
- (id)configurationDump;	// IMP=0x001000000000d83d
- (id)status;	// IMP=0x001000000000d7e7
- (void)addStateHandler;	// IMP=0x001000000000d428
- (void)addStateHandlerWithName:(const char *)arg1 stateBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d06d
- (void)printOperationQueue;	// IMP=0x001000000000cd3e
- (_Bool)hasPendingOperations;	// IMP=0x001000000000ccf6
- (void)cloudKitAccountChanged:(id)arg1;	// IMP=0x001000000000ca2e
- (void)reachabilityChanged:(id)arg1;	// IMP=0x001000000000c6a2
@property(readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
- (void)handleUnrecoverableError;	// IMP=0x001000000000be71
- (void)updateSelectorDelayers;	// IMP=0x001000000000bb4a
- (void)updateConfiguration;	// IMP=0x001000000000bb1c
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;	// IMP=0x001000000000b8b7
- (_Bool)_isCloudKitAccountAvailableWithManagedObjectContext:(id)arg1 requireActive:(_Bool)arg2;	// IMP=0x001000000000b741
- (_Bool)isCloudKitAccountAvailableRequiringActive:(_Bool)arg1;	// IMP=0x001000000000b60d
- (_Bool)isCloudKitAccountAvailable;	// IMP=0x001000000000b5f9
- (_Bool)isReadyToSync;	// IMP=0x001000000000b5e5
- (_Bool)isReadyToSyncWithActiveAccountAvailable:(_Bool)arg1;	// IMP=0x001000000000b2df
- (id)readinessLoggingDescription;	// IMP=0x001000000000b12a
- (id)primaryCloudKitAccountInContext:(id)arg1;	// IMP=0x001000000000b075
- (id)cloudKitAccountsInContext:(id)arg1;	// IMP=0x001000000000af59
- (_Bool)notificationContainsCloudContextInternalChangesOnly:(id)arg1;	// IMP=0x001000000000ae78
- (id)batchFetchHelperWithContext:(id)arg1;	// IMP=0x001000000000ad74
- (id)serverChangeTokenContext;	// IMP=0x001000000000ad20
- (id)internalContextWithBatchFetchHelper;	// IMP=0x001000000000ac83
- (id)mergeLocalObjectsWriteContext;	// IMP=0x001000000000ac34
- (id)mergeLocalObjectsFetchContext;	// IMP=0x001000000000abe5
- (void)performAndWaitContextWithBatchFetchHelper:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aad5
- (id)contextWithBatchFetchHelper;	// IMP=0x001000000000aa66
- (id)context;	// IMP=0x001000000000aa4f
- (id)contextWithQueryGenerationTokenEnabled:(_Bool)arg1;	// IMP=0x001000000000a9ee
- (id)newBackgroundContext;	// IMP=0x001000000000a9a0
- (void)dealloc;	// IMP=0x001000000000a7b6
- (id)accountIDForDatabase:(id)arg1;	// IMP=0x001000000000a712
- (id)containerAccountIDsDescription;	// IMP=0x001000000000a64f
- (id)containerForAccountID:(id)arg1;	// IMP=0x001000000000a159
- (void)clearContainers;	// IMP=0x001000000000a0b6
- (void)unobservePrimaryCloudKitAccountPersonIDSaltChanges;	// IMP=0x0010000000009bbc
- (void)observePrimaryCloudKitAccountPersonIDSaltChanges;	// IMP=0x0010000000009577
- (void)primaryCloudKitAccountPersonIDSaltDidFailToSetWithError:(id)arg1;	// IMP=0x001000000000908a
- (void)primaryCloudKitAccountPersonIDSaltDidSetWithSalt:(id)arg1;	// IMP=0x0010000000008994
- (id)unsafeUntilSystemReady_hashedAccountPersonIDForAccount:(id)arg1 usingSalt:(id)arg2;	// IMP=0x0010000000008592
- (void)pq_unregisterForBuddy;	// IMP=0x0010000000008486
- (void)registerForBuddy;	// IMP=0x00100000000081ab
- (void)bootstrapSyncingOnLaunchIfSystemReady;	// IMP=0x0010000000007f0f
- (id)initWithStoreController:(id)arg1;	// IMP=0x0010000000006df7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
