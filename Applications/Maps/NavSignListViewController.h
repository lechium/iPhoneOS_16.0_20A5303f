//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DirectionsElevationGraphView, MNGuidanceLaneInfo, MNGuidanceSignInfo, MUBlurView, MUGradientView, NSLayoutConstraint, NSNumber, NSString, NavSignFooterView, NavigationDebugViewsController, Route, RouteStepListDataSource, RouteStepListMetrics, UICollectionView, UIView;
@protocol NavSignListViewControllerDelegate;

@interface NavSignListViewController : UIViewController
{
    NSNumber *_computedWidth;	// 8 = 0x8
    RouteStepListMetrics *_metrics;	// 16 = 0x10
    _Bool _firstSetupDone;	// 24 = 0x18
    _Bool _isRerouting;	// 25 = 0x19
    MNGuidanceSignInfo *_latestSignGuidance;	// 32 = 0x20
    MNGuidanceLaneInfo *_latestLaneInfo;	// 40 = 0x28
    MUBlurView *_backgroundView;	// 48 = 0x30
    UIView *_graphContainerView;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    MUGradientView *_gradientView;	// 72 = 0x48
    NSLayoutConstraint *_containerViewHeightConstraint;	// 80 = 0x50
    NSLayoutConstraint *_collectionViewTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_gradientViewTopConstraint;	// 96 = 0x60
    NSLayoutConstraint *_gradientViewBottomConstraint;	// 104 = 0x68
    NSLayoutConstraint *_graphTopConstraint;	// 112 = 0x70
    NSLayoutConstraint *_footerHeightConstraint;	// 120 = 0x78
    _Bool _expanded;	// 128 = 0x80
    _Bool _dragging;	// 129 = 0x81
    _Bool _connectedToCarPlay;	// 130 = 0x82
    _Bool _laneGuidanceActive;	// 131 = 0x83
    _Bool _debugViewControllerEnabled;	// 132 = 0x84
    double _layoutProgress;	// 136 = 0x88
    double _activeStepFadeIn;	// 144 = 0x90
    id <NavSignListViewControllerDelegate> _signDelegate;	// 152 = 0x98
    double _cornerRadius;	// 160 = 0xa0
    unsigned long long _cornerMask;	// 168 = 0xa8
    double _cardWidth;	// 176 = 0xb0
    Route *_route;	// 184 = 0xb8
    MUBlurView *_graphBackgroundView;	// 192 = 0xc0
    DirectionsElevationGraphView *_graphView;	// 200 = 0xc8
    UICollectionView *_collectionView;	// 208 = 0xd0
    NavSignFooterView *_footerView;	// 216 = 0xd8
    RouteStepListDataSource *_dataSource;	// 224 = 0xe0
    unsigned long long _activeStepIndex;	// 232 = 0xe8
    unsigned long long _selectedStepIndex;	// 240 = 0xf0
    NavigationDebugViewsController *_debugViewController;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00200000001e7409
@property(nonatomic) _Bool debugViewControllerEnabled; // @synthesize debugViewControllerEnabled=_debugViewControllerEnabled;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewController; // @synthesize debugViewController=_debugViewController;
@property(nonatomic, getter=isLaneGuidanceActive) _Bool laneGuidanceActive; // @synthesize laneGuidanceActive=_laneGuidanceActive;
@property(nonatomic) unsigned long long selectedStepIndex; // @synthesize selectedStepIndex=_selectedStepIndex;
@property(nonatomic) unsigned long long activeStepIndex; // @synthesize activeStepIndex=_activeStepIndex;
@property(retain, nonatomic) RouteStepListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NavSignFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DirectionsElevationGraphView *graphView; // @synthesize graphView=_graphView;
@property(retain, nonatomic) MUBlurView *graphBackgroundView; // @synthesize graphBackgroundView=_graphBackgroundView;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(nonatomic) double cardWidth; // @synthesize cardWidth=_cardWidth;
@property(readonly, nonatomic, getter=isConnectedToCarPlay) _Bool connectedToCarPlay; // @synthesize connectedToCarPlay=_connectedToCarPlay;
@property(nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) __weak id <NavSignListViewControllerDelegate> signDelegate; // @synthesize signDelegate=_signDelegate;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) double activeStepFadeIn; // @synthesize activeStepFadeIn=_activeStepFadeIn;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (_Bool)_shouldShowDebugViewController;	// IMP=0x00100000001e7192
- (void)_triggerSignListAnalytics;	// IMP=0x00100000001e6c77
- (double)_graphTopPosition;	// IMP=0x00100000001e6c4c
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001e6b30
- (void)_toggleExpansionAnimated:(_Bool)arg1;	// IMP=0x00100000001e6912
- (void)_didTap:(id)arg1;	// IMP=0x00100000001e6840
- (void)_didPan:(id)arg1;	// IMP=0x00100000001e64ac
- (void)_updateCurrentManeuverBackground;	// IMP=0x00100000001e630f
- (double)_signContainerAvailableHeight;	// IMP=0x00100000001e622d
- (void)_insertGraphView;	// IMP=0x00100000001e5ef8
- (void)_updateGraphContainerTop;	// IMP=0x00100000001e5e87
- (void)_updateGraphViewIfNeeded;	// IMP=0x00100000001e5d6d
- (void)_updateSelectionBackgrounds;	// IMP=0x00100000001e5adf
- (void)_cleanupStepCountdowns;	// IMP=0x00100000001e5743
- (void)updateHeightConstraints;	// IMP=0x00100000001e5502
- (void)_updateLaneGuidancePositioning;	// IMP=0x00100000001e5159
- (void)_updateLayoutProgressWithDuration:(double)arg1;	// IMP=0x00100000001e4f8b
- (void)_updateActiveStepIndexAnimated:(_Bool)arg1;	// IMP=0x00100000001e4ba2
- (void)_updateRouteFromNavigationService;	// IMP=0x00100000001e49be
- (void)_handleNewRoute;	// IMP=0x00100000001e4970
- (void)_cancelReroute;	// IMP=0x00100000001e4895
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x00100000001e4883
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x00100000001e4871
- (void)navigationService:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;	// IMP=0x00100000001e485f
- (void)navigationServiceDidCancelReroute:(id)arg1;	// IMP=0x00100000001e484d
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x00100000001e476f
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00100000001e4416
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00100000001e4111
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00100000001e3fc4
- (void)_processSignUpdate;	// IMP=0x00100000001e3ba4
- (void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00100000001e3635
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000001e336e
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00100000001e3366
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000001e335e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00100000001e31a6
- (unsigned long long)_stateForItemIndex:(unsigned long long)arg1;	// IMP=0x00100000001e3156
- (_Bool)_showsHairlineForItemIndex:(unsigned long long)arg1;	// IMP=0x00100000001e3106
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000001e2e8c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000001e2b61
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000001e2adf
- (Class)cellClassForItemType:(unsigned long long)arg1;	// IMP=0x00100000001e2ab1
- (void)_reapplySignCountdown;	// IMP=0x00100000001e2981
- (void)reloadStepIndeces:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00100000001e2828
- (void)reloadUIForDataSource:(id)arg1;	// IMP=0x00100000001e2759
- (void)reloadDataSource:(id)arg1;	// IMP=0x00100000001e25ef
- (void)cell:(id)arg1 setPressed:(_Bool)arg2;	// IMP=0x00100000001e23db
- (void)_updateCollectionViewBottomInset;	// IMP=0x00100000001e223d
- (void)clearSelectionAnimated:(_Bool)arg1;	// IMP=0x00100000001e21f6
- (void)updateFooterConstraints;	// IMP=0x00100000001e2131
- (id)_displayIndexPath;	// IMP=0x00100000001e20db
- (unsigned long long)_displayStepIndex;	// IMP=0x00100000001e209f
@property(readonly, nonatomic) double footerBottomPosition;
- (double)_lastSignHeight;	// IMP=0x00100000001e1e3e
@property(readonly, nonatomic) double collapsedHeight;
- (double)_collapsedSignHeight;	// IMP=0x00100000001e1cbe
- (void)setConnectedToCarPlay:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001e1b01
@property(readonly, nonatomic) _Bool hasElevationGraph;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001e10bd
- (void)viewDidLayoutSubviews;	// IMP=0x00100000001e0e82
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00100000001e0d58
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001e0d06
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001e09fc
- (void)viewDidLoad;	// IMP=0x00100000001df018
- (void)loadView;	// IMP=0x00100000001defdf
- (void)dealloc;	// IMP=0x00100000001def2d
- (id)initWithSignDelegate:(id)arg1;	// IMP=0x00100000001ded89
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001ded81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

