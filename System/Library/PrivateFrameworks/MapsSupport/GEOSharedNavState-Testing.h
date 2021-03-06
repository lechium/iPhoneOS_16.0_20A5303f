//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSharedNavState.h>

@class GEOSharedNavETAInfo, GEOSharedNavWaypointInfo;
@protocol GEOMapItem;

@interface GEOSharedNavState (Testing)
+ (id)preciseChicago;	// IMP=0x0020000000035d1c
+ (id)preciseSanFrancisco;	// IMP=0x0020000000035ca6
+ (id)_msp_blockedTestTripIdentifiers;	// IMP=0x0020000000035c51
+ (id)_msp_testTripsByIdentifier;	// IMP=0x0020000000035bfc
+ (_Bool)_msp_isTestTripBlockedWithIdentifier:(id)arg1;	// IMP=0x0020000000035b85
+ (_Bool)_msp_blockTestTripWithIdentifier:(id)arg1;	// IMP=0x0020000000035aae
+ (id)_msp_testTripForIdentifier:(id)arg1;	// IMP=0x0020000000035a2b
+ (void)_msp_registerTestTrip:(id)arg1;	// IMP=0x00200000000359a1
+ (id)_msp_testTripWithMultipleStopsMiddleOfTrip;	// IMP=0x0020000000035853
+ (id)_msp_testTripWithMultipleStops;	// IMP=0x00200000000353e8
+ (id)_msp_testTrip;	// IMP=0x002000000003507e
- (void)stripForSendingStoppedSharing;	// IMP=0x001000000003df3f
- (void)stripForSendingResuming;	// IMP=0x001000000003df0d
- (void)stripForSendingArrival;	// IMP=0x001000000003dece
- (void)stripForSendingUpdatedTraffic;	// IMP=0x001000000003de13
- (void)stripForSendingUpdatedETA;	// IMP=0x001000000003ddc5
- (void)stripForSendingUpdatedRoute;	// IMP=0x001000000003dd6a
- (void)stripForSendingUpdatedWaypoints;	// IMP=0x001000000003dbfd
@property(readonly, nonatomic) GEOSharedNavWaypointInfo *nextWaypointInfo;
@property(readonly, nonatomic) unsigned long long numberOfIntermediateStopsRemaining;
@property(readonly, nonatomic) GEOSharedNavETAInfo *finalETAInfo;
@property(readonly, nonatomic) GEOSharedNavETAInfo *etaInfo;
@property(readonly, nonatomic) _Bool hasEtaInfo;
- (void)stripArrivedOrClosedTrip;	// IMP=0x001000000003d71d
- (CDUnknownBlockType)equalityTest;	// IMP=0x001000000003d643
- (id)composedRouteIfExists;	// IMP=0x001000000003d632
- (id)composedRoute;	// IMP=0x001000000003cc8e
- (void)setComposedRoute:(id)arg1;	// IMP=0x001000000003cc78
- (_Bool)updateFromTraffic:(id)arg1;	// IMP=0x001000000003cadc
- (void)updateRouteInfoFromComposedRoute:(id)arg1;	// IMP=0x001000000003ca61
- (_Bool)updateWaypointsFromComposedRoute:(id)arg1;	// IMP=0x001000000003c399
- (void)truncatePointDataForPrivacy;	// IMP=0x001000000003b5b6
- (id)mspDescription;	// IMP=0x001000000003b269
- (void)merge:(id)arg1;	// IMP=0x001000000003ac76
- (id)senderNameOrHandle;	// IMP=0x001000000003ac26
- (id)senderName;	// IMP=0x001000000003ab4e
@property(readonly, nonatomic) id <GEOMapItem> destinationWaypointMapItem;
@property(readonly, nonatomic) GEOSharedNavWaypointInfo *destinationWaypointInfo;
- (id)destinationName;	// IMP=0x001000000003a9d1
- (id)instanceCompatibleWithReceiverCapabilities:(id)arg1;	// IMP=0x00100000000aecd6
- (_Bool)requiresChangesForCompatibilityWithReceiverCapabilities:(id)arg1;	// IMP=0x00100000000aebfb
@end

