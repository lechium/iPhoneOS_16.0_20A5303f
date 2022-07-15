//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDTimer, MNNavigationService, NGChromeViewController, NSHashTable, NSString, PlatformController, RoutePlanningSession;

@interface NavigationStateMonitoringTask : NSObject
{
    id _routePlanningModernMapToken;	// 8 = 0x8
    id _navigationModernMapToken;	// 16 = 0x10
    id _thermalPressureMapToken;	// 24 = 0x18
    id _thermalPressureChromeDeactivationToken;	// 32 = 0x20
    GCDTimer *_animationSuppressionTimer;	// 40 = 0x28
    PlatformController *_platformController;	// 48 = 0x30
    MNNavigationService *_navigationService;	// 56 = 0x38
    NGChromeViewController *_chromeViewController;	// 64 = 0x40
    RoutePlanningSession *_observedRoutePlanningSession;	// 72 = 0x48
    GCDTimer *_navigationAutoLaunchTimer;	// 80 = 0x50
    NSHashTable *_navigationCompletionBlocks;	// 88 = 0x58
}

+ (long long)creationPreference;	// IMP=0x0020000000231e95
- (void).cxx_destruct;	// IMP=0x002000000023477f
@property(retain, nonatomic) NSHashTable *navigationCompletionBlocks; // @synthesize navigationCompletionBlocks=_navigationCompletionBlocks;
@property(retain, nonatomic) GCDTimer *navigationAutoLaunchTimer; // @synthesize navigationAutoLaunchTimer=_navigationAutoLaunchTimer;
@property(retain, nonatomic) RoutePlanningSession *observedRoutePlanningSession; // @synthesize observedRoutePlanningSession=_observedRoutePlanningSession;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)platformControllerDidChangeChromeViewControllerNotification:(id)arg1;	// IMP=0x0010000000234678
- (void)_checkMapViewMitigation;	// IMP=0x00100000002344fa
- (void)_checkETAUpdatesMitigation;	// IMP=0x0010000000234479
- (void)_checkAnimationsMitigation;	// IMP=0x0010000000234237
- (void)_checkModernMapMitigation;	// IMP=0x00100000002340b4
- (void)didUpdateMitigationNamed:(id)arg1;	// IMP=0x0010000000233f6e
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x0010000000233ea6
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000002339c3
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x00100000002339bd
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x001000000023393f
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000233897
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000233891
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x001000000023388b
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000233671
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000002335ba
- (void)callNavigationCompletionBlocksIfNecessary;	// IMP=0x00100000002331ff
- (void)handoffDestinationToExternalDevice:(id)arg1;	// IMP=0x0010000000232f5f
- (void)presentHandoffAlertForDestination:(id)arg1;	// IMP=0x0010000000232b43
- (void)startNavigationAutoLaunchTimer;	// IMP=0x00100000002326c4
- (_Bool)shouldStartNavigationAutoLaunchTimer;	// IMP=0x0010000000232680
- (id)currentRoutePlanningSessionConfiguration;	// IMP=0x0010000000232630
- (void)endNavigationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023236c
- (void)beginNavigationWithRouteCollection:(id)arg1 navigationDetailsOptions:(struct NavigationDetailsOptions)arg2 mapServiceTraits:(id)arg3 andSessionInitiator:(unsigned long long)arg4;	// IMP=0x0010000000232012
- (void)cancelNavigationAutoLaunchIfNeccessary;	// IMP=0x0010000000231ed0
@property(readonly, nonatomic) _Bool isNavigationAutoLaunchInProgress;
- (void)dealloc;	// IMP=0x0010000000231d77
- (id)initWithPlatformController:(id)arg1 navigationService:(id)arg2;	// IMP=0x0010000000231aaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
