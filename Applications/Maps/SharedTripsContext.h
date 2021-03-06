//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSharedNavState, MISSING_TYPE, MKMapView, MapCameraController, NSArray, NSString, PersonalizedItemManager, RouteAnnotationsController, SearchPinsManager, SharedTripsAnnotationsController;

@interface SharedTripsContext : NSObject
{
    NSString *_selectedTripID;	// 8 = 0x8
    MapCameraController *_cameraController;	// 16 = 0x10
    MKMapView *_mapView;	// 24 = 0x18
    PersonalizedItemManager *_personalizedItemManager;	// 32 = 0x20
    RouteAnnotationsController *_routeAnnotationsController;	// 40 = 0x28
    SharedTripsAnnotationsController *_sharedTripsAnnotationsController;	// 48 = 0x30
    SearchPinsManager *_searchPinsManager;	// 56 = 0x38
    NSArray *_sharedTrips;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000086343d
@property(readonly, nonatomic) NSArray *sharedTrips; // @synthesize sharedTrips=_sharedTrips;
@property(readonly, nonatomic) SearchPinsManager *searchPinsManager; // @synthesize searchPinsManager=_searchPinsManager;
@property(readonly, nonatomic) SharedTripsAnnotationsController *sharedTripsAnnotationsController; // @synthesize sharedTripsAnnotationsController=_sharedTripsAnnotationsController;
@property(readonly, nonatomic) RouteAnnotationsController *routeAnnotationsController; // @synthesize routeAnnotationsController=_routeAnnotationsController;
@property(readonly, nonatomic) PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) MapCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;	// IMP=0x00100000008633e5
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;	// IMP=0x00100000008633d3
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;	// IMP=0x0010000000863308
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;	// IMP=0x00100000008632f6
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;	// IMP=0x00100000008632e4
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;	// IMP=0x00100000008632d2
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;	// IMP=0x00100000008632c0
- (void)sharedTripServiceDidUpdateReceivingAvailability:(id)arg1;	// IMP=0x00100000008632ae
- (void)presentErrorForUnsupportedProtocolOrTransportWithTrip:(id)arg1;	// IMP=0x0010000000863299
- (void)presentErrorForChinaTrip:(id)arg1;	// IMP=0x0010000000863284
- (void)presentDetailsForSelectedTrip;	// IMP=0x001000000086326f
@property(retain, nonatomic) GEOSharedNavState *selectedTrip;
- (void)_updateSharedTrips;	// IMP=0x0010000000862ae0
- (void)_updateEverything;	// IMP=0x0010000000862a5c
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000862a54
- (MISSING_TYPE *)dismiss;	// IMP=0x0010000000862a4e
- (void)resignCurrent:(_Bool)arg1;	// IMP=0x00100000008629c9
- (void)becomeCurrent:(_Bool)arg1;	// IMP=0x0010000000862845
- (void)recenterOnRouteAnimated:(_Bool)arg1;	// IMP=0x00100000008627f9
- (_Bool)shouldShowRoute;	// IMP=0x0010000000862786
- (_Bool)showsMapView;	// IMP=0x001000000086277e
- (void)dealloc;	// IMP=0x00100000008626cc
- (id)initWithInitialSelectedSharedTrip:(id)arg1;	// IMP=0x00100000008625a3
- (id)init;	// IMP=0x00100000008624a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

