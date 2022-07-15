//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLLocationManager, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSString, PDCardFileManager, PDDatabaseManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, SBSCardItemsController;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, PDRelevantPassProviderDelegate;

@interface PDRelevantPassProvider : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDCardFileManager *_cardFileManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_relevancySerialQueue;	// 24 = 0x18
    _Bool _startedObservingEvents;	// 32 = 0x20
    NSMutableDictionary *_pendingUpdates;	// 40 = 0x28
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 48 = 0x30
    CLLocationManager *_proximityManager;	// 56 = 0x38
    int _authorizationStatus;	// 64 = 0x40
    CLLocationManager *_backingManager;	// 72 = 0x48
    int _passbookAuthorizationStatus;	// 80 = 0x50
    CLLocation *_lastLocation;	// 88 = 0x58
    CLLocation *_roughLocation;	// 96 = 0x60
    NSDate *_locationSearchStartDate;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_locationSearchTimeout;	// 112 = 0x70
    int _locationSearchState;	// 120 = 0x78
    NSObject<OS_os_transaction> *_locationSearchTransaction;	// 128 = 0x80
    long long _locationSearchMode;	// 136 = 0x88
    NSArray *_lastBeacons;	// 144 = 0x90
    NSObject<OS_dispatch_source> *_beaconSearchTimeout;	// 152 = 0x98
    int _beaconSearchState;	// 160 = 0xa0
    NSObject<OS_os_transaction> *_beaconSearchTransaction;	// 168 = 0xa8
    unsigned long long _lastBacklightLevel;	// 176 = 0xb0
    NSMutableSet *_dateRelevantCards;	// 184 = 0xb8
    NSMutableSet *_proxPendingCards;	// 192 = 0xc0
    SBSCardItemsController *_cardItemsController;	// 200 = 0xc8
    NSArray *_currentRelevantPassInfo;	// 208 = 0xd0
    PDNotificationStreamManager *_notificationManager;	// 216 = 0xd8
    id <PDRelevantPassProviderDelegate> _delegate;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00200000000f1953
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(nonatomic) __weak id <PDRelevantPassProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000000f1715
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000f14c0
- (void)locationManager:(id)arg1 didFailRangingBeaconsForConstraint:(id)arg2 error:(id)arg3;	// IMP=0x00100000000f1364
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 satisfyingConstraint:(id)arg3;	// IMP=0x00100000000f1263
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x00100000000f113e
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000000f100a
- (_Bool)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1;	// IMP=0x00100000000f0f52
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000000f0de0
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00100000000f0d48
- (void)_sendGroups:(id)arg1;	// IMP=0x00100000000f038b
- (_Bool)_findMatchingLocation:(id *)arg1 beacon:(id *)arg2 forCandidatePass:(id)arg3 passStyleRadius:(double)arg4 usingNearbyLocations:(id)arg5;	// IMP=0x00100000000ef31e
- (void)_updateAndSendRelevantCards;	// IMP=0x00100000000ee904
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forBeacon:(id)arg3;	// IMP=0x00100000000ee875
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3;	// IMP=0x00100000000ee7e6
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3;	// IMP=0x00100000000ee757
- (id)_groupForPass:(id)arg1 inGroups:(id)arg2;	// IMP=0x00100000000ee629
- (_Bool)_proxPendingPassExistsWithBeacon;	// IMP=0x00100000000ee4a9
- (_Bool)_proxPendingPassExistsWithLocation;	// IMP=0x00100000000ee2ed
- (void)_addDateRelevantAndLocationPendingCardsForStyle:(long long)arg1 locationAvailable:(_Bool)arg2;	// IMP=0x00100000000edd12
- (void)_clearBeaconSearchTimer;	// IMP=0x00100000000edcd3
- (void)_beginBeaconSearchTimer;	// IMP=0x00100000000edaae
- (void)_stopBeaconSearch;	// IMP=0x00100000000ed9ab
- (void)_handleNewBeacons:(id)arg1;	// IMP=0x00100000000ed89b
- (_Bool)_isDoingBeaconSearch;	// IMP=0x00100000000ed88b
- (void)_startBeaconSearchIfNecessary;	// IMP=0x00100000000ed760
- (void)_clearLocationSearchTimer;	// IMP=0x00100000000ed72a
- (void)_beginLocationSearchTimeout;	// IMP=0x00100000000ed51a
- (void)_stopLocationSearch;	// IMP=0x00100000000ed43a
- (_Bool)_isDoingLocationSearch;	// IMP=0x00100000000ed42d
- (_Bool)_handleNewLocation:(id)arg1 forceAcceptance:(_Bool)arg2 from:(id)arg3;	// IMP=0x00100000000ed228
- (void)_startLocationSearchIfNecessaryWithSearchMode:(long long)arg1;	// IMP=0x00100000000ecff4
- (void)_unscheduleEagerRecalculation;	// IMP=0x00100000000ecdbd
- (void)_scheduleEagerRecalculationWithPasses:(id)arg1 fenceLocation:(_Bool)arg2 minRadius:(double)arg3 beaconUUIDs:(id)arg4;	// IMP=0x00100000000ec230
- (_Bool)_shouldScheduleEagerRecalculation;	// IMP=0x00100000000ec216
- (void)_clearPersistedProximityInfo;	// IMP=0x00100000000ebf19
- (void)_loadPersistedLocationInfoIfNecessary;	// IMP=0x00100000000eb939
- (void)_reallyStartCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x00100000000eb59d
- (long long)updateTypeFromCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x00100000000eb57e
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x00100000000eb2ba
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2;	// IMP=0x00100000000eb2a2
- (void)_tearDownExitFenceTimerFired;	// IMP=0x00100000000eb211
- (void)_relevantCardExpirationTimerFired;	// IMP=0x00100000000eb18f
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000000eb112
- (void)requestWhenInUseAuthorizationIfNeeded;	// IMP=0x00100000000eb0a5
@property(readonly, nonatomic) NSArray *currentRelevantPassInfo;
- (void)handleSignificantTimeChangedEvent;	// IMP=0x00100000000eaf0c
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;	// IMP=0x00100000000eae29
- (void)startObservingEvents;	// IMP=0x00100000000eabb4
- (void)dealloc;	// IMP=0x00100000000eab3b
- (id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2 notificationManager:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000000ea89f
- (id)init;	// IMP=0x00100000000ea891

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
