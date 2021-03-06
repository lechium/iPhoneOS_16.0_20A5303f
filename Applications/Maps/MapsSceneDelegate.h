//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class AppCoordinator, EntryPointsCoordinator, IOSBasedChromeViewController, MapsActionController, MapsActivity, MapsActivityController, NSObject, NSString, PlatformController, RAPPresenter, UIViewController, UIWindow;
@protocol OS_dispatch_queue, PPTTestCoordinatorProtocol;

@interface MapsSceneDelegate : UIResponder
{
    _Bool _isTemporaryPreciseLocationAuthorizationPromptShown;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    PlatformController *_platformController;	// 32 = 0x20
    AppCoordinator *_appCoordinator;	// 40 = 0x28
    IOSBasedChromeViewController *_chromeViewController;	// 48 = 0x30
    EntryPointsCoordinator *_entryPointsCoordinator;	// 56 = 0x38
    MapsActionController *_mapsActionController;	// 64 = 0x40
    MapsActivityController *_mapsActivityController;	// 72 = 0x48
    RAPPresenter *_rapPresenter;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000abe98a
@property(retain, nonatomic) RAPPresenter *rapPresenter; // @synthesize rapPresenter=_rapPresenter;
@property(retain, nonatomic) MapsActivityController *mapsActivityController; // @synthesize mapsActivityController=_mapsActivityController;
@property(retain, nonatomic) MapsActionController *mapsActionController; // @synthesize mapsActionController=_mapsActionController;
@property(retain, nonatomic) EntryPointsCoordinator *entryPointsCoordinator; // @synthesize entryPointsCoordinator=_entryPointsCoordinator;
@property(retain, nonatomic) IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) id <PPTTestCoordinatorProtocol> testCoordinator;
- (void)windowSceneDidBecomeVisible:(id)arg1;	// IMP=0x0010000000abe848
- (void)refreshTitleAfterShortDelay;	// IMP=0x0010000000abe7ed
- (void)refreshTitle;	// IMP=0x0010000000abe6de
- (void)presentFromContainerViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000abe5cb
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000abe4b4
- (void)dismissMapsDebugControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000abe4ae
- (void)presentMapsDebugController;	// IMP=0x0010000000abe4a8
- (void)presentMapsDebugControllerIfEnabled;	// IMP=0x0010000000abe4a2
- (void)updateDirectionsListVisibility:(_Bool)arg1;	// IMP=0x0010000000abe448
- (void)historyDidChange;	// IMP=0x0010000000abe442
- (void)favoritesDidChange;	// IMP=0x0010000000abe43c
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;	// IMP=0x0010000000abe362
- (void)geoDaemonDisconnectNotificationHandler:(id)arg1;	// IMP=0x0010000000abe210
- (void)_sendMapsSuggestionsSignalsUsingBaseMode:(_Bool)arg1 secondsSinceBackgrounding:(double)arg2 routePlanningPresented:(_Bool)arg3;	// IMP=0x0010000000abe20a
- (void)_locationManagerAuthorizationChanged:(id)arg1;	// IMP=0x0010000000abe108
- (void)_loadMapsForWindowScene:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000abd546
@property(readonly, nonatomic) UIViewController *topMostPresentedViewController;
- (id)searchPinsManager;	// IMP=0x0010000000abd254
- (id)appSessionController;	// IMP=0x0010000000abd038
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000abcfc6
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0010000000abcd37
- (void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x0010000000abcc84
@property(retain, nonatomic) MapsActivity *mapsActivity;
- (id)mapsActivityWithFidelity:(unsigned long long)arg1;	// IMP=0x0010000000abcbe7
- (void)userActivityWillSave:(id)arg1;	// IMP=0x0010000000abcb5e
- (void)setNeedsUserActivityUpdate;	// IMP=0x0010000000abcb21
- (void)archiveMapsActivity;	// IMP=0x0010000000abcae4
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x0010000000abca5e
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x0010000000abc95b
- (void)scene:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x0010000000abc8e9
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x0010000000abc74b
- (_Bool)canBecomeFirstResponder;	// IMP=0x0010000000abc743
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000abc514
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000abc2b8
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000abbf7f
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000abbb4c
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000abb86d
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000abb2d5
- (void)dealloc;	// IMP=0x0010000000abb2a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

