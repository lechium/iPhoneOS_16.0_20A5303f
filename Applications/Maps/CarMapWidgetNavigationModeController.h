//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapTrackingController, CarMapWidgetETACardViewController, NGChromeViewController, NSArray, NSMutableSet, NSString, NSTimer;

@interface CarMapWidgetNavigationModeController : NSObject
{
    long long _mirroredCameraStyle;	// 8 = 0x8
    CarMapWidgetETACardViewController *_etaCard;	// 16 = 0x10
    NSTimer *_alertDismissTimer;	// 24 = 0x18
    NSMutableSet *_invalidatedAlertIds;	// 32 = 0x20
    _Bool _hasArrived;	// 40 = 0x28
    _Bool _hasETAInfo;	// 41 = 0x29
    _Bool _observingCameraStyle;	// 42 = 0x2a
    NGChromeViewController *_chromeViewController;	// 48 = 0x30
    long long _cameraStyle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000207c90
@property(nonatomic) _Bool observingCameraStyle; // @synthesize observingCameraStyle=_observingCameraStyle;
@property(nonatomic) _Bool hasETAInfo; // @synthesize hasETAInfo=_hasETAInfo;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(nonatomic) long long cameraStyle; // @synthesize cameraStyle=_cameraStyle;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000207b89
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x0010000000207b77
- (void)_cancelAlertDismissTimer;	// IMP=0x0010000000207b45
- (void)_dismissAlertIfNeeded:(id)arg1 withResponse:(CDUnknownBlockType)arg2;	// IMP=0x001000000020797e
- (void)_trafficAlertVisibilityChanged:(id)arg1;	// IMP=0x00100000002077b5
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0010000000207709
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x001000000020763e
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000002073a1
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000207340
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_updateDisplayETA;	// IMP=0x00100000002071b1
- (void)refreshCameraTypeAnimated:(_Bool)arg1;	// IMP=0x00100000002070bf
- (void)setCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000020709e
- (id)personalizedItemSources;	// IMP=0x0010000000206f5e
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000206efd
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000206d7a
- (id)desiredCards;	// IMP=0x0010000000206cdb
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000206ac3
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000020665c
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
- (_Bool)showsMapView;	// IMP=0x00100000002064e5
- (id)mapView;	// IMP=0x0010000000206495
- (id)init;	// IMP=0x0010000000206420
- (void)dealloc;	// IMP=0x0010000000206352

// Remaining properties
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

