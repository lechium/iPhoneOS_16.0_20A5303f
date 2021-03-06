//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDeliveryPolicyObserver, CARSessionStatus, CarChromeViewController, CarClusterSuggestionController, CarDisplayWindow, CarMapsSuggestionsController, CarRouteGeniusManager, GEOCarInfo, GuidanceObserver, MapsSuggestionsDonater, MapsSuggestionsMutableSignalPack, NSDate, NSDictionary, NSOperation, NSString, NSTimer, NSUUID, PlatformController, SearchSession, UIAlertController, UILongPressGestureRecognizer, UIScreen, UITraitCollection, UIWindowScene;
@protocol CarDisplayDelegate, OS_dispatch_queue;

@interface CarDisplayController : NSObject
{
    BKSHIDEventDeliveryPolicyObserver *_HIDEventObserver;	// 8 = 0x8
    NSTimer *_idleTimeoutTimer;	// 16 = 0x10
    NSTimer *_screenOwnershipSuppressionTimer;	// 24 = 0x18
    NSOperation *_screenUpdateOperation;	// 32 = 0x20
    _Bool _updatingScreen;	// 40 = 0x28
    _Bool _willEnterForeground;	// 41 = 0x29
    NSDate *_dateOfLastScreenUpdate;	// 48 = 0x30
    _Bool _hasRunNewScreenRefreshTasks;	// 56 = 0x38
    struct CGSize _screenSize;	// 64 = 0x40
    _Bool _isPreparingNavigation;	// 80 = 0x50
    UIAlertController *_simulationAlertController;	// 88 = 0x58
    _Bool _hasArrived;	// 96 = 0x60
    NSTimer *_arrivalResetTimer;	// 104 = 0x68
    _Bool _observingMapsAppState;	// 112 = 0x70
    SearchSession *_searchSession;	// 120 = 0x78
    UILongPressGestureRecognizer *_nightModeToggleGesture;	// 128 = 0x80
    long long _queuedInterruptionKind;	// 136 = 0x88
    NSDictionary *_queuedInterruptionUserInfo;	// 144 = 0x90
    CDUnknownBlockType _queuedInterruptionHandler;	// 152 = 0x98
    CDUnknownBlockType _queuedInterruptionDismissalBlock;	// 160 = 0xa0
    NSUUID *_queuedInterruptionKey;	// 168 = 0xa8
    _Bool _shouldOverrideMapTypeToStandard;	// 176 = 0xb0
    int _lastMapTypeFromiOSChrome;	// 180 = 0xb4
    MapsSuggestionsDonater *_donater;	// 184 = 0xb8
    MapsSuggestionsMutableSignalPack *_signalPack;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_signalPackQueue;	// 200 = 0xc8
    PlatformController *_platformController;	// 208 = 0xd0
    CarMapsSuggestionsController *_mapsSuggestionsController;	// 216 = 0xd8
    id <CarDisplayDelegate> _delegate;	// 224 = 0xe0
    unsigned long long _state;	// 232 = 0xe8
    UIScreen *_screen;	// 240 = 0xf0
    CarDisplayWindow *_window;	// 248 = 0xf8
    CarChromeViewController *_chromeViewController;	// 256 = 0x100
    CarClusterSuggestionController *_clusterSuggestionController;	// 264 = 0x108
    GuidanceObserver *_guidanceObserver;	// 272 = 0x110
    CarRouteGeniusManager *_routeGeniusManager;	// 280 = 0x118
    CARSessionStatus *_carSessionStatus;	// 288 = 0x120
    UIWindowScene *_windowScene;	// 296 = 0x128
    NSDate *_backgroundAutoHideStateTrackingDate;	// 304 = 0x130
}

