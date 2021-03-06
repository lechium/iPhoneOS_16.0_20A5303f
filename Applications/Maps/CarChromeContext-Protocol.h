//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ChromeWithInterruptionDisplay-Protocol.h"
#import "NGChromeContext-Protocol.h"

@class CarFocusContainerGuideController, CarMapTrackingController, CarNavigationDisplayConfiguration, GroupAnimation, NSArray, NSSet, NSString, UIPressesEvent, UITouch;
@protocol CarCard, CarChromeContext;

@protocol CarChromeContext <NGChromeContext, ChromeWithInterruptionDisplay>
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;

@optional
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;
- (_Bool)zoomInButtonPressed;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) long long autohideBehavior;
- (NSString *)backButtonUsageEventValueToContext:(id <CarChromeContext>)arg1;
- (int)backButtonUsageActionToContext:(id <CarChromeContext>)arg1;
- (void)configureFocusContainerGuideController:(CarFocusContainerGuideController *)arg1;
- (_Bool)handlePressesCancelled:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)handlePressesEnded:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)handlePressesChanged:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)handlePressesBegan:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)handleHardwareBackButtonPressed;
- (void)configureNavigationDisplay:(CarNavigationDisplayConfiguration *)arg1;
- (void)hideAutohidingContentWithAnimation:(GroupAnimation *)arg1;
- (void)showAutohidingContentWithAnimation:(GroupAnimation *)arg1;
- (void)toggleCameraPressed;
- (unsigned long long)audioSettingsCurrentState;
- (void)chromeDidEndConfiguringCards:(NSArray *)arg1;
- (void)chromeDidStartConfiguringCards:(NSArray *)arg1;
- (void)configureCard:(id <CarCard>)arg1 forKey:(NSString *)arg2;
- (NSArray *)desiredCards;
- (void)mapInsetsDidChangeAnimated:(_Bool)arg1;
- (_Bool)supportsAlternateRouteSelection;
- (_Bool)shouldSuppressAutohideRecognizerForTouch:(UITouch *)arg1;
@end

