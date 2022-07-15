//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOArrivalTimeAndDistanceInfo, GEOComposedRoute, GEOComposedRouteTraffic, GEOComposedWaypoint, GEOLocation, NSData, NSString;

@protocol GEONavigationServerPushStateXPCInterface <NSObject>
- (void)setCurrentRoadName:(NSString *)arg1;
- (void)setNavigationVoiceVolumeWithData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(NSData *)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(NSData *)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(NSData *)arg1;
- (void)setRouteSummaryWithStepIndexData:(NSData *)arg1;
- (void)setLocation:(GEOLocation *)arg1 routeMatchedCoordinate:(CDStruct_f48a8b00)arg2;
- (void)setRouteSummaryWithActiveRouteDetailsData:(NSData *)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(NSData *)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(NSData *)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(NSData *)arg1;
- (void)setETAUpdate:(GEOArrivalTimeAndDistanceInfo *)arg1;
- (void)setResumedNavigatingFromWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setArrivedAtWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)updateTrafficForCurrentRoute:(GEOComposedRouteTraffic *)arg1;
- (void)setRoute:(GEOComposedRoute *)arg1;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 isResumingMultipointRoute:(_Bool)arg3;
@end
