//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarDestinationsCardViewController, CarMapTrackingController, NGChromeViewController, NSArray, NSString, UIScrollView;

@interface CarDestinationsModeController : NSObject
{
    NGChromeViewController *_chromeViewController;	// 8 = 0x8
    CarDestinationsCardViewController *_destinationsCard;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000663bfd
@property(retain, nonatomic) CarDestinationsCardViewController *destinationsCard; // @synthesize destinationsCard=_destinationsCard;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
- (void)destinationsCard:(id)arg1 didSelectRecent:(id)arg2;	// IMP=0x0010000000663587
- (void)destinationsCard:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x0010000000663511
- (void)destinationsCardDidSelectSavedPlaces:(id)arg1;	// IMP=0x00100000006634cd
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000663312
- (id)desiredCards;	// IMP=0x00100000006632ab
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsMapView;	// IMP=0x0010000000663290
- (id)mapView;	// IMP=0x0010000000663240
- (id)init;	// IMP=0x00100000006631d7

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
