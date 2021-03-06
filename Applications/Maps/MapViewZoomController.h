//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSBasedChromeViewController, MKMapView, NSString, NavigationDisplay;
@protocol MapViewZoomControllerDelegate;

@interface MapViewZoomController : NSObject
{
    unsigned long long _zoom;	// 8 = 0x8
    id <MapViewZoomControllerDelegate> _delegate;	// 16 = 0x10
    IOSBasedChromeViewController *_chromeViewController;	// 24 = 0x18
    NavigationDisplay *_navigationDisplay;	// 32 = 0x20
    double _currentCameraOffset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000ae3037
@property(nonatomic) double currentCameraOffset; // @synthesize currentCameraOffset=_currentCameraOffset;
- (double);	// IMP=0x0010000000ae3021
@property(retain, nonatomic) NavigationDisplay *navigationDisplay; // @synthesize navigationDisplay=_navigationDisplay;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak id <MapViewZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long zoom; // @synthesize zoom=_zoom;
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000ae2eb2
- (double)_horizontalCameraOffset;	// IMP=0x0010000000ae2d5b
- (void)_applyOffsetCameraForOverlay:(_Bool)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x0010000000ae2c1f
- (CDStruct_02837cd9)_boundingMapRectForLocation:(id)arg1;	// IMP=0x0010000000ae2abe
- (void)_zoomToOverview:(_Bool)arg1;	// IMP=0x0010000000ae2984
- (void)_zoomToLowGuidance:(_Bool)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000ae2887
- (void)_zoomToDetail:(_Bool)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000ae278d
- (void)updateCameraForTraits:(id)arg1 containerStyle:(unsigned long long)arg2;	// IMP=0x0010000000ae2663
- (void)setZoomToTargetWithRect:(CDStruct_02837cd9)arg1;	// IMP=0x0010000000ae2590
- (void)setZoomTo:(unsigned long long)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000ae24bf
- (void)setZoomTo:(unsigned long long)arg1;	// IMP=0x0010000000ae24a8
@property(readonly, nonatomic) MKMapView *mapView;
- (id)initWithNavigationDisplay:(id)arg1;	// IMP=0x0010000000ae23ad
- (void)dealloc;	// IMP=0x0010000000ae2324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

