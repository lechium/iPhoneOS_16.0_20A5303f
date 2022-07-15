//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, MNLocation, NSArray, NSDictionary, NSString;
@protocol NavCameraNavigationDelegate;

@interface NavCameraNavigationServiceProvider : NSObject
{
    id <NavCameraNavigationDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004c87aa
@property(nonatomic) __weak id <NavCameraNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x00100000004c86fa
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x00100000004c8664
- (void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;	// IMP=0x00100000004c85db
- (void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x00100000004c856e
- (void)navigationService:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000004c850e
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000004c84ae
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00100000004c8439
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00100000004c83e8
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000004c8380
@property(readonly, nonatomic) NSDictionary *alternateRouteTraffics;
@property(readonly, nonatomic) NSArray *alternateRoutes;
@property(readonly, nonatomic) double timeUntilManeuver;
@property(readonly, nonatomic) double distanceUntilManeuver;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) unsigned long long displayedStepIndex;
@property(readonly, nonatomic) unsigned long long stepIndex;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) _Bool isInNavigatingState;
- (id)init;	// IMP=0x00100000004c7ddf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
