//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CLLocation, CLLocationManager, GEOAlmanac, NSString, NSTimer;

@interface CRNightModeFallbackManager : NSObject
{
    _Bool _nightMode;	// 8 = 0x8
    int _nightModeChangeNotificationToken;	// 12 = 0xc
    CARSessionStatus *_sessionStatus;	// 16 = 0x10
    CLLocation *_currentLocation;	// 24 = 0x18
    CLLocation *_initialTimerLocation;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    GEOAlmanac *_almanac;	// 48 = 0x30
    NSTimer *_nextNightModeChangeTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000005602
@property(retain, nonatomic) NSTimer *nextNightModeChangeTimer; // @synthesize nextNightModeChangeTimer=_nextNightModeChangeTimer;
@property(nonatomic) int nightModeChangeNotificationToken; // @synthesize nightModeChangeNotificationToken=_nightModeChangeNotificationToken;
- (int);	// IMP=0x00100000000055d5
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(retain, nonatomic) GEOAlmanac *almanac; // @synthesize almanac=_almanac;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CLLocation *initialTimerLocation; // @synthesize initialTimerLocation=_initialTimerLocation;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (id)_nextNightModeChangeDate;	// IMP=0x0010000000005268
- (_Bool)_shouldScheduleTimerForNextNightModeChange;	// IMP=0x0010000000005193
- (void)_timeDidChangeSignificantly;	// IMP=0x00100000000050e5
- (void)_handleLocationUpdateToLocation:(id)arg1;	// IMP=0x0010000000004f38
- (void)_updateNightMode;	// IMP=0x0010000000004da6
- (void)_updateNightModeForNextSunsetOrSunrise;	// IMP=0x0010000000004d09
- (_Bool)_isNightForLocation:(id)arg1;	// IMP=0x0010000000004c42
- (void)_stop;	// IMP=0x0010000000004b85
- (void)_start;	// IMP=0x0010000000004916
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000048b4
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0010000000004865
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x00100000000047b2
- (void)sessionDidConnect:(id)arg1;	// IMP=0x00100000000046ff
- (void)dealloc;	// IMP=0x00100000000046c1
- (id)initWithSessionStatus:(id)arg1;	// IMP=0x00100000000045cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
