//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapView, NSLayoutXAxisAnchor, NSString, WeatherLocationDataProvider, WeatherMapPanningCoordinator;
@protocol FloatingControlsViewControllerActionCoordination, FloatingControlsViewControllerOpenSettingsDelegate, MapViewProviding;

@interface FloatingControlsViewController
{
    _Bool _isConfigured;	// 8 = 0x8
    _Bool _automaticallyUpdateCompassInsets;	// 9 = 0x9
    _Bool _hasReceivedLocationUpdate;	// 10 = 0xa
    _Bool _visible;	// 11 = 0xb
    long long _settingsTipState;	// 16 = 0x10
    id <FloatingControlsViewControllerActionCoordination> _actionCoordinator;	// 24 = 0x18
    id <MapViewProviding> _mapViewProviding;	// 32 = 0x20
    long long _visibleControls;	// 40 = 0x28
    double _alpha;	// 48 = 0x30
    NSLayoutXAxisAnchor *_floatingButtonLeadingGuide;	// 56 = 0x38
    double _margin;	// 64 = 0x40
    NSString *_blurGroupName;	// 72 = 0x48
    id <FloatingControlsViewControllerOpenSettingsDelegate> _openSettingsDelegate;	// 80 = 0x50
    WeatherLocationDataProvider *_weatherLocationDataProvider;	// 88 = 0x58
    WeatherMapPanningCoordinator *_weatherMapPanningCoordinator;	// 96 = 0x60
    struct CGRect _floatingButtonsFrame;	// 104 = 0x68
    struct CGRect _lookAroundButtonFrame;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000460c50
@property(retain, nonatomic) WeatherMapPanningCoordinator *weatherMapPanningCoordinator; // @synthesize weatherMapPanningCoordinator=_weatherMapPanningCoordinator;
@property(retain, nonatomic) WeatherLocationDataProvider *weatherLocationDataProvider; // @synthesize weatherLocationDataProvider=_weatherLocationDataProvider;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool hasReceivedLocationUpdate; // @synthesize hasReceivedLocationUpdate=_hasReceivedLocationUpdate;
@property(nonatomic) _Bool automaticallyUpdateCompassInsets; // @synthesize automaticallyUpdateCompassInsets=_automaticallyUpdateCompassInsets;
@property(nonatomic) __weak id <FloatingControlsViewControllerOpenSettingsDelegate> openSettingsDelegate; // @synthesize openSettingsDelegate=_openSettingsDelegate;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) struct CGRect lookAroundButtonFrame; // @synthesize lookAroundButtonFrame=_lookAroundButtonFrame;
@property(readonly, nonatomic) struct CGRect floatingButtonsFrame; // @synthesize floatingButtonsFrame=_floatingButtonsFrame;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *floatingButtonLeadingGuide; // @synthesize floatingButtonLeadingGuide=_floatingButtonLeadingGuide;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) long long visibleControls; // @synthesize visibleControls=_visibleControls;
@property(nonatomic) __weak id <MapViewProviding> mapViewProviding; // @synthesize mapViewProviding=_mapViewProviding;
@property(nonatomic) __weak id <FloatingControlsViewControllerActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) long long settingsTipState; // @synthesize settingsTipState=_settingsTipState;
- (void)didChangeFocusedVenue:(id)arg1;	// IMP=0x0010000000460a71
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000004609cc
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000460927
- (void)_updateAlphaAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000046073a
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004606ef
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004606da
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;	// IMP=0x00100000004606c0
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;	// IMP=0x00100000004606ba
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000046069d
- (double)compassDiameter;	// IMP=0x001000000046064d
- (double)compassMargin;	// IMP=0x001000000046063b
- (void)_addSubview:(id)arg1 withConstraints:(id)arg2;	// IMP=0x0010000000460590
- (long long)_sanitizedControlsFromControls:(long long)arg1;	// IMP=0x0010000000460587
- (void)setSearchSession:(id)arg1;	// IMP=0x0010000000460581
- (void)refreshControls;	// IMP=0x001000000046057b
- (void)hideControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000046054a
- (void)showControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000460536
- (_Bool)shouldShow:(long long)arg1 withControlOptions:(long long)arg2;	// IMP=0x001000000046050e
- (_Bool)shouldHide:(long long)arg1 withControlOptions:(long long)arg2;	// IMP=0x00100000004604e1
- (id)controlsStackViewIfLoaded;	// IMP=0x0010000000460482
- (void)_updateCompassInsets;	// IMP=0x00100000004600d5
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000460094
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000045ff04
- (void)viewDidLoad;	// IMP=0x001000000045fdfa
@property(readonly, nonatomic) MKMapView *mapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
