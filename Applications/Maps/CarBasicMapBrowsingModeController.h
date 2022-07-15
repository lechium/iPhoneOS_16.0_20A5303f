//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapTrackingController, NGChromeViewController, NSArray, NSString;

@interface CarBasicMapBrowsingModeController : NSObject
{
    _Bool _didSetInitialTracking;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
    CarMapTrackingController *_trackingController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000960be8
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000960b22
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000009608ee
- (_Bool)showsMapView;	// IMP=0x00100000009608e6
- (void)setMapCamera:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009607a5
- (void)setVisibleMapRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009605f2
- (void)setInitialTrackingIfNeededAndPossible;	// IMP=0x00100000009603f6
@property(readonly, nonatomic) CarMapTrackingController *trackingController; // @synthesize trackingController=_trackingController;
- (id)mapView;	// IMP=0x001000000096036b
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x00100000009602fc

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id visuallySelectedItem;
// Error: Property attributes should begin with the type ('T') attribute, property name: zoomInButtonPressed
// Property attributes: (null)

@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
