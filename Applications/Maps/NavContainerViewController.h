//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCDTimer, GuidanceObserver, NSArray, NSLayoutConstraint, NSString, NSTimer, NavActionCoordinator, NavContainerBannerAction, NavContainerResumeRouteControl, NavIdleTimeoutTimer, NavIndicatorsViewController, NavJunctionViewController, NavLaneGuidanceViewController, NavSecondarySignViewController, NavSignListViewController, NavigationDebugViewsController, PlatformController, Route, StatusIndicatorManager, StatusIndicatorView, UIButton, UIView, UIViewController;
@protocol NavTrafficIncidentAlertCoordination;

@interface NavContainerViewController
{
    _Bool _layoutSetup;	// 8 = 0x8
    UIView *_navSignContainerView;	// 16 = 0x10
    NSLayoutConstraint *_signContainerTopConstraint;	// 24 = 0x18
    NSLayoutConstraint *_signContainerLeadingConstraint;	// 32 = 0x20
    NSLayoutConstraint *_signTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_secondarySignTopConstraint;	// 48 = 0x30
    NSLayoutConstraint *_junctionViewTopConstraint;	// 56 = 0x38
    NSArray *_portraitIndicatorsConstraints;	// 64 = 0x40
    NSLayoutConstraint *_portraitIndicatorsTopConstraint;	// 72 = 0x48
    NSArray *_landscapeIndicatorsConstraints;	// 80 = 0x50
    NSLayoutConstraint *_landscapeIndicatorsTrailingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_laneGuidanceHeightConstraint;	// 96 = 0x60
    NSTimer *_temporaryStatusBarHidingTimer;	// 104 = 0x68
    _Bool _secondarySignActive;	// 112 = 0x70
    _Bool _isShowingMidstepLaneGuidance;	// 113 = 0x71
    _Bool _junctionViewActive;	// 114 = 0x72
    _Bool _junctionViewDisplayed;	// 115 = 0x73
    GCDTimer *_junctionViewTimer;	// 120 = 0x78
    _Bool _trayOpen;	// 128 = 0x80
    _Bool _isPanned;	// 129 = 0x81
    UIViewController *_suppressedContainee;	// 136 = 0x88
    _Bool _observingCollapsedHeight;	// 144 = 0x90
    UIButton *_recenterButton;	// 152 = 0x98
    _Bool _showingTemporaryStatusBar;	// 160 = 0xa0
    _Bool _shouldShowNavIndicators;	// 161 = 0xa1
    _Bool _debugViewControllerEnabled;	// 162 = 0xa2
    _Bool _connectedToCarPlay;	// 163 = 0xa3
    double _signListHeight;	// 168 = 0xa8
    NavContainerBannerAction *_bannerAction;	// 176 = 0xb0
    NavActionCoordinator *_coordinator;	// 184 = 0xb8
    Route *_route;	// 192 = 0xc0
    GuidanceObserver *_guidanceObserver;	// 200 = 0xc8
    double _availableHeightForJunctionView;	// 208 = 0xd0
    unsigned long long _signStyle;	// 216 = 0xd8
    PlatformController *_platformController;	// 224 = 0xe0
    NavigationDebugViewsController *_debugViewsController;	// 232 = 0xe8
    NavContainerResumeRouteControl *_resumeRouteBanner;	// 240 = 0xf0
    NavIdleTimeoutTimer *_idleTimer;	// 248 = 0xf8
    NavLaneGuidanceViewController *_laneGuidanceViewController;	// 256 = 0x100
    NavSignListViewController *_navSignViewController;	// 264 = 0x108
    NavJunctionViewController *_junctionViewController;	// 272 = 0x110
    NavSecondarySignViewController *_secondarySignViewController;	// 280 = 0x118
    NavIndicatorsViewController *_indicatorsViewController;	// 288 = 0x120
    StatusIndicatorManager *_statusIndicatorManager;	// 296 = 0x128
    StatusIndicatorView *_statusIndicatorView;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x0020000000b62034
@property(readonly, nonatomic, getter=isConnectedToCarPlay) _Bool connectedToCarPlay; // @synthesize connectedToCarPlay=_connectedToCarPlay;
@property(retain, nonatomic) StatusIndicatorView *statusIndicatorView; // @synthesize statusIndicatorView=_statusIndicatorView;
@property(retain, nonatomic) StatusIndicatorManager *statusIndicatorManager; // @synthesize statusIndicatorManager=_statusIndicatorManager;
@property(retain, nonatomic) NavIndicatorsViewController *indicatorsViewController; // @synthesize indicatorsViewController=_indicatorsViewController;
@property(retain, nonatomic) NavSecondarySignViewController *secondarySignViewController; // @synthesize secondarySignViewController=_secondarySignViewController;
@property(retain, nonatomic) NavJunctionViewController *junctionViewController; // @synthesize junctionViewController=_junctionViewController;
@property(retain, nonatomic) NavSignListViewController *navSignViewController; // @synthesize navSignViewController=_navSignViewController;
@property(retain, nonatomic) NavLaneGuidanceViewController *laneGuidanceViewController; // @synthesize laneGuidanceViewController=_laneGuidanceViewController;
@property(retain, nonatomic) NavIdleTimeoutTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(readonly, nonatomic) NavContainerResumeRouteControl *resumeRouteBanner; // @synthesize resumeRouteBanner=_resumeRouteBanner;
@property(nonatomic) _Bool debugViewControllerEnabled; // @synthesize debugViewControllerEnabled=_debugViewControllerEnabled;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewsController; // @synthesize debugViewsController=_debugViewsController;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) _Bool shouldShowNavIndicators; // @synthesize shouldShowNavIndicators=_shouldShowNavIndicators;
@property(nonatomic) unsigned long long signStyle; // @synthesize signStyle=_signStyle;
@property(readonly, nonatomic) double availableHeightForJunctionView; // @synthesize availableHeightForJunctionView=_availableHeightForJunctionView;
@property(readonly, nonatomic) GuidanceObserver *guidanceObserver; // @synthesize guidanceObserver=_guidanceObserver;
@property(nonatomic) _Bool showingTemporaryStatusBar; // @synthesize showingTemporaryStatusBar=_showingTemporaryStatusBar;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(retain, nonatomic) NavActionCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) NavContainerBannerAction *bannerAction; // @synthesize bannerAction=_bannerAction;
@property(nonatomic) double signListHeight; // @synthesize signListHeight=_signListHeight;
- (void)_drawSecondarySign;	// IMP=0x0010000000b61d49
- (_Bool)_isSecondarySignVisible;	// IMP=0x0010000000b61d26
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000b61cc6
- (void)navigationService:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0010000000b61ca4
- (void)navigationService:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0010000000b61bf5
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0010000000b61b96
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0010000000b61afa
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0010000000b61a49
- (void)applyTransitionWithProgress:(double)arg1;	// IMP=0x0010000000b61a1a
- (void)hideJunctionViewTemporarily;	// IMP=0x0010000000b618d5
- (double)maxAvailableHeightForJunctionView:(double)arg1;	// IMP=0x0010000000b61849
- (double)_junctionViewTopPosition;	// IMP=0x0010000000b617e9
- (double)_secondarySignTopPosition;	// IMP=0x0010000000b617a3
- (double)_navSignBottomPosition;	// IMP=0x0010000000b6172e
- (double)_usedPortraitTopSpace;	// IMP=0x0010000000b61547
- (double)_indicatorsTrailingInset;	// IMP=0x0010000000b614b8
- (double)_indicatorsTopPosition;	// IMP=0x0010000000b61466
- (double)_belowSignTopPosition;	// IMP=0x0010000000b613f1
- (void)updatedLaneGuidanceHeight:(double)arg1;	// IMP=0x0010000000b611bd
- (void)pressedEndNavigationWithSender:(id)arg1;	// IMP=0x0010000000b6114b
- (void)selectStep:(id)arg1;	// IMP=0x0010000000b60fba
- (void)signListHeightWillChangeAnimated:(_Bool)arg1;	// IMP=0x0010000000b60e52
- (void)signListDidScroll;	// IMP=0x0010000000b60e40
- (_Bool)_isPresentingOverlappingContainee;	// IMP=0x0010000000b60d4c
- (void)_updateContaineeHiddenIfNeeded;	// IMP=0x0010000000b60ad4
- (void)setConnectedToCarPlay:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b608eb
- (void)_sceneConnectionsDidChange;	// IMP=0x0010000000b608a4
- (void)didEndDisplayingInLockScreen;	// IMP=0x0010000000b6089e
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000b6085d
- (int)currentMapViewTargetForAnalytics;	// IMP=0x0010000000b6080a
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000b607b5
- (void)idleTimerDidTimeout:(id)arg1;	// IMP=0x0010000000b605ce
- (void)_updateIdleTimer;	// IMP=0x0010000000b60458
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000b60446
- (id)statusBarSupplementaryView;	// IMP=0x0010000000b603a3
- (void)statusIndicatorTypeChanged:(unsigned long long)arg1;	// IMP=0x0010000000b60318
- (void)toggleHeadingMode;	// IMP=0x0010000000b60285
- (void)switchToZoomedInMode;	// IMP=0x0010000000b60237
- (void)switchToOverviewMode;	// IMP=0x0010000000b601e6
- (_Bool)_bannerActionShouldDisplay;	// IMP=0x0010000000b6015f
- (void)_closeBannerAction;	// IMP=0x0010000000b600d8
- (void)_performBannerAction;	// IMP=0x0010000000b5fffb
- (void)setBannerAction:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b5ff0e
- (id)headerContentView;	// IMP=0x0010000000b5fee8
- (double)bottomEdgeInset;	// IMP=0x0010000000b5fcab
- (double)topEdgeInset;	// IMP=0x0010000000b5fbc9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000b5f9fc
- (void)_navigationChromeVisibilityChanged;	// IMP=0x0010000000b5f84f
- (void)willDismissNavigationAnimated:(_Bool)arg1;	// IMP=0x0010000000b5f664
@property(readonly, nonatomic, getter=isForWalkingNav) _Bool forWalkingNav;
- (void)setResumeRouteBannerHidden:(_Bool)arg1;	// IMP=0x0010000000b5f598
- (void)showSignForStep:(id)arg1;	// IMP=0x0010000000b5f592
- (void)mapView:(id)arg1 didUpdateYaw:(double)arg2;	// IMP=0x0010000000b5f3ea
- (void)mapViewZoomController:(id)arg1 didChangeMapViewZoom:(unsigned long long)arg2;	// IMP=0x0010000000b5f3d8
- (void)_updateControlsHiddenAnimated:(_Bool)arg1;	// IMP=0x0010000000b5f316
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;	// IMP=0x0010000000b5f268
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;	// IMP=0x0010000000b5f136
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x0010000000b5f088
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x0010000000b5ef56
- (unsigned long long)maxLayoutForEdgeInsetsUpdate;	// IMP=0x0010000000b5eebd
- (double)leadingEdgePadding;	// IMP=0x0010000000b5eeab
- (double)edgePadding;	// IMP=0x0010000000b5ee9d
- (double)availableHeight;	// IMP=0x0010000000b5e9b5
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;	// IMP=0x0010000000b5e89b
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x0010000000b5e739
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x0010000000b5e5be
- (void)updateLayoutAnimated:(_Bool)arg1;	// IMP=0x0010000000b5e440
- (_Bool)shouldHideCard;	// IMP=0x0010000000b5dfd4
- (void)_pinSignAndIndicators;	// IMP=0x0010000000b5dc81
- (void)_updateLayeringToTrayProminent;	// IMP=0x0010000000b5db35
- (void)_updateLayeringToSignProminent;	// IMP=0x0010000000b5da42
- (void)_containeeDidPresent:(id)arg1;	// IMP=0x0010000000b5da21
- (void)_containeeWillPresent:(id)arg1;	// IMP=0x0010000000b5d88c
- (void)_containeeLayoutDidChange:(id)arg1;	// IMP=0x0010000000b5d71b
- (void)_containeeLayoutWillChange:(id)arg1;	// IMP=0x0010000000b5d5b6
- (unsigned long long)layoutForCurrentViewControllerWithStyle:(unsigned long long)arg1;	// IMP=0x0010000000b5d54c
- (void)_updateStatusBarIndicatorLayout;	// IMP=0x0010000000b5d4b2
- (void)_updateRecenterButtonLayout;	// IMP=0x0010000000b5d3f9
- (void)_updateIndicatorsLayout;	// IMP=0x0010000000b5d32e
- (void)_updateJunctionViewLayout;	// IMP=0x0010000000b5d1bb
- (void)_updateSecondarySignLayout;	// IMP=0x0010000000b5d088
- (void)_updateNavSignLayout;	// IMP=0x0010000000b5ce83
- (void)_updateChildViewLayouts;	// IMP=0x0010000000b5cdfb
- (void)suppressTransitionsOfContainee:(id)arg1;	// IMP=0x0010000000b5cde7
- (double)_maxAvailableHeightForJunctionView;	// IMP=0x0010000000b5cc2b
- (void)willHideJunctionView;	// IMP=0x0010000000b5cbc8
- (void)hideJunctionViewIfNeeded;	// IMP=0x0010000000b5cbb1
- (void)hideJunctionViewIfNeededAnimated:(_Bool)arg1;	// IMP=0x0010000000b5c998
- (void)showJunctionViewIfNeeded;	// IMP=0x0010000000b5c7ca
- (void)willDisplayJunctionViewInfo:(id)arg1;	// IMP=0x0010000000b5c751
- (_Bool)canDisplayJunctionViewInfo;	// IMP=0x0010000000b5c6bb
- (void)layoutNavContainer;	// IMP=0x0010000000b5c6b5
@property(readonly, nonatomic) UIView *passThroughView;
- (void)_pressedRecenterButton;	// IMP=0x0010000000b5c58c
- (_Bool)_shouldShowNavRecenterButton;	// IMP=0x0010000000b5c4ca
- (void)_toggleTraceControls;	// IMP=0x0010000000b5c3a5
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000b5c05d
- (long long)preferredUserInterfaceStyle;	// IMP=0x0010000000b5c019
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000b5bff6
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0010000000b5bfa0
- (void)_updateSignContainerLeadingConstraint;	// IMP=0x0010000000b5ba6f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000b5b928
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000b5b85c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000b5b7d3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000b5b743
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000b5b5ef
- (void)_teardownViewHierarchy;	// IMP=0x0010000000b5b558
- (void)viewDidMoveToParent;	// IMP=0x0010000000b5ad5e
- (void)viewDidLoad;	// IMP=0x0010000000b59732
- (void)updateLaneGuidanceBackgroundColor;	// IMP=0x0010000000b596ae
- (void)updateStatusBarColor;	// IMP=0x0010000000b5946f
- (id)statusBarBackgroundViewStyle;	// IMP=0x0010000000b59322
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000b59200
- (void)statusBarHeightChanged;	// IMP=0x0010000000b59187
- (void)hideStatusBarIfNeeded;	// IMP=0x0010000000b59150
- (void)toggleTemporaryStatusBar;	// IMP=0x0010000000b59112
- (void)_hideTemporaryStatusBar;	// IMP=0x0010000000b58f8e
- (void)_showTemporaryStatusBar;	// IMP=0x0010000000b58dec
@property(readonly, nonatomic) _Bool hasBigStatusBar;
- (_Bool)allowsDisplayOnLockScreen;	// IMP=0x0010000000b58d6d
- (id)mapView;	// IMP=0x0010000000b58d1d
@property(readonly, nonatomic) id <NavTrafficIncidentAlertCoordination> trafficIncidentAlertCoordinator;
- (void)dealloc;	// IMP=0x0010000000b58a58
- (id)initWithCoordinator:(id)arg1 guidanceObserver:(id)arg2 platformController:(id)arg3;	// IMP=0x0010000000b58872
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000b5886a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

