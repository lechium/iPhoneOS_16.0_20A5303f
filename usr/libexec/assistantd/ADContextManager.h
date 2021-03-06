//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADBackgroundContextCache, ADDeviceCircleManager, ADDeviceProximityManager, ADHomeAnnouncementContextAdaptor, ADLocalContextStore, ADRemoteContextStore, AFAnalytics, AFInstanceContext, AFWatchdogTimer, MISSING_TYPE, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSXPCListener;
@protocol ADContextManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADContextManager : NSObject
{
    id <ADContextManagerDelegate> _delegate;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    ADDeviceProximityManager *_deviceProximityManager;	// 24 = 0x18
    _Bool _alertContextIsDirty;	// 32 = 0x20
    _Bool _bgContextIsDirty;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_bgContextQueue;	// 40 = 0x28
    _Bool _registeredForContextUpdates;	// 48 = 0x30
    ADBackgroundContextCache *_bgContext;	// 56 = 0x38
    AFAnalytics *_analytics;	// 64 = 0x40
    unsigned long long _ignoreNowPlayingUpdatesAfterTimestamp;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_nowPlayingCoalescingTimer;	// 80 = 0x50
    NSMutableSet *_coalescedNowPlayingUpdateSources;	// 88 = 0x58
    int _deviceProblemsRegistrationToken;	// 96 = 0x60
    int _musicPersonalizationTokenRegistrationToken;	// 100 = 0x64
    ADHomeAnnouncementContextAdaptor *_homeAnnouncementContextAdaptor;	// 104 = 0x68
    NSMutableArray *_queuedContextSnapshotCompletions;	// 112 = 0x70
    NSMutableSet *_contextSnapshotsReadUUIDs;	// 120 = 0x78
    long long _contextSnapshotFetchTimedOut;	// 128 = 0x80
    NSArray *_currentContextSnapshot;	// 136 = 0x88
    NSUUID *_currentRequestInfoUUID;	// 144 = 0x90
    NSDate *_currentRequestDate;	// 152 = 0x98
    AFWatchdogTimer *_contextSnapshotTimer;	// 160 = 0xa0
    NSMutableArray *_contextHistory;	// 168 = 0xa8
    AFWatchdogTimer *_contextRefreshTimer;	// 176 = 0xb0
    NSMutableDictionary *_contextSnapshotByForeignRequestID;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_queue;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 200 = 0xc8
    AFInstanceContext *_instanceContext;	// 208 = 0xd0
    NSXPCListener *_deviceContextServiceListener;	// 216 = 0xd8
    NSMutableSet *_deviceContextConnections;	// 224 = 0xe0
    _Bool _collectingContext;	// 232 = 0xe8
    ADLocalContextStore *_localContextStore;	// 240 = 0xf0
    ADRemoteContextStore *_remoteContextStore;	// 248 = 0xf8
}

