//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MNLocation, NSString, NSTimer;
@protocol CarNavigationDisplayRateThrottleDelegate;

@interface CarNavigationDisplayRateThrottle : NSObject
{
    long long _temporaryDisplayRate;	// 8 = 0x8
    long long _lastCalculatedDisplayRate;	// 16 = 0x10
    NSString *_lastCalculatedDisplayRateReason;	// 24 = 0x18
    MNLocation *_latestMovingLocation;	// 32 = 0x20
    NSTimer *_temporaryDisplayRateTimer;	// 40 = 0x28
    NSTimer *_idleTimer;	// 48 = 0x30
    long long _initialBatchedDisplayRate;	// 56 = 0x38
    long long _finalBatchedDisplayRate;	// 64 = 0x40
    unsigned long long _batchingUpdates;	// 72 = 0x48
    _Bool _enabled;	// 80 = 0x50
    _Bool _idle;	// 81 = 0x51
    id <CarNavigationDisplayRateThrottleDelegate> _delegate;	// 88 = 0x58
    MKMapView *_mapView;	// 96 = 0x60
    CDStruct_d3cf2d55 _settings;	// 104 = 0x68
}

+ (void)_clearAllSettings;	// IMP=0x002000000022d78e
+ (id)_defaultSettings;	// IMP=0x001000000022c484
+ (_Bool)isAvailable;	// IMP=0x001000000022c46d
+ (void)initialize;	// IMP=0x001000000022c3da
- (void).cxx_destruct;	// IMP=0x002000000022ec7f
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) CDStruct_d3cf2d55 settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <CarNavigationDisplayRateThrottleDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_descriptionComponentsForSettings:(CDStruct_d3cf2d55)arg1;	// IMP=0x001000000022e1fb
@property(readonly, copy) NSString *description;
- (void)_readFromDefaults;	// IMP=0x001000000022da03
- (void)clearAllSettings;	// IMP=0x001000000022d758
- (void)_checkForRecentMovement;	// IMP=0x001000000022d5df
- (_Bool)_isLocationStationary:(id)arg1;	// IMP=0x001000000022d59d
- (void)_cancelWaitForNoMovement;	// IMP=0x001000000022d544
- (void)_waitForNoMovement;	// IMP=0x001000000022d3d2
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x001000000022d35e
- (void)_notifyAfterChanges:(CDUnknownBlockType)arg1;	// IMP=0x001000000022d1c1
- (void)_notifyDelegateOfDisplayRate:(long long)arg1;	// IMP=0x001000000022d159
- (void)_rememberNewDisplayRate:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000022cfee
- (void)setTemporaryDisplayRate:(long long)arg1 forDuration:(double)arg2;	// IMP=0x001000000022ce36
- (double)_scaleFactorWithValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3;	// IMP=0x001000000022ce13
- (long long)calculateThrottledDisplayRate;	// IMP=0x001000000022c8b5
- (void)setSettings:(CDStruct_d3cf2d55)arg1;	// IMP=0x001000000022c856
- (id)init;	// IMP=0x001000000022c579
- (void)dealloc;	// IMP=0x001000000022c491

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
