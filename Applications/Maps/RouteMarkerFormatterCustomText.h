//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RouteMarkerFormatterCustomText : NSObject
{
    NSArray *_routes;	// 8 = 0x8
    unsigned long long _selectedRouteIndex;	// 16 = 0x10
    NSString *_selectedRouteCustomText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000351df4
@property(readonly, copy, nonatomic) NSString *selectedRouteCustomText; // @synthesize selectedRouteCustomText=_selectedRouteCustomText;
@property(readonly, nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (id)markerInfoForRoute:(id)arg1;	// IMP=0x0010000000351ce2
- (id)initWithRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 customSelectedRouteText:(id)arg3;	// IMP=0x0010000000351c23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
