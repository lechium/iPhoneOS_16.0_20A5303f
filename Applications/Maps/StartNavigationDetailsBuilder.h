//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEORouteAttributes, NSString, RouteCollection;

@interface StartNavigationDetailsBuilder : NSObject
{
    GEOCountryConfiguration *_countryConfiguration;	// 8 = 0x8
    GEORouteAttributes *_routeAttributes;	// 16 = 0x10
    NSString *_traceRecordingNameOverride;	// 24 = 0x18
    RouteCollection *_routeCollection;	// 32 = 0x20
    NSString *_tracePlaybackPath;	// 40 = 0x28
    struct NavigationDetailsOptions _options;	// 48 = 0x30
}

+ (struct NavigationDetailsOptions)defaultNavigationDetailsOptions;	// IMP=0x0040000000172dc3
- (void).cxx_destruct;	// IMP=0x00200000001739d9
@property(readonly, nonatomic) NSString *tracePlaybackPath; // @synthesize tracePlaybackPath=_tracePlaybackPath;
@property(readonly, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
@property(copy, nonatomic) NSString *traceRecordingNameOverride; // @synthesize traceRecordingNameOverride=_traceRecordingNameOverride;
@property(nonatomic) struct NavigationDetailsOptions options; // @synthesize options=_options;
@property(copy, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration; // @synthesize countryConfiguration=_countryConfiguration;
- (id)buildNavigationDetails;	// IMP=0x0010000000173024
- (id)initWithTracePlaybackPath:(id)arg1 routeCollection:(id)arg2;	// IMP=0x0010000000172f31
- (id)initWithRouteCollection:(id)arg1;	// IMP=0x0010000000172e9b

@end

