//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSBundle, NSString;
@protocol MKLocationProviderDelegate;

@interface NavigationLocationProvider : NSObject
{
    id <MKLocationProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000305a67
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationService:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0010000000305951
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x001000000030575a
- (void)dismissHeadingCalibrationDisplay;	// IMP=0x0010000000305754
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool shouldShiftIfNecessary;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
- (void)accuracyAuthorizationOnQueue:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0010000000305613
@property(readonly, nonatomic) long long accuracyAuthorization;
- (void)authorizationStatusOnQueue:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0010000000305513
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
- (void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003054f4
- (void)requestWhenInUseAuthorizationWithPrompt;	// IMP=0x00100000003054ee
- (void)requestWhenInUseAuthorization;	// IMP=0x00100000003054e8
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool fusionInfoEnabled;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)stopUpdatingVehicleHeading;	// IMP=0x00100000003053c2
- (void)startUpdatingVehicleHeading;	// IMP=0x00100000003053bc
- (void)stopUpdatingVehicleSpeed;	// IMP=0x00100000003053b6
- (void)startUpdatingVehicleSpeed;	// IMP=0x00100000003053b0
- (void)stopUpdatingHeading;	// IMP=0x00100000003053aa
- (void)startUpdatingHeading;	// IMP=0x00100000003053a4
- (void);	// IMP=0x001000000030539e
- (void)startUpdatingLocation;	// IMP=0x0010000000305398
- (void)_updateDebugLocationConsoleForLocation:(id)arg1;	// IMP=0x0010000000304b6f
- (id)_console;	// IMP=0x0010000000304ac7
- (void)dealloc;	// IMP=0x00100000003049e4
- (id)init;	// IMP=0x00100000003048d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLLocation *lastLocation;
@property(readonly) Class superclass;

@end
