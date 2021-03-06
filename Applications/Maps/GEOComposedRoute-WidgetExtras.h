//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRoute.h>

@class GEOComposedRouteAdvisory, GEOComposedRouteStep, NSArray, NSData, NSDate;

@interface GEOComposedRoute (WidgetExtras)
- (unsigned long long)mapType;	// IMP=0x001000000030d2de
@property(readonly, nonatomic) NSData *rideSelectionsAsNSData;
- (id)rapDestinationTitle;	// IMP=0x001000000031de7a
- (_Bool)isLegIndexOfLastLeg:(unsigned long long)arg1;	// IMP=0x001000000039c849
- (id)chargingStationInfos;	// IMP=0x001000000039c65a
- (id)waypointsAfterStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long *)arg2;	// IMP=0x00100000003bf547
- (id)waypointsAfterStepIndex:(unsigned long long)arg1;	// IMP=0x00100000003bf533
@property(readonly, nonatomic) NSArray *steppingSigns;
- (id)_signForTransitTripStep:(id)arg1;	// IMP=0x00100000003beea2
- (id)_signForTransitStationStep:(id)arg1;	// IMP=0x00100000003bee15
- (id)_signForWalkingStep:(id)arg1;	// IMP=0x00100000003bea61
@property(readonly, nonatomic) GEOComposedRouteStep *startRouteStep;
- (id)combinedDescriptionForFont:(id)arg1;	// IMP=0x00100000004001d0
@property(readonly, nonatomic) unsigned char tollCurrencyType;
@property(readonly, nonatomic) NSDate *transitRouteArrivalDate;
@property(readonly, nonatomic) NSArray *transitLinesOnRoute;
@property(readonly, nonatomic) GEOComposedRouteAdvisory *clickableAdvisory;
- (id)advisoriesStyleAttributes;	// IMP=0x0010000000755ad1

// Remaining properties
@property(readonly, nonatomic) _Bool avoidsTolls;
@end

