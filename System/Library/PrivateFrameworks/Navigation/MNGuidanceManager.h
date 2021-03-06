//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent, GEOComposedRoute, GEOComposedWaypoint, MNAnnouncementEngine, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : NSObject
{
    MNAnnouncementEngine *_announcementEngine;	// 8 = 0x8
    NSMutableDictionary *_announcementsSpoken;	// 16 = 0x10
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;	// 24 = 0x18
    NSMutableDictionary *_specialSpokenEvents;	// 32 = 0x20
    NSMutableDictionary *_specialSignEvents;	// 40 = 0x28
    NSMutableDictionary *_specialAREvents;	// 48 = 0x30
    GEOComposedRoute *_route;	// 56 = 0x38
    NSMutableArray *_events;	// 64 = 0x40
    NSDictionary *_eventIndexes;	// 72 = 0x48
    GEOComposedGuidanceEvent *_nextEvent;	// 80 = 0x50
    _Bool _hasBeenOnRouteOnce;	// 88 = 0x58
    _Bool _canSpeakReturnToRouteAnnouncement;	// 89 = 0x59
    double _timeLastAnnouncementStarted;	// 96 = 0x60
    double _timeLastAnnouncementEnded;	// 104 = 0x68
    _Bool _hasPersistentEvents;	// 112 = 0x70
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;	// 120 = 0x78
    NSMutableDictionary *_hapticsTriggered;	// 128 = 0x80
    MNGuidanceSignInfo *_signInfo;	// 136 = 0x88
    NSArray *_arEvents;	// 144 = 0x90
    NSArray *_previousSignEvents;	// 152 = 0x98
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;	// 160 = 0xa0
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;	// 168 = 0xa8
    MNJunctionViewImageLoader *_junctionViewImageLoader;	// 176 = 0xb0
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;	// 184 = 0xb8
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;	// 192 = 0xc0
    MNLocation *_location;	// 200 = 0xc8
    double _speed;	// 208 = 0xd0
    NSMutableArray *_validEvents;	// 216 = 0xd8
    NSMutableDictionary *_feedback;	// 224 = 0xe0
    _Bool _isInPreArrivalState;	// 232 = 0xe8
    _Bool _shouldShowChargingInfo;	// 233 = 0xe9
    id <MNGuidanceManagerDelegate> _delegate;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000079a72
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool shouldShowChargingInfo; // @synthesize shouldShowChargingInfo=_shouldShowChargingInfo;
@property(nonatomic) _Bool isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timeManagerDidChangeProvider:(id)arg1;	// IMP=0x00000000000799c6
- (unsigned long long)_trafficColorForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000797f8
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;	// IMP=0x0000000000078dd2
- (double)durationOfAnnouncement:(id)arg1;	// IMP=0x0000000000078d57
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;	// IMP=0x0000000000078a9c
- (double)_distanceToEndOfRoute;	// IMP=0x0000000000078a11
- (double)_distanceToManeuverStart;	// IMP=0x000000000007893f
- (double)_distanceToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x00000000000788c6
- (double)_timeUntilEventTrigger:(id)arg1;	// IMP=0x00000000000787ab
- (double)timeUntilNextAnnouncement;	// IMP=0x000000000007877d
- (double)timeSinceLastAnnouncement;	// IMP=0x0000000000078754
- (double)_timeRemainingForEvent:(id)arg1;	// IMP=0x00000000000786af
- (int)_indexForEventUUID:(id)arg1;	// IMP=0x00000000000784ea
- (_Bool)_isEVChargingEvent:(id)arg1;	// IMP=0x000000000007841b
- (_Bool)_isValidEvent:(id)arg1;	// IMP=0x00000000000781b7
- (double)_adjustedVehicleSpeed;	// IMP=0x0000000000078138
- (void)_markEventSpoken:(id)arg1;	// IMP=0x0000000000078031
- (_Bool)_eventWasSpoken:(id)arg1;	// IMP=0x0000000000077f55
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;	// IMP=0x0000000000077df8
- (_Bool)_isInArrivalState;	// IMP=0x0000000000077d6a
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x0000000000077d51
- (id)_junctionViewEvents;	// IMP=0x0000000000077b7d
- (void)_handleJunctionViewInfo:(id)arg1;	// IMP=0x0000000000077837
- (id)_nextJunctionViewGuidanceEvent;	// IMP=0x00000000000776c7
- (void)_considerJunctionViewGuidance;	// IMP=0x0000000000077135
- (_Bool)_hasPersistentEvents;	// IMP=0x0000000000076ffd
- (void)_considerPersistence;	// IMP=0x0000000000076fa6
- (double)_headingForArEvent:(id)arg1;	// IMP=0x0000000000076d75
- (int)_maneuverTypeForAREvent:(id)arg1;	// IMP=0x0000000000076b4d
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x0000000000076a8e
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;	// IMP=0x00000000000767be
- (id)_closestContinueAREventToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x00000000000765ec
- (id)_validEventsForARGuidance;	// IMP=0x0000000000075d81
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;	// IMP=0x0000000000074d4c
- (void)_considerARGuidance;	// IMP=0x00000000000749ca
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(_Bool)arg2 shouldOverridePrimaryDistances:(_Bool)arg3 distance:(out double *)arg4;	// IMP=0x000000000007438d
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;	// IMP=0x0000000000074131
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x0000000000073fd4
- (id)_validEventsForSignGuidance:(out _Bool *)arg1;	// IMP=0x0000000000073ab5
- (void)_considerSignGuidance;	// IMP=0x000000000007363b
- (id)_nextLaneGuidanceEvent;	// IMP=0x000000000007349f
- (void)_considerLaneGuidance;	// IMP=0x0000000000072f51
- (void)_considerHaptics;	// IMP=0x0000000000072c07
- (id)_durationsForEvent:(id)arg1;	// IMP=0x0000000000072908
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;	// IMP=0x00000000000727b0
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(_Bool)arg4 waypoints:(id)arg5;	// IMP=0x0000000000072655
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinWaypointCategory:(int)arg3 selectedWaypointCategory:(out int *)arg4 waypoints:(id)arg5;	// IMP=0x0000000000071eed
- (void)_notifySpeechEvent:(id)arg1 waypointCategory:(int)arg2 ignorePromptStyle:(_Bool)arg3;	// IMP=0x0000000000071615
- (id)_spokenEventsRemainingInStep;	// IMP=0x0000000000071234
- (void)_planAnnouncements;	// IMP=0x000000000007061b
- (void)_repeatSpokenEvent:(id)arg1;	// IMP=0x000000000007058c
- (_Bool)_considerOtherSpecialAnnouncementsForLocation:(id)arg1;	// IMP=0x000000000007042c
- (_Bool)_considerArrivalAnnouncementsForLocation:(id)arg1;	// IMP=0x0000000000070267
- (_Bool)_considerChargingAnnouncementsForLocation:(id)arg1;	// IMP=0x000000000006ffc6
- (_Bool)_considerGetOnRouteAnnouncementsForLocation:(id)arg1;	// IMP=0x000000000006fe6a
- (_Bool)_considerStartingAnnouncementsForLocation:(id)arg1;	// IMP=0x000000000006fd4e
- (void)_considerAnnouncements;	// IMP=0x000000000006fc12
- (void)_filterValidEvents;	// IMP=0x000000000006fa70
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;	// IMP=0x000000000006f857
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;	// IMP=0x000000000006f6fe
- (void)updateDestination:(id)arg1;	// IMP=0x000000000006f66a
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;	// IMP=0x000000000006f2db
- (void)stop;	// IMP=0x000000000006f247
@property(readonly, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property(readonly, nonatomic) NSArray *events;
- (void)_resetLastAnnouncementTime;	// IMP=0x000000000006ee9a
- (void)reset;	// IMP=0x000000000006e9c5
- (void)dealloc;	// IMP=0x000000000006e950
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;	// IMP=0x000000000006e4f8
- (id)initWithRouteInfo:(id)arg1 andIsReconnecting:(_Bool)arg2 announcementsToIgnore:(id)arg3;	// IMP=0x000000000006dffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

