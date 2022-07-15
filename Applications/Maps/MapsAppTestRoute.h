//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsAppTestRoute
{
    unsigned long long _numWaypointsLoaded;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
}

@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) unsigned long long numWaypointsLoaded; // @synthesize numWaypointsLoaded=_numWaypointsLoaded;
- (void)doAfterSubTestForDisplayingRoutes;	// IMP=0x00100000000e6455
- (void)didDisplayRoutes:(id)arg1;	// IMP=0x00100000000e6360
- (void)didEndGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;	// IMP=0x00100000000e5f86
- (void)willBeginGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;	// IMP=0x00100000000e5efd
- (void)didEndMapsPPTTest_ComposeWaypoint:(id)arg1;	// IMP=0x00100000000e5ee4
- (void)willBeginMapsPPTTest_ComposeWaypoint:(id)arg1;	// IMP=0x00100000000e5ec4
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;	// IMP=0x00100000000e5eab
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;	// IMP=0x00100000000e5e8b
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;	// IMP=0x00100000000e5e72
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;	// IMP=0x00100000000e5e52
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;	// IMP=0x00100000000e5e39
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;	// IMP=0x00100000000e5e19
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;	// IMP=0x00100000000e5e00
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;	// IMP=0x00100000000e5de0
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;	// IMP=0x00100000000e5dc7
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;	// IMP=0x00100000000e5da7
- (void)didEndGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;	// IMP=0x00100000000e5d07
- (void)willBeginGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;	// IMP=0x00100000000e5c60
- (void)didEndGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;	// IMP=0x00100000000e5bc0
- (void)willBeginGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;	// IMP=0x00100000000e5b19
- (void)didEndGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1;	// IMP=0x00100000000e5b00
- (void)willBeginGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1;	// IMP=0x00100000000e5ae0
- (void)didEndGEOPPTTest_PlaceRequest:(id)arg1;	// IMP=0x00100000000e5ac7
- (void)willBeginGEOPPTTest_PlaceRequest:(id)arg1;	// IMP=0x00100000000e5aa7
- (void)didResolveWaypointsForRouting:(id)arg1;	// IMP=0x00100000000e59a9
- (void)willResolveWaypointsForRouting:(id)arg1;	// IMP=0x00100000000e5870
- (void)_showDirectionSearchView:(id)arg1;	// IMP=0x00100000000e5512
- (void)tapOnSearchBar;	// IMP=0x00100000000e54fe
- (void)registerGEOSubtestsForRouting;	// IMP=0x00100000000e4ca4
- (void)_requestRouteWithResolvedDestination:(id)arg1;	// IMP=0x00100000000e4ac7
- (_Bool)runTest;	// IMP=0x00100000000e3e58

@end
