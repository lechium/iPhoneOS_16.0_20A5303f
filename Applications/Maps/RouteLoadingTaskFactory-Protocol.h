//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOCountryConfiguration, NSArray, NSSet, WaypointSet;
@protocol RouteLoadingTask, RouteUpdatingTask;

@protocol RouteLoadingTaskFactory <NSObject>
@property(nonatomic) unsigned long long initiator;
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration;
@property(readonly, copy, nonatomic) NSSet *supportedTransportTypes;
- (id <RouteUpdatingTask>)taskForRoutes:(NSArray *)arg1;
- (id <RouteLoadingTask>)taskForTransportType:(long long)arg1 waypointSet:(WaypointSet *)arg2;
@end
