//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarAlertViewController, CarMapTrackingController, NGChromeViewController, NSArray, NSString;

@interface CarIncompatibleNavigationModeController : NSObject
{
    CarAlertViewController *_viewController;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009934ab
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000992f06
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000992eea
- (id)fullscreenViewControllerDismissalTransition;	// IMP=0x0010000000992eb2
- (id)fullscreenViewControllerPresentationTransition;	// IMP=0x0010000000992e7a
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000992e72
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
- (_Bool)showsMapView;	// IMP=0x0010000000992e62
- (_Bool)showsNavigationBar;	// IMP=0x0010000000992e5a
- (id)fullscreenViewController;	// IMP=0x0010000000992e4c
- (id)init;	// IMP=0x0010000000992dae

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
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
