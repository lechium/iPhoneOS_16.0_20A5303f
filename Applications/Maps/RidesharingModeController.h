//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSChromeViewController, MKMapItem, NSString, RideBookingRideOption, RidesharingContainerViewController, StatusBarBackgroundViewStyle, UIView;
@protocol MapSelectionManagerDelegate, RidesharingCoordination, StatusBarSupplementaryView;

@interface RidesharingModeController : NSObject
{
    id <RidesharingCoordination> _ridebookingCoordinator;	// 8 = 0x8
    RidesharingContainerViewController *_containerViewController;	// 16 = 0x10
    IOSChromeViewController *_chromeViewController;	// 24 = 0x18
    NSString *_applicationIdentifier;	// 32 = 0x20
    RideBookingRideOption *_rideOption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000922057
@property(retain, nonatomic) RideBookingRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) __weak IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (id)mapViewDelegate;	// IMP=0x0010000000921f35
- (_Bool)showsMapView;	// IMP=0x0010000000921f2d
- (id)fullscreenViewControllerDismissalTransition;	// IMP=0x0010000000921f14
- (id)fullscreenViewControllerPresentationTransition;	// IMP=0x0010000000921efb
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000921da0
- (void)_setupMapView;	// IMP=0x0010000000921d07
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000921c7f
@property(readonly, nonatomic) UIView *passThroughView;
- (id)fullscreenViewController;	// IMP=0x0010000000921bba
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000921b5d
- (id)initWithRideOption:(id)arg1;	// IMP=0x0010000000921b03
- (id)init;	// IMP=0x0010000000921a51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapItem *mapItemForLookAroundButton;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly) Class superclass;

@end
