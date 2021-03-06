//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, GEOObserverHashTable, NSString, NSTimer, TrafficIncidentLayout;

@interface TrafficIncidentLayoutManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    int _formType;	// 16 = 0x10
    TrafficIncidentLayout *_incidentLayout;	// 24 = 0x18
    NSTimer *_layoutRefreshTimer;	// 32 = 0x20
    CARSessionStatus *_carSessionStatus;	// 40 = 0x28
}

+ (long long)creationPreference;	// IMP=0x002000000078bf53
+ (id)sharedInstance;	// IMP=0x001000000078bee9
- (void).cxx_destruct;	// IMP=0x002000000078c967
@property(retain, nonatomic) CARSessionStatus *carSessionStatus; // @synthesize carSessionStatus=_carSessionStatus;
@property(nonatomic) int formType; // @synthesize formType=_formType;
@property(retain, nonatomic) NSTimer *layoutRefreshTimer; // @synthesize layoutRefreshTimer=_layoutRefreshTimer;
@property(retain, nonatomic) TrafficIncidentLayout *incidentLayout; // @synthesize incidentLayout=_incidentLayout;
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000078c899
- (void)removeObserver:(id)arg1;	// IMP=0x001000000078c827
- (void)addObserver:(id)arg1;	// IMP=0x001000000078c7b5
- (id)observers;	// IMP=0x001000000078c744
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000078c671
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000078c66b
- (void)_invalidateCachedLayoutIfNeeded;	// IMP=0x001000000078c5d2
- (_Bool)_shouldInvalidateLayout;	// IMP=0x001000000078c552
- (void)stopPeriodicRefresh;	// IMP=0x001000000078c4f8
- (void)startPeriodicRefresh;	// IMP=0x001000000078c47e
- (_Bool)isIncidentTypeDisplayedOnMap:(int)arg1;	// IMP=0x001000000078c42b
- (_Bool)containsGEOTrafficIncidentType:(int)arg1;	// IMP=0x001000000078c3d8
- (_Bool)containsVKTrafficIncidentType:(long long)arg1;	// IMP=0x001000000078c3a1
- (void)fetchTrafficIncidentsLayout:(CDUnknownBlockType)arg1;	// IMP=0x001000000078c12e
- (id)currentIncidentsLayout;	// IMP=0x001000000078c118
@property(readonly, nonatomic, getter=isIncidentReportingEnabled) _Bool incidentReportingEnabled;
- (void)dealloc;	// IMP=0x001000000078beab
- (id)initWithFormType:(int)arg1;	// IMP=0x001000000078bd7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

