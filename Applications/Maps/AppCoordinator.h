//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AnalyticsMonitor, AppStateManager, BaseModeController, IOSBasedChromeViewController, MKMapView, MapsActivityViewController, MapsSceneDelegate, NSString, NavModeController, NavigationSession, PlatformController, RidesharingModeController, StepModeController, TransitNavigationContext, UIScrollView, UIViewController;
@protocol ActionCoordination, FlyoverActionCoordination, NavActionCoordination, StepActionCoordination;

@interface AppCoordinator : NSObject
{
    MapsActivityViewController *_shareViewController;	// 8 = 0x8
    AnalyticsMonitor *_analyticsMonitor;	// 16 = 0x10
    CDUnknownBlockType _fixedProblemCompletion;	// 24 = 0x18
    CDUnknownBlockType _dismissNavigationCompletion;	// 32 = 0x20
    BaseModeController *_baseModeController;	// 40 = 0x28
    NavModeController *_navModeController;	// 48 = 0x30
    RidesharingModeController *_ridesharingModeController;	// 56 = 0x38
    TransitNavigationContext *_transitNavigationContext;	// 64 = 0x40
    PlatformController *_platformController;	// 72 = 0x48
    AppStateManager *_appStateManager;	// 80 = 0x50
    MapsSceneDelegate *_mapsSceneDelegate;	// 88 = 0x58
    IOSBasedChromeViewController *_chromeViewController;	// 96 = 0x60
    StepModeController *_stepModeController;	// 104 = 0x68
    id <FlyoverActionCoordination> _flyoverActionCoordinator;	// 112 = 0x70
    NavigationSession *_observedNavigationSession;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000186933
@property(retain, nonatomic) NavigationSession *observedNavigationSession; // @synthesize observedNavigationSession=_observedNavigationSession;
@property(readonly, nonatomic) id <FlyoverActionCoordination> flyoverActionCoordinator; // @synthesize flyoverActionCoordinator=_flyoverActionCoordinator;
@property(readonly, nonatomic) StepModeController *stepModeController; // @synthesize stepModeController=_stepModeController;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak MapsSceneDelegate *mapsSceneDelegate; // @synthesize mapsSceneDelegate=_mapsSceneDelegate;
@property(retain, nonatomic) AppStateManager *appStateManager; // @synthesize appStateManager=_appStateManager;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) RidesharingModeController *ridesharingModeController; // @synthesize ridesharingModeController=_ridesharingModeController;
- (void)pptTestExitLookAround;	// IMP=0x0010000000186875
- (void)pptTestEnterLookAroundWithEntryPoint:(id)arg1 lookAroundView:(id)arg2 showsFullScreen:(_Bool)arg3;	// IMP=0x001000000018672d
- (void)pptTestSelectVenueSearchResult:(id)arg1;	// IMP=0x00100000001866ab
- (void)pptTestPresentVenueForMapItem:(id)arg1 searchCategory:(id)arg2;	// IMP=0x0010000000186608
- (void)pptTestPresentPlacecardWithMapItem:(id)arg1;	// IMP=0x0010000000186586
- (id)_pptChromeTrayCoordinatorForCurrentMode;	// IMP=0x0010000000186350
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;	// IMP=0x00100000001862af
- (_Bool)pptTestIsTrayType:(long long)arg1;	// IMP=0x001000000018625c
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000018620b
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (void)pptTestOpenFirstCollection;	// IMP=0x001000000018616f
- (void)pptTestOpenCollections;	// IMP=0x0010000000186117
- (void)pptTestOpenRecents;	// IMP=0x00100000001860bf
@property(readonly, nonatomic) UIScrollView *pptTestScrollViewForProactive;
- (void)pptTestOpenSettings;	// IMP=0x0010000000185ff7
- (void)pptTestStartTracePlaybackFromPath:(id)arg1;	// IMP=0x0010000000185f7d
- (void)pptTestResumeRealtimeTransitUpdates;	// IMP=0x0010000000185f39
- (void)pptTestPauseRealtimeTransitUpdates;	// IMP=0x0010000000185ef5
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x0010000000185e0c
- (void)pptTestMoveToNextStep;	// IMP=0x0010000000185d2a
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)pptTestOpenCommuteEntry:(id)arg1;	// IMP=0x0010000000185a8b
- (void)pptTestTransitionBetweenFullAndLightGuidance;	// IMP=0x0010000000185a33
- (void)pptTestEndNavigation;	// IMP=0x001000000018591a
- (void)pptTestStartNavigation;	// IMP=0x00100000001858c2
- (void)pptTestDoDirectionItem:(id)arg1;	// IMP=0x0010000000185840
@property(readonly, nonatomic) UIScrollView *pptTestScrollViewForDirectionsDetails;
@property(readonly, nonatomic) UIViewController *pptTestContaineeForDirectionsDetails;
- (void)pptTestPresentDirectionsDetails;	// IMP=0x0010000000185708
- (void)setPPTTestDirectionsPlan:(id)arg1;	// IMP=0x0010000000185686
- (void)pptTestCreateCustomSearchResultForDroppedPinAtPoint:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000185607
- (void)pptSelectKeyboardInteractionModel;	// IMP=0x0010000000185601
- (void)pptSelectFirstGuidePublisher;	// IMP=0x00100000001855a9
- (void)pptSelectSeeAllCuratedCollections;	// IMP=0x0010000000185551
- (void)pptSelectFirstCuratedGuide;	// IMP=0x00100000001854f9
- (void)pptTestSearchCancel;	// IMP=0x00100000001854a1
- (void)pptTestEnterSearchMode;	// IMP=0x0010000000185449
- (void)pptTestRefreshSearch;	// IMP=0x00100000001853f1
- (void)pptTestSearchForFieldItem:(id)arg1;	// IMP=0x001000000018536f
- (void)pptTestSearchEndEditing;	// IMP=0x0010000000185317
- (void)pptTestAutocompleteSearchForFieldItem:(id)arg1;	// IMP=0x0010000000185295
- (void)pptTestSearchNearbyCategoryWithIndex:(unsigned long long)arg1;	// IMP=0x001000000018522e
- (void)pptTestSearchRetainQueryForSelectedSearchCompletion:(id)arg1;	// IMP=0x00100000001851ac
- (void)pptTestMediumizePlaceCardAnimated:(_Bool)arg1;	// IMP=0x0010000000185144
- (void)pptTestMinimizePlaceCardAnimated:(_Bool)arg1;	// IMP=0x00100000001850dc
- (void)pptTestMaximizePlaceCardAnimated:(_Bool)arg1;	// IMP=0x0010000000185074
@property(readonly, nonatomic) _Bool pptTestCanResizePlacecard;
- (void)pptTestPresentPlaceCardForSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000184f88
- (void)setChromeHidden:(_Bool)arg1;	// IMP=0x0010000000184f82
- (void)pptTestResetForLaunchURL;	// IMP=0x0010000000184f43
- (void)setPPTTestViewMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000184ef2
@property(readonly, nonatomic) MKMapView *mapViewForPPTTest;
- (id)testCoordinator;	// IMP=0x0010000000184e99
- (void)exitLookAround;	// IMP=0x0010000000184821
- (void)enterLookAroundWithEntryPoint:(id)arg1 lookAroundView:(id)arg2 showsFullScreen:(_Bool)arg3 originFrame:(struct CGRect)arg4;	// IMP=0x00100000001846bc
- (id)lookAroundActionCoordinator;	// IMP=0x001000000018450a
- (void)presentAlertForMissingSharedTrip:(id)arg1;	// IMP=0x001000000018437c
- (void)presentUnsupportedTransportTypeOrProtocolAlertForSharedTrip:(id)arg1;	// IMP=0x00100000001841ee
- (void)presentChinaAlertForSharedTrip:(id)arg1;	// IMP=0x0010000000184060
- (void)closeSharedTrips;	// IMP=0x0010000000183ee6
- (void)openSharedTrip:(id)arg1;	// IMP=0x0010000000183ae2
- (void)_openSharedTrip:(id)arg1;	// IMP=0x00100000001832f3
- (void)openSharedTrips;	// IMP=0x00100000001832df
- (void)_displayOrScheduleDisplayOfEnqueuedFixedProblemInvokedAfterWait:(_Bool)arg1;	// IMP=0x001000000018318d
- (void)displayAnyEnqueuedFixedProblemNotification;	// IMP=0x0010000000183176
- (void)displayOrScheduleDisplayOfEnqueuedFixedProblem:(CDUnknownBlockType)arg1;	// IMP=0x0010000000183135
- (void)dismissShareIfNeededAnimated:(_Bool)arg1;	// IMP=0x0010000000183075
- (void)mapsActivityViewController:(id)arg1 activityCompleted:(_Bool)arg2;	// IMP=0x001000000018305e
- (void)mapsActivityViewControllerPresentRoutingApps:(id)arg1;	// IMP=0x0010000000182f97
- (void)mapsActivityViewControllerPrint:(id)arg1;	// IMP=0x0010000000182ec0
@property(readonly, nonatomic) MKMapView *mapsActivityMapView;
- (void)setNeedsUserActivityUpdate;	// IMP=0x0010000000182e33
- (void)archiveMapsActivity;	// IMP=0x0010000000182df6
- (void)editLocationForParkedCar:(id)arg1;	// IMP=0x0010000000182d82
- (void)startTableBookingFlowFromMapItem:(id)arg1;	// IMP=0x0010000000182ce9
- (void)_presentActivityViewController:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001829d4
- (void)sharePublisher:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001828ca
- (void)shareCuratedCollection:(id)arg1 withRefinedMapItems:(id)arg2 sourceView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001827b2
- (void)shareCollection:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001826e0
- (void)shareItem:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001825ff
- (void)exitFlyover;	// IMP=0x0010000000182549
- (void)enterFlyoverForMapItem:(id)arg1;	// IMP=0x0010000000182485
- (void)hideFullscreenDirectionsList;	// IMP=0x001000000018246d
- (void)showFullscreenDirectionsList;	// IMP=0x00100000001823c8
- (void)dismissRidesharingSessionAndReturnToRoutePlanning:(_Bool)arg1;	// IMP=0x00100000001820d6
- (void)continueRideBookingSessionWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000182026
- (void)startRideBookingSessionWithRideBookingRideOption:(id)arg1;	// IMP=0x0010000000181f76
- (void)displayIncidentReportSubmissionWithItem:(id)arg1 report:(id)arg2;	// IMP=0x0010000000181ef0
- (void)openTransitSchedulesWithMapItem:(id)arg1 departureSequence:(id)arg2;	// IMP=0x0010000000181e68
- (void)_popSteppingModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001819bc
- (void)_popNavModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181263
- (_Bool)applyPendingActionIfNeeded;	// IMP=0x001000000018118f
- (void)endNavigationAndReturnToRoutePlanning:(_Bool)arg1;	// IMP=0x0010000000180f4e
- (void)endNavigationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180d5c
- (void)startNavigationWithRouteCollection:(id)arg1 navigationDetailsOptions:(struct NavigationDetailsOptions)arg2;	// IMP=0x001000000017fb00
@property(readonly, nonatomic) id <StepActionCoordination> stepActionCoordinator;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) TransitNavigationContext *transitNavigationContext; // @synthesize transitNavigationContext=_transitNavigationContext;
@property(readonly, nonatomic) NavModeController *navModeController; // @synthesize navModeController=_navModeController;
- (void)openUserProfile;	// IMP=0x001000000017f966
- (void)presentPOIEnrichmentWithCoordinator:(id)arg1;	// IMP=0x001000000017f8f4
- (void)openCuratedCollectionsList:(id)arg1 usingTitle:(id)arg2;	// IMP=0x001000000017f7b7
- (void)openAllCuratedCollections;	// IMP=0x001000000017f704
- (void)openPublisherWithIdentifier:(id)arg1;	// IMP=0x001000000017f601
- (void)openGuidesHomeWithGuideLocation:(id)arg1;	// IMP=0x001000000017f4fc
- (void)openCuratedCollectionWithIdentifier:(id)arg1;	// IMP=0x001000000017f3f7
- (void)openRelatedMapItems:(id)arg1 withTitle:(id)arg2 originalMapItem:(id)arg3 analyticsDelegate:(id)arg4;	// IMP=0x001000000017f257
- (void);	// IMP=0x001000000017f152
- (void)enterRoutePlanningWithDirectionItem:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x001000000017f020
- (void)toggleRoutePlanning;	// IMP=0x001000000017ef6d
- (_Bool)isRoutePlanningPresented;	// IMP=0x001000000017ef29
- (void)openCollection:(id)arg1;	// IMP=0x001000000017ee24
- (void)openSearch:(id)arg1 andResults:(id)arg2;	// IMP=0x001000000017ec3c
- (void)openSearch:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000017eba0
- (void)startSearchModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017ea7a
@property(readonly, nonatomic) id <ActionCoordination> baseActionCoordinator;
@property(readonly, nonatomic) BaseModeController *baseModeController; // @synthesize baseModeController=_baseModeController;
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017e8d8
- (int)_analyticsPipelineTransportModeForMSPTransportType:(long long)arg1;	// IMP=0x001000000017e8c3
- (_Bool)isNavigationTurnByTurnOrStepping;	// IMP=0x001000000017e729
- (void)_navigationSessionStopped:(id)arg1 movingToSession:(id)arg2;	// IMP=0x001000000017e179
- (void)_navigationSessionRunning:(id)arg1;	// IMP=0x001000000017d758
- (void)_navigationSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x001000000017d73e
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x001000000017d68d
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x001000000017d687
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x001000000017d60b
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000017d591
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000017d106
- (id)initWithPlatformController:(id)arg1;	// IMP=0x001000000017d028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
