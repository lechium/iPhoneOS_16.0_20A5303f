//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, NearbyTransitFeatureDiscoveryDataStore;
@protocol OS_dispatch_queue;

@interface NearbyTransitFeatureDiscoverySource : NSObject
{
    NSObject<OS_dispatch_queue> *_mapsSuggestionsHomeFeatureDiscoveryQueue;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _showFeature;	// 17 = 0x11
    _Bool _addedFavorite;	// 18 = 0x12
    _Bool _recordedSession;	// 19 = 0x13
    _Bool _transitUserHere;	// 20 = 0x14
    _Bool _shouldForceTransitUser;	// 21 = 0x15
    _Bool _hasInitialData;	// 22 = 0x16
    GEOObserverHashTable *_observers;	// 24 = 0x18
    NearbyTransitFeatureDiscoveryDataStore *_dataStore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001eb9e2
@property(nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool shouldForceTransitUser; // @synthesize shouldForceTransitUser=_shouldForceTransitUser;
@property(nonatomic, getter=isTransitUserHere) _Bool transitUserHere; // @synthesize transitUserHere=_transitUserHere;
@property(retain, nonatomic) NearbyTransitFeatureDiscoveryDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic, getter=hasRecordedSession) _Bool recordedSession; // @synthesize recordedSession=_recordedSession;
@property(nonatomic, getter=hasAddedFavorite) _Bool addedFavorite; // @synthesize addedFavorite=_addedFavorite;
@property(nonatomic, getter=shouldShowFeature) _Bool showFeature; // @synthesize showFeature=_showFeature;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)shortcutManagerMeCardDidChange:(id)arg1;	// IMP=0x00100000001eb964
- (id)discoveryModelWithActionHandler:(CDUnknownBlockType)arg1 displayHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001eb2b4
- (void)dismissedTipNotification;	// IMP=0x00100000001eb25c
- (_Bool)hasDismissedNotificationRecently;	// IMP=0x00100000001eb15f
- (unsigned long long)_daysSinceDate:(id)arg1;	// IMP=0x00100000001eb08f
- (_Bool)hasUserIgnoredTipTooMuch;	// IMP=0x00100000001eaf17
- (void)_updateIsTransitUserHere;	// IMP=0x00100000001eabd1
- (void)_checkForExistingNearbyTransitFavorite;	// IMP=0x00100000001ea97a
- (_Bool)_shouldShowNearbyTransitBanner;	// IMP=0x00000000001ea929
- (void)updateFeatureAvailabilityIfNecessary;	// IMP=0x00100000001ea7f6
- (void)_updateShouldShowFeature;	// IMP=0x00100000001ea64a
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000001ea622
@property(readonly, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
- (_Bool)_isUserEligibleForNotification;	// IMP=0x00100000001ea36d
- (id)initWithDataStore:(id)arg1;	// IMP=0x00100000001ea209
- (id)init;	// IMP=0x00100000001ea1c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

