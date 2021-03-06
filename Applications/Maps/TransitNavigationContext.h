//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, GEOMapServiceTraits, GEOTransitVehicleUpdater, MISSING_TYPE, MKMapItem, NGChromeViewController, NSString, NavIdleTimeoutTimer, NavigationDebugViewsController, NavigationDisplay, PlaceCardViewController, Route, StatusBarBackgroundViewStyle, TransitContainerViewController, TransitNavigationTrayViewController, TransitSteppingAnalyticsDelegate, TransitSteppingCameraFramer, UIButton, UIScrollView, UIView;
@protocol MapSelectionManagerDelegate, StatusBarSupplementaryView;

@interface TransitNavigationContext : NSObject
{
    TransitContainerViewController *_containerViewController;	// 8 = 0x8
    TransitNavigationTrayViewController *_trayViewController;	// 16 = 0x10
    PlaceCardViewController *_placeCardViewController;	// 24 = 0x18
    NavigationDisplay *_navigationDisplay;	// 32 = 0x20
    NavigationDebugViewsController *_debugViewsController;	// 40 = 0x28
    GEOTransitVehicleUpdater *_transitVehicleUpdater;	// 48 = 0x30
    GEOComposedRouteStep *_activeStep;	// 56 = 0x38
    GEOComposedRouteStep *_displayedStep;	// 64 = 0x40
    Route *_route;	// 72 = 0x48
    TransitSteppingAnalyticsDelegate *_analyticsDelegate;	// 80 = 0x50
    UIButton *_recenterButton;	// 88 = 0x58
    _Bool _cameraPanningOrZoomed;	// 96 = 0x60
    TransitSteppingCameraFramer *_manualSteppingFramer;	// 104 = 0x68
    _Bool _forceManualFraming;	// 112 = 0x70
    _Bool _requestingRealtimeUpdates;	// 113 = 0x71
    NavIdleTimeoutTimer *_arrivalEndTimer;	// 120 = 0x78
    _Bool _trayPresented;	// 128 = 0x80
    CDUnknownBlockType _whenTrayPresentedBlock;	// 136 = 0x88
    NGChromeViewController *_chromeViewController;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x002000000047e141
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;	// IMP=0x001000000047e0da
- (_Bool)pptTestIsTrayType:(long long)arg1;	// IMP=0x001000000047e0ce
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000047df54
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x001000000047defd
- (void)pptTestMoveToNextStep;	// IMP=0x001000000047dee7
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)navigationDebugViewsTracePlaybackDidSeekToGuideMePortionOfTransitSegment:(id)arg1;	// IMP=0x001000000047de9f
- (void)navigationDebugViewsTracePlaybackDidSeek:(id)arg1;	// IMP=0x001000000047de99
- (void)navigationDebugViewsTracePlaybackSpeedDidChange:(id)arg1 speedMultiplier:(double)arg2;	// IMP=0x001000000047de93
- (void)placeCardViewController:(id)arg1 presentPOIEnrichmentWithCoordinator:(id)arg2;	// IMP=0x001000000047de8d
- (void)placeCardViewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000047de87
- (void)placeCardViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;	// IMP=0x001000000047de81
- (void)placeCardViewController:(id)arg1 selectExploreGuidesWithGuideLocation:(id)arg2;	// IMP=0x001000000047de7b
- (void)placeCardViewController:(id)arg1 showCuratedCollection:(id)arg2;	// IMP=0x001000000047de75
- (void)placeCardViewController:(id)arg1 editShortcut:(id)arg2;	// IMP=0x001000000047de6f
- (void)placeCardViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;	// IMP=0x001000000047de69
- (void)placeCardViewController:(id)arg1 editCollection:(id)arg2;	// IMP=0x001000000047de63
- (void)placeCardViewController:(id)arg1 showCollection:(id)arg2;	// IMP=0x001000000047de5d
- (void)placeCardViewController:(id)arg1 requestCopyLinkToClipboard:(id)arg2;	// IMP=0x001000000047de57
- (_Bool)placeCardViewController:(id)arg1 shouldShowTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x001000000047de4f
- (void)placeCardViewController:(id)arg1 showTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x001000000047de49
- (void)placeCardViewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000047de43
- (void)placeCardViewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;	// IMP=0x001000000047de3d
- (void)placeCardViewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x001000000047de37
- (void)placeCardViewController:(id)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(id)arg2;	// IMP=0x001000000047de31
- (void)placeCardViewController:(id)arg1 didSelectParent:(id)arg2;	// IMP=0x001000000047de2b
- (MISSING_TYPE *)placeCardViewController:presentPlacesForMapItem:searchCategory: /* Error: Ran out of types for this method. */;	// IMP=0x001000000047de25
- (void)placeCardViewController:(id)arg1 presentCategoryPlacesListForMapItem:(id)arg2 searchCategory:(id)arg3;	// IMP=0x001000000047de1f
- (void)placeCardViewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2;	// IMP=0x001000000047de19
- (void)placeCardViewController:(id)arg1 enterLookAroundForMapItem:(id)arg2 lookAroundView:(id)arg3;	// IMP=0x001000000047de13
- (void)placeCardViewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;	// IMP=0x001000000047de0d
- (void)placeCardViewController:(id)arg1 createDroppedPin:(id)arg2;	// IMP=0x001000000047de07
- (void)placeCardViewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;	// IMP=0x001000000047de01
- (void)placeCardViewController:(id)arg1 removeDroppedPin:(id)arg2;	// IMP=0x001000000047ddfb
- (void)placeCardViewController:(id)arg1 selectDisplayedAddressFromPlaceCardItem:(id)arg2;	// IMP=0x001000000047ddf5
- (void)placeCardViewController:(id)arg1 showTransitIncidents:(id)arg2;	// IMP=0x001000000047dde0
- (void)placeCardViewController:(id)arg1 selectTransitLineItem:(id)arg2;	// IMP=0x001000000047ddda
- (void)placeCardViewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3;	// IMP=0x001000000047ddd4
- (void)placeCardViewController:(id)arg1 doDirectionItem:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000047ddce
- (void)placeCardViewController:(id)arg1 mapItemDidChange:(id)arg2;	// IMP=0x001000000047ddc8
@property(readonly, nonatomic) long long displayedViewMode;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (void)_presentPlaceCardViewControllerForMapItem:(id)arg1 modally:(_Bool)arg2;	// IMP=0x001000000047dba0
- (id)_placeCardViewController;	// IMP=0x001000000047db18
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x001000000047da81
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x001000000047da7b
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x001000000047da75
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x001000000047da6f
- (void)_presentIncidents:(id)arg1;	// IMP=0x001000000047d94f
- (void)_presentAdvisory:(id)arg1;	// IMP=0x001000000047d77c
- (void)idleTimerDidTimeout:(id)arg1;	// IMP=0x001000000047d646
- (void)_updateArrivalEndTimerIfNeeded;	// IMP=0x001000000047d3e7
- (_Bool)_sceneInBackground;	// IMP=0x001000000047d313
- (void)_pauseOrResumeRealtimeUpdatesIfNeeded;	// IMP=0x001000000047d134
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;	// IMP=0x001000000047cf32
- (id)transitVehicleUpdater:(id)arg1 shouldUpdateVehiclePositionsForTripIDs:(id)arg2;	// IMP=0x001000000047cc34
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000047cae8
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x001000000047c9d0
- (_Bool)_shouldFrameVehiclePositions;	// IMP=0x001000000047c90e
- (void)_updateTransitVehicleUpdaterIfNeeded;	// IMP=0x001000000047c547
- (id)_stepForTransitVehicleUpdater;	// IMP=0x001000000047c539
- (void)_updateRecenterButtonVisibility;	// IMP=0x001000000047c432
- (_Bool)_shouldShowRecenterButton;	// IMP=0x001000000047c416
- (void)_recenterButtonTapped:(id)arg1;	// IMP=0x001000000047c23b
- (id)_recenterButton;	// IMP=0x001000000047bf87
- (void)_didReturnToDefaultZoomPan;	// IMP=0x001000000047bf69
- (void)_didLeaveDefaultZoomPan;	// IMP=0x001000000047bf07
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x001000000047bef5
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;	// IMP=0x001000000047bee3
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x001000000047bed1
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x001000000047bebf
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;	// IMP=0x001000000047bead
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000047bcc9
- (void)_checkRouteProximityForManualFraming:(id)arg1;	// IMP=0x001000000047b922
- (void)_frameCurrentStep;	// IMP=0x001000000047b6d2
- (_Bool)_shouldUseManualFraming;	// IMP=0x001000000047b6b6
- (void)_updateNavigationDisplayForDisplayedStep;	// IMP=0x001000000047b570
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x001000000047b50c
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x001000000047b467
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x001000000047b44f
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x001000000047b449
- (_Bool)wantsMapSelectionControl;	// IMP=0x001000000047b441
- (void)container:(id)arg1 didChangeContainerStyle:(unsigned long long)arg2;	// IMP=0x001000000047b42f
- (void)container:(id)arg1 didPresentContainee:(id)arg2 finished:(_Bool)arg3;	// IMP=0x001000000047b389
- (void)_performWhenTrayPresented:(CDUnknownBlockType)arg1;	// IMP=0x001000000047b33c
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x001000000047b25c
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapGetTicketsForSegments:(id)arg2;	// IMP=0x001000000047b0a4
- (void)transitDirectionsStepsListDataSource:(id)arg1 willExpandItem:(id)arg2;	// IMP=0x001000000047b05e
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateActiveGuidanceStep:(id)arg2;	// IMP=0x001000000047ae9b
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateDisplayedGuidanceStep:(id)arg2;	// IMP=0x001000000047ac57
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapIncidentsCell:(id)arg2 withAdvisory:(id)arg3;	// IMP=0x001000000047ac42
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;	// IMP=0x001000000047a80a
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapRowForItem:(id)arg2;	// IMP=0x001000000047a49c
- (void)transitDirectionsStepsListDataSource:(id)arg1 didSelectTrip:(id)arg2;	// IMP=0x001000000047a395
- (void)directionsStepsListDidTapRAPButton:(id)arg1;	// IMP=0x001000000047a26e
- (void)directionsStepsListDidTapShareButton:(id)arg1;	// IMP=0x001000000047a0b4
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(id)arg2;	// IMP=0x001000000047a0ae
- (void)transitNavigationTrayDidTapClose:(id)arg1;	// IMP=0x0010000000479f53
- (void)didEndDisplayingInLockScreen;	// IMP=0x0010000000479f4d
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000479f37
- (_Bool)_isDisplayingManuallySelectedStep;	// IMP=0x0010000000479e6a
- (void)_updateAnnotationsForCurrentRoute;	// IMP=0x0010000000479c77
- (void)_updateCurrentRouteIfNeeded;	// IMP=0x0010000000479a17
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000479a0c
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
- (_Bool)permitsLookAroundShowing;	// IMP=0x00100000004799c1
- (_Bool)permitsWeatherShowing;	// IMP=0x00100000004799b9
- (id)mapViewDelegate;	// IMP=0x0010000000479984
- (_Bool)_isAuthorizedForPreciseLocation;	// IMP=0x0010000000479922
- (void)leaveStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000047991c
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000047955a
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000478b3f
- (void)enterStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000478b39
- (id)fullscreenViewController;	// IMP=0x0010000000478b2b
- (id)personalizedItemSources;	// IMP=0x00100000004789ff
- (_Bool)showsMapView;	// IMP=0x00100000004789f7
- (id)init;	// IMP=0x00100000004787fd
- (void)dealloc;	// IMP=0x00100000004787a7
- (void)placeCardViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000047872f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapItem *mapItemForLookAroundButton;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly) Class superclass;

@end