+ (double)debugLaunchPerformanceDelay;	// IMP=0x0020000000b08e05
+ (_Bool)debugLaunchPerformance;	// IMP=0x0010000000b08de5
+ (void)launchPerformanceSetup;	// IMP=0x0010000000b08bce
+ (unsigned long long)maximumListLength;	// IMP=0x0010000000b0533e
+ (long long)enablingState;	// IMP=0x0010000000aff619
+ (void)_updateCarIntegrationState;	// IMP=0x0010000000aff5cb
+ (_Bool)_isCarIntegrationSupported;	// IMP=0x0010000000aff59d
+ (_Bool)isCarPlayAvailable;	// IMP=0x0010000000aff498
+ (id)sharedInstance;	// IMP=0x0010000000aff3f0
+ (void)initialize;	// IMP=0x0010000000aff38c
- (void).cxx_destruct;	// IMP=0x0020000000b091ca
@property(retain, nonatomic) NSDate *backgroundAutoHideStateTrackingDate; // @synthesize backgroundAutoHideStateTrackingDate=_backgroundAutoHideStateTrackingDate;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(retain, nonatomic) CARSessionStatus *carSessionStatus; // @synthesize carSessionStatus=_carSessionStatus;
@property(retain, nonatomic) CarRouteGeniusManager *routeGeniusManager; // @synthesize routeGeniusManager=_routeGeniusManager;
@property(retain, nonatomic) GuidanceObserver *guidanceObserver; // @synthesize guidanceObserver=_guidanceObserver;
@property(retain, nonatomic) CarClusterSuggestionController *clusterSuggestionController; // @synthesize clusterSuggestionController=_clusterSuggestionController;
@property(retain, nonatomic) CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) SearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(retain, nonatomic) CarDisplayWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CarDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CarMapsSuggestionsController *mapsSuggestionsController; // @synthesize mapsSuggestionsController=_mapsSuggestionsController;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)_registerCarInfoForGEOLogging;	// IMP=0x0010000000b08f4d
- (void)_setOverrideShouldSuppressChrome:(_Bool)arg1 refreshScreenConnection:(_Bool)arg2;	// IMP=0x0010000000b08e4a
@property(nonatomic) _Bool overrideShouldSuppressChrome;
- (void)didFinishLaunchingSuspendedWithOptions:(id)arg1;	// IMP=0x0010000000b08a61
- (void)_removeQueuedInterruptionWithKey:(id)arg1;	// IMP=0x0010000000b08869
- (void)_presentQueuedInterruptionIfNeeded;	// IMP=0x0010000000b08403
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000b0805f
- (void)_prepareNearby;	// IMP=0x0010000000b07fb2
- (void)_stopObservingSharedAppState;	// IMP=0x0010000000b07e85
- (void);	// IMP=0x0010000000b07d5c
@property(readonly, nonatomic, getter=isAnyCarSceneHostingDrivingNavigation) _Bool anyCarSceneHostingDrivingNavigation;
@property(readonly, nonatomic, getter=isAnyCarSceneHostingNavigation) _Bool anyCarSceneHostingNavigation;
@property(readonly, nonatomic, getter=isCarAppSceneHostingNavigation) _Bool carAppSceneHostingNavigation;
- (void)detourToMapItem:(id)arg1;	// IMP=0x0010000000b074f3
- (void)searchSessionDidInvalidate:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000b0725b
- (void)searchSessionDidFail:(id)arg1;	// IMP=0x0010000000b06506
- (void)searchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x0010000000b062e0
- (void)searchSessionWillPerformSearch:(id)arg1;	// IMP=0x0010000000b06160
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;	// IMP=0x0010000000b05fe0
- (void)_searchSessionWillStart:(id)arg1;	// IMP=0x0010000000b05e42
- (id)processSearchFieldItem:(id)arg1 searchInfo:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000b05a3b
- (void)observerDeliveryPolicyDidChange:(id)arg1;	// IMP=0x0010000000b056c0
- (_Bool)_shouldSendEvent:(id)arg1 toCarDisplayWindow:(id)arg2;	// IMP=0x0010000000b053e4
@property(readonly, nonatomic) long long connectionType;
@property(readonly, nonatomic) long long touchscreenFidelity;
@property(readonly, nonatomic) _Bool supportsFocusInteractionModel;
@property(readonly, nonatomic) _Bool supportsTouchInteractionModel;
@property(readonly, nonatomic) unsigned long long supportedInteractionModels;
@property(readonly, nonatomic) unsigned long long primaryInteractionModel;
@property(readonly, nonatomic) long long interactionModel;
- (_Bool)supportsInteractionModels:(unsigned long long)arg1;	// IMP=0x0010000000b050c6
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000b05045
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000b04fc2
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000b04f3f
- (void)_mapsCar_scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000b04ea0
- (void)_carSessionController_updateNavigationHostingState;	// IMP=0x0010000000b04d86
@property(readonly, nonatomic, getter=isCurrentlyConnectedToCarAppScene) _Bool currentlyConnectedToCarAppScene;
@property(readonly, nonatomic, getter=isCurrentlyConnectedToAnyCarScene) _Bool currentlyConnectedToAnyCarScene;
- (void)_updateForCurrentScreen;	// IMP=0x0010000000b043b4
- (void)_setNeedsScreenUpdate;	// IMP=0x0010000000b0405a
- (_Bool)hasMapsSuggestionsController;	// IMP=0x0010000000b04049
- (_Bool)_activelyOnScreen;	// IMP=0x0010000000b03e93
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x0010000000b039cf
- (void)_screenDidConnect:(id)arg1;	// IMP=0x0010000000b03900
- (id)availableCarPlayScreen;	// IMP=0x0010000000b0381d
@property(readonly, nonatomic) GEOCarInfo *connectedCarAnalyticsInfo;
@property(readonly, nonatomic) UITraitCollection *screenTraitCollection;
- (void)_popIfTopModeIsInvalidAfterReconnection:(_Bool)arg1;	// IMP=0x0010000000b0338d
- (void)_idleTimeoutFired:(id)arg1;	// IMP=0x0010000000b0317d
- (void)_stopTimingIdleTimout;	// IMP=0x0010000000b030db
- (void)_startTimingIdleTimeout;	// IMP=0x0010000000b02f97
- (void)_stopScreenOwnershipSuppressionTimer;	// IMP=0x0010000000b02eea
- (void)_startScreenOwnershipSuppressionTimer;	// IMP=0x0010000000b02c04
- (void)runNewScreenRefreshTasksIfNeeded;	// IMP=0x0010000000b029c7
- (void)_updateLowFuelSuggestionState;	// IMP=0x0010000000b028bb
- (void)_externalAccessoryUpdated;	// IMP=0x0010000000b0283c
- (void)_willEnterForeground;	// IMP=0x0010000000b02678
- (void)_didEnterBackground;	// IMP=0x0010000000b0240c
- (void)_carDisplayDidFinishLaunching:(id)arg1;	// IMP=0x0010000000b023ce
- (void)_tearDownClusterSuggestionController;	// IMP=0x0010000000b02337
- (void)_setupClusterSuggestionControllerIfNeeded;	// IMP=0x0010000000b021be
- (void)_tearDownMapsSuggestionsController;	// IMP=0x0010000000b021aa
- (void)_setChromeInactive:(_Bool)arg1 afterDelay:(double)arg2;	// IMP=0x0010000000b01e60
- (void)_setChromeSuppressed:(_Bool)arg1;	// IMP=0x0010000000b01bd3
- (void)_destroyChrome;	// IMP=0x0010000000b01a99
- (id)contextsForCurrentAppState;	// IMP=0x0010000000b014c0
- (void)_prepareChromeForFirstUse;	// IMP=0x0010000000b00c7b
- (double)_activationDelay;	// IMP=0x0010000000b00b99
- (void)_tearDownCarPlayIfNeeded;	// IMP=0x0010000000b00ad0
- (void)_setupCarPlayIfNeeded;	// IMP=0x0010000000b009a3
- (void)prepareCarPlay;	// IMP=0x0010000000b0085f
- (_Bool)_validateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0010000000b0058e
@property(readonly, nonatomic, getter=isChromeAvailable) _Bool chromeAvailable;
- (void)session:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x0010000000b00446
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000b00042
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000affc4f
- (void)updateMapsSuggestionsSignalForMapType:(int)arg1;	// IMP=0x0010000000affaac
- (void)_sendMapsSuggestionsSignals;	// IMP=0x0010000000aff8bd
- (void)updateForCurrentEnablingState;	// IMP=0x0010000000aff751
- (void)_externalNavigationOwnershipUpdated:(id)arg1;	// IMP=0x0010000000aff1a6
- (void)_geoServiceDidUpdateCountryConfiguration:(id)arg1;	// IMP=0x0010000000aff18c
- (void)_carDisplayDidUpdateEnablingState:(id)arg1;	// IMP=0x0010000000aff17a
- (id)init;	// IMP=0x0010000000afefc1
- (void)dealloc;	// IMP=0x0010000000afef42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

