//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLWeatherService : CLIntersiloService
{
    NSMutableSet *_clients;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00200000006871aa
+ (id)getSilo;	// IMP=0x001000000068709e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000687085
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000687028
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)localLocationForecastUpdatedForConditions:(id)arg1;	// IMP=0x0010000000687226
- (void)weatherForecastUpdated:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 location:(id)arg5;	// IMP=0x0010000000687220
- (void)unregisterForWeatherUpdates:(byref id)arg1;	// IMP=0x00100000006871ef
- (void)registerForWeatherUpdates:(byref id)arg1;	// IMP=0x00100000006871be
- (void)endService;	// IMP=0x00100000006871b8
- (void)beginService;	// IMP=0x00100000006871b2
- (void)dealloc;	// IMP=0x0010000000687163
- (id)init;	// IMP=0x00100000006870fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

