//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeViewController, MKMapItem, Route;

@interface CarRouteGeniusAnnotationsManager : NSObject
{
    CarChromeViewController *_chromeViewController;	// 8 = 0x8
    Route *_route;	// 16 = 0x10
    MKMapItem *_destination;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000663045
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
- (id)mapView;	// IMP=0x0010000000662fe7
- (void)updateTrafficForRoute:(id)arg1;	// IMP=0x0010000000662e97
- (void)setComposedRoute:(id)arg1;	// IMP=0x001000000066295f
- (void)clearAnnotations;	// IMP=0x00100000006628bc
- (_Bool)_shouldIgnoreRoute;	// IMP=0x0010000000662845
- (void)_updateRouteAnnotation;	// IMP=0x0010000000662512
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;	// IMP=0x00100000006622e5
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x0010000000662281

@end

