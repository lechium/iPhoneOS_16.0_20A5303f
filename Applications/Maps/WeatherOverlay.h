//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WeatherLocationDataProvider, WeatherMapPanningCoordinator, WeatherStackViewController;
@protocol ChromeOverlayHosting, MapViewProviding;

@interface WeatherOverlay : NSObject
{
    NSArray *_constraints;	// 8 = 0x8
    _Bool _hasLeadingEdgeLayout;	// 16 = 0x10
    id <ChromeOverlayHosting> _host;	// 24 = 0x18
    id <MapViewProviding> _mapViewProvider;	// 32 = 0x20
    unsigned long long _containerStyle;	// 40 = 0x28
    WeatherStackViewController *_stackViewController;	// 48 = 0x30
    WeatherLocationDataProvider *_locationDataProvider;	// 56 = 0x38
    WeatherMapPanningCoordinator *_mapPanningCoordinator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000067a15c
@property(retain, nonatomic) WeatherMapPanningCoordinator *mapPanningCoordinator; // @synthesize mapPanningCoordinator=_mapPanningCoordinator;
@property(retain, nonatomic) WeatherLocationDataProvider *locationDataProvider; // @synthesize locationDataProvider=_locationDataProvider;
@property(retain, nonatomic) WeatherStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(nonatomic) unsigned long long containerStyle; // @synthesize containerStyle=_containerStyle;
@property(nonatomic) __weak id <MapViewProviding> mapViewProvider; // @synthesize mapViewProvider=_mapViewProvider;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
- (void)weatherStackViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000067a023
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;	// IMP=0x0010000000679fbf
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0010000000679f74
- (id)weatherLocationDataProvider;	// IMP=0x0010000000679e98
- (void)_updateLocation;	// IMP=0x0010000000679e23
- (id)mapView;	// IMP=0x0010000000679d62
@property(nonatomic) double alpha;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000679af9
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)view;	// IMP=0x0010000000679a51
- (void)_updateLayout;	// IMP=0x00100000006799b1
- (void)_updateConstraintsIfNeeded;	// IMP=0x00100000006796d5
- (void)_invalidateConstraints;	// IMP=0x0010000000679690
- (void)_installInContentView:(id)arg1;	// IMP=0x0010000000679599

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