+ (_Bool)_isResumableThirdPartyGenreID:(id)arg1;	// IMP=0x00200000000dd4f2
+ (_Bool)_isResumableFirstPartyBundleID:(id)arg1;	// IMP=0x00100000000dd432
- (void).cxx_destruct;	// IMP=0x00200000000eabd5
@property(nonatomic, getter=_isCollectingContext, setter=_setCollectingContext:) _Bool collectingContext; // @synthesize collectingContext=_collectingContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <ADContextManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ADRemoteContextStore *remoteContextStore; // @synthesize remoteContextStore=_remoteContextStore;
@property(readonly, nonatomic) ADLocalContextStore *localContextStore; // @synthesize localContextStore=_localContextStore;
- (void)_enumerateDeviceContextConnectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eaaeb
- (void)_removeDeviceContextConnection:(id)arg1;	// IMP=0x00100000000eaa95
- (void)_addDeviceContextConnection:(id)arg1;	// IMP=0x00100000000eaa2f
- (void)_handleHomeAnnouncementSnapshotUpdate:(id)arg1;	// IMP=0x00100000000ea948
- (void)_updateHomeAnnouncementWithContext:(id)arg1 supplementalSnapshot:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ea479
- (void)pushMyriadAdvertismentContextToContextCollector:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9dce
- (void)_callStateDidChange:(id)arg1;	// IMP=0x00100000000e9ce8
- (_Bool)_inlineUpdatePhoneState;	// IMP=0x00100000000e9bc3
- (void)updateBackgroundContextIfNowPlayingInfoChanged;	// IMP=0x00100000000e9b3a
- (void)_reallyUpdateBackgroundContextIfNowPlayingInfoChangedForReason:(id)arg1;	// IMP=0x00100000000e9994
- (void)_updateNowPlayingInfoWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e963a
- (void)_scheduleNowPlayingRefreshForReason:(id)arg1 isPlaying:(id)arg2;	// IMP=0x00100000000e9221
- (void)_cancelNowPlayingCoalescingTimer;	// IMP=0x00100000000e91cf
- (void)nowPlayingObserverNowPlayingInfoDidChange:(id)arg1;	// IMP=0x00100000000e9098
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;	// IMP=0x00100000000e8e60
- (void)navStatusDidChange:(id)arg1;	// IMP=0x00100000000e8d7a
- (void)_updateNavStatusWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8750
- (void)updateBackgroundContextIfHomeKitInfoChanged;	// IMP=0x00100000000e866a
- (_Bool)_inlineUpdateCurrentHomeKitHome;	// IMP=0x00100000000e84dd
- (void)_updateBackgroundContextIfMusicPersonalizationTokenChanged;	// IMP=0x00100000000e8110
- (void)_updateMusicPersonalizationTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7ad3
- (void)_updateMultiUserPersonalizationTokensWithSingleUserTokenChanged:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7166
- (id)_makeUserTokenStatusWithICTokenStatus:(id)arg1 icError:(id)arg2;	// IMP=0x00100000000e6fb3
- (void)_updateSingleUserMusicPersonalizationTokenFromKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6ea1
- (void)_handleContextSnapshotPush:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e66b6
- (void)_handlePushContextMessage:(id)arg1 fromDeviceWithPeerInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e5a99
- (void)localContextStore:(id)arg1 didUpdateDeviceContext:(id)arg2;	// IMP=0x00100000000e5946
- (void)contextCollectorChangedToDevicesWithIdentifiers:(id)arg1 localDeviceIsCollector:(_Bool)arg2;	// IMP=0x00100000000e5786
- (void)deviceContextConnection:(id)arg1 donateSerializedContextMapByPrivacyClass:(id)arg2 withMetadataMap:(id)arg3 forType:(id)arg4 pushToRemote:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e5748
- (void)deviceContextConnection:(id)arg1 getLocalDeviceContextWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e572a
- (void)deviceContextConnectionDidInvalidate:(id)arg1;	// IMP=0x00100000000e567f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000e5549
- (id)_dataSourceInfoWithProximity:(long long)arg1 deviceContext:(id)arg2;	// IMP=0x00100000000e53ae
- (id)_alarmAceObjectFromAlarm:(id)arg1 withProximity:(long long)arg2 inDeviceContext:(id)arg3;	// IMP=0x00100000000e4fb8
- (id)_timerAceObjectFromTimer:(id)arg1 withProximity:(long long)arg2 inDeviceContext:(id)arg3;	// IMP=0x00100000000e4c55
- (void)_unregisterForBGUpdates;	// IMP=0x00100000000e49ff
- (void)_registerForBGUpdates;	// IMP=0x00100000000e45eb
- (void)getBackgroundContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e44a9
- (MISSING_TYPE *)preheatBackgroundContext;	// IMP=0x00100000000e440b
- (void)_getBackgroundContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e3abd
- (void)_updateSimpleThingsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e3912
- (void)_logForceFetchWithStartTime:(unsigned long long)arg1 forceFetchCount:(unsigned long long)arg2 forceFetchError:(id)arg3 halMetricsId:(id)arg4;	// IMP=0x00100000000e3775
- (void)_logForceFetchContextFailedWithHALMetricsId:(id)arg1 contextId:(id)arg2 error:(id)arg3;	// IMP=0x00100000000e34dc
- (void)_logForceFetchContextEndedWithHALMetricsId:(id)arg1 contextId:(id)arg2 forceFetchCount:(unsigned long long)arg3;	// IMP=0x00100000000e32da
- (void)_logForceFetchContextStartedWithHALMetricsId:(id)arg1 contextId:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x00100000000e30a4
- (void)_logFetchLocalContextEnded:(id)arg1;	// IMP=0x00100000000e2e77
- (void)_logFetchLocalContextStarted:(id)arg1;	// IMP=0x00100000000e2c4a
- (void)_logContextCollectorFetchFailed:(id)arg1;	// IMP=0x00100000000e2a1d
- (void)_logContextCollectorFetchEnded:(id)arg1 numDeviceContextsFetched:(unsigned long long)arg2;	// IMP=0x00100000000e27d4
- (void)_logContextCollectorFetchStarted:(id)arg1;	// IMP=0x00100000000e25a7
- (void)_stopPeriodicContextFetchFromNearbyDevices;	// IMP=0x00100000000e2547
- (void)_startPeriodicContextFetchFromNearbyDevices;	// IMP=0x00100000000e2320
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e2228
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e2222
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e1ff4
- (void)getContextSnapshotForForeignRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1ed5
- (void)pushContextSnapshotForCurrentRequestWithID:(id)arg1 toDevice:(id)arg2;	// IMP=0x00100000000e1e92
- (void)getContextSnapshotForCurrentRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e18f7
- (void)_fetchContextSnapshotForCurrentRequest;	// IMP=0x00100000000dfb68
- (void)_getDevicesWithContexts:(id)arg1 passingTest:(CDUnknownBlockType)arg2 capabilitesPassingTest:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000df63c
- (void)getDeviceContextsForKeys:(id)arg1 forForeignRequestID:(id)arg2 includesNearbyDevices:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000de8cd
- (id)localContextWithPrivacyClass:(long long)arg1;	// IMP=0x00100000000de8b4
- (void)getLocalContextWithPrivacyClass:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000de894
- (void)getContextIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 timeOut:(double)arg3 localContextCompletion:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000dd588
- (void)getContextIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 timeOut:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000dd56d
- (void)_getNowPlayingMediaIsResumable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd0c3
- (void)getNowPlayingMediaIsResumable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd01b
- (void)getDomainObjectFromMessageContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dcf03
- (void)markBulletinAsAcknolwedgedForDomainObject:(id)arg1;	// IMP=0x00100000000dcc51
- (void)getAlertContextWithBulletins:(id)arg1 externalAlarmSnapshot:(id)arg2 timerSnapshot:(id)arg3 nlAlertContextCompletion:(CDUnknownBlockType)arg4 fullAlertContextCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000dae9e
- (void)_getCurrentUserActivityOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da5ab
- (void)getAppContextForDeviceState:(long long)arg1 applicationInfos:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d92f0
- (id)_appInfoWithBundleID:(id)arg1;	// IMP=0x00100000000d9265
- (id)_filteredApplicationInfosForLockedStark:(id)arg1;	// IMP=0x00100000000d9059
- (void)clearBackgroundContextDirtyState;	// IMP=0x00100000000d904f
- (_Bool)backgroundContextIsDirty;	// IMP=0x00100000000d9046
- (void)setBackgroundContextDirty;	// IMP=0x00100000000d903c
- (void)clearAlertContextDirtyState;	// IMP=0x00100000000d9032
- (_Bool)alertContextIsDirty;	// IMP=0x00100000000d9029
- (void)setAlertContextDirty;	// IMP=0x00100000000d901f
- (void)keepReportingNowPlayingTimingEventsHeuristically;	// IMP=0x00100000000d8f69
- (void)dealloc;	// IMP=0x00100000000d8e73
- (void)_setDelegate:(id)arg1;	// IMP=0x00100000000d8d55
- (void)_initialize;	// IMP=0x00100000000d8d02
- (void)reset;	// IMP=0x00100000000d8c26
- (id)_configuredRemoteContextStoreWithRapportLink:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d8bb6
- (id)_configuredLocalContextStoreWithInstanceContext:(id)arg1 rapportLink:(id)arg2 queue:(id)arg3;	// IMP=0x00100000000d8b21
- (id)_initWithDelegate:(id)arg1 deviceCircleManager:(id)arg2 deviceProximityManager:(id)arg3;	// IMP=0x00100000000d8366
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000d82c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

