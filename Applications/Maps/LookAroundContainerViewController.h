//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LookAroundActionCoordinator, LookAroundPIPViewController, LookAroundPuckViewController, LookAroundTTRButtonView, LookAroundTrayContaineeViewController, MKLookAroundEntryPoint, MKLookAroundView, MKMapItem, NSString, UITapGestureRecognizer, UIView;
@protocol LookAroundContainerViewControllerAnimationDelegate, LookAroundPIPDataCoordinator, ShareItemSource;

@interface LookAroundContainerViewController
{
    MKLookAroundEntryPoint *_entryPoint;	// 8 = 0x8
    UIView *_lookAroundViewOriginalSuperview;	// 16 = 0x10
    LookAroundPIPViewController *_pipViewController;	// 24 = 0x18
    LookAroundPuckViewController *_puckViewController;	// 32 = 0x20
    LookAroundTrayContaineeViewController *_trayContaineeViewController;	// 40 = 0x28
    LookAroundTTRButtonView *_ttrButtonView;	// 48 = 0x30
    unsigned long long _displayState;	// 56 = 0x38
    unsigned long long _locationState;	// 64 = 0x40
    UITapGestureRecognizer *_pipViewTapGestureRecognizer;	// 72 = 0x48
    _Bool _containerIsVisible;	// 80 = 0x50
    _Bool _forceUpdatePIPLayout;	// 81 = 0x51
    _Bool _isRespondingToPanGesture;	// 82 = 0x52
    _Bool _showsFullScreen;	// 83 = 0x53
    _Bool _showsLabels;	// 84 = 0x54
    _Bool _modeIsCurrent;	// 85 = 0x55
    _Bool _modeTransition;	// 86 = 0x56
    _Bool _selectingLabelMarker;	// 87 = 0x57
    double _currentDragRatio;	// 88 = 0x58
    double _currentDragScale;	// 96 = 0x60
    struct CGSize _viewWillTransitionToSize;	// 104 = 0x68
    id <LookAroundContainerViewControllerAnimationDelegate> _animationDelegate;	// 120 = 0x78
    LookAroundActionCoordinator *_actionCoordinator;	// 128 = 0x80
    MKLookAroundView *_lookAroundView;	// 136 = 0x88
    struct CGRect _lookAroundButtonFrame;	// 144 = 0x90
    struct CGRect _originFrame;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000005d846c
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) struct CGRect lookAroundButtonFrame; // @synthesize lookAroundButtonFrame=_lookAroundButtonFrame;
@property(readonly, nonatomic) MKLookAroundView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
@property(readonly, nonatomic) LookAroundActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) __weak id <LookAroundContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (id)createActivityViewControllerForCurrentContext;	// IMP=0x00100000005d82fc
@property(readonly, nonatomic) id <ShareItemSource> currentShareItemSource;
- (int)_targetForAnalytics;	// IMP=0x00100000005d8040
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;	// IMP=0x00100000005d7e6d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000005d7e50
- (void)_updateTTRButtonState;	// IMP=0x00100000005d7ddc
- (void)_setModeDidResignCurrent;	// IMP=0x00100000005d7db0
- (void)_setModeDidBecomeCurrent;	// IMP=0x00100000005d7d21
- (void)_removePuckViewFromMapView;	// IMP=0x00100000005d7c9c
- (void)_insertPuckViewIntoMapView:(id)arg1;	// IMP=0x00100000005d7a03
- (_Bool)_shouldTakeSidebarIntoAccount;	// IMP=0x00100000005d7942
- (_Bool)_shouldTakePIPViewHeightIntoAccount;	// IMP=0x00100000005d774d
- (void)_shareCurrentLocation:(id)arg1;	// IMP=0x00100000005d758f
- (struct CGRect)_sanitizedOriginFrame;	// IMP=0x00100000005d7344
- (void)_reportAnIssue;	// IMP=0x00100000005d726d
- (void)_toggleShowingLabels:(_Bool)arg1;	// IMP=0x00100000005d71c9
- (void)_captureActivityCardAnalyticsForUserAction:(int)arg1 onTarget:(int)arg2;	// IMP=0x00100000005d6f60
- (id)titleForMapActivity:(id)arg1;	// IMP=0x00100000005d6eb7
- (id)urlForMapActivity:(id)arg1;	// IMP=0x00100000005d6e9a
- (void)lookAroundViewWillChangeLocationInfo:(id)arg1;	// IMP=0x00100000005d6e18
- (void)lookAroundView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x00100000005d6b6f
- (void)lookAroundView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x00100000005d6861
- (void)lookAroundView:(id)arg1 didChangeLocationInfo:(id)arg2;	// IMP=0x00100000005d67d5
- (void)lookAroundView:(id)arg1 didChangeCameraFrame:(id)arg2;	// IMP=0x00100000005d675d
- (void)lookAroundViewDidPan:(id)arg1;	// IMP=0x00100000005d6725
- (void)lookAroundView:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;	// IMP=0x00100000005d66d7
- (void)lookAroundView:(id)arg1 didTapAtPoint:(struct CGPoint)arg2 areaAvailable:(_Bool)arg3;	// IMP=0x00100000005d6582
- (void)lookAroundView:(id)arg1 didTapLabelMarker:(id)arg2;	// IMP=0x00100000005d654a
- (void)lookAroundViewDidStopUserInteraction:(id)arg1;	// IMP=0x00000000005d64d2
- (void)lookAroundViewDidStartUserInteraction:(id)arg1;	// IMP=0x00100000005d645a
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00100000005d6454
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00100000005d644e
@property(readonly, nonatomic) UIView *passThroughView;
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapReportAnIssueButton:(id)arg2;	// IMP=0x00100000005d63b0
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapShareButton:(id)arg2;	// IMP=0x00100000005d639b
- (void)lookAroundTrayContaineeViewController:(id)arg1 didTapToggleLabelsButton:(id)arg2;	// IMP=0x00100000005d6347
- (void)lookAroundTTRButtonView:(id)arg1 didTapTTRButton:(id)arg2;	// IMP=0x00100000005d62d7
- (void)mapView:(id)arg1 didChangeLookAroundAvailability:(long long)arg2;	// IMP=0x00100000005d625a
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x00100000005d6183
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000005d610b
- (void)mapView:(id)arg1 willSelectLabelMarker:(id)arg2;	// IMP=0x00100000005d6057
- (void)mapViewDidStopUserInteraction:(id)arg1;	// IMP=0x00100000005d5fd5
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x00100000005d5f5d
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;	// IMP=0x00100000005d5eac
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000005d5e11
- (void)lookAroundPIPDataCoordinatorDidEndMovingLookAroundView:(id)arg1;	// IMP=0x00100000005d5d29
- (void)lookAroundPIPDataCoordinatorDidStartPanningMapView:(id)arg1;	// IMP=0x00100000005d5c1f
- (long long)preferredUserInterfaceStyle;	// IMP=0x00100000005d5b4d
- (void)updateMapEdgeInsets;	// IMP=0x00100000005d57a0
- (double)sidebarWidthIfNeeded;	// IMP=0x00100000005d55e4
- (double)pipViewWidthIfNeeded;	// IMP=0x00100000005d53ac
- (double)topEdgeInset;	// IMP=0x00100000005d51ad
- (_Bool)_pipHugsLeading;	// IMP=0x00100000005d50a4
- (void)resumePropagatingEdgeInsets;	// IMP=0x00100000005d509e
- (void)suspendPropagatingEdgeInsets;	// IMP=0x00100000005d5098
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x00100000005d4e9b
- (void)popLastViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000005d4d94
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x00100000005d4ce8
- (_Bool)useBackdrop;	// IMP=0x00100000005d4ce0
- (void)snapToLayout:(unsigned long long)arg1;	// IMP=0x00100000005d4c9f
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x00100000005d4c54
- (void)animateTransitionToFullScreen:(_Bool)arg1;	// IMP=0x00100000005d455c
- (void)prepareForExit;	// IMP=0x00100000005d4548
- (void)prepareForExitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000005d4461
- (void)_showPuckAnimated;	// IMP=0x00100000005d436f
- (void)didCompleteModeTransition;	// IMP=0x00100000005d4352
- (void)animateToModeTransition:(id)arg1;	// IMP=0x00100000005d3bb2
- (void)animateFromModeTransition:(id)arg1;	// IMP=0x00100000005d33e0
- (void)_showTTRButton:(_Bool)arg1;	// IMP=0x00100000005d2fc5
- (void)_setupForPIP;	// IMP=0x00100000005d2d03
- (void)_setupForFullScreen;	// IMP=0x00100000005d2a77
- (void)_handlePIPViewTap:(id)arg1;	// IMP=0x00100000005d2a5b
- (_Bool)_getRatioControls:(double *)arg1 scale:(double *)arg2 forContentHeightValue:(double)arg3;	// IMP=0x00100000005d28e9
- (void)_updateLayoutWithCurrentValue;	// IMP=0x00100000005d27f9
- (void)_updateLayoutWithValue:(double)arg1;	// IMP=0x00100000005d26ef
- (struct CGAffineTransform)transformForPIPView;	// IMP=0x00100000005d251a
- (struct CGRect)frameForPIPView;	// IMP=0x00100000005d1c5b
- (void)_updatePIPLayout;	// IMP=0x00100000005d185e
- (void)_updateCompassLayout;	// IMP=0x00100000005d16e0
- (struct UIEdgeInsets)compassInsets;	// IMP=0x00100000005d1457
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000005d1284
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000005d106d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000005d0fb4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000005d0ec2
- (void)viewDidLoad;	// IMP=0x00100000005d0de6
- (void)viewDidLayoutSubviews;	// IMP=0x00100000005d0d90
- (id)pipViewController;	// IMP=0x00100000005d0bb6
- (id)puckViewController;	// IMP=0x00100000005d0af8
@property(readonly, nonatomic) id <LookAroundPIPDataCoordinator> dataCoordinator;
@property(readonly, nonatomic) MKMapItem *currentMapItem;
@property(readonly, nonatomic) _Bool isDisplayingLookAroundPIP;
@property(readonly, nonatomic) _Bool isDisplayingLookAroundFullScreen;
- (void)dealloc;	// IMP=0x00100000005d09d2
- (id)initWithEntryPoint:(id)arg1 lookAroundView:(id)arg2 showsFullScreen:(_Bool)arg3;	// IMP=0x00100000005d0712
- (id)_createOrReuseLookAroundView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005d060e
- (void)_commonInit;	// IMP=0x00100000005d04d8
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000005d04d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
