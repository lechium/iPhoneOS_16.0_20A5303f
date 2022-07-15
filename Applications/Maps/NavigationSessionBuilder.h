//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, RouteCollection;

@interface NavigationSessionBuilder : NSObject
{
    RouteCollection *_routeCollection;	// 8 = 0x8
    GEOMapServiceTraits *_mapServiceTraits;	// 16 = 0x10
    unsigned long long _mapsSessionInitiator;	// 24 = 0x18
    struct NavigationDetailsOptions _navigationDetailsOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000899c67
@property(nonatomic) unsigned long long mapsSessionInitiator; // @synthesize mapsSessionInitiator=_mapsSessionInitiator;
@property(retain, nonatomic) GEOMapServiceTraits *mapServiceTraits; // @synthesize mapServiceTraits=_mapServiceTraits;
@property(nonatomic) struct NavigationDetailsOptions navigationDetailsOptions; // @synthesize navigationDetailsOptions=_navigationDetailsOptions;
@property(retain, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
- (id)build;	// IMP=0x0010000000899a15
- (id)initWithRouteCollection:(id)arg1 navigationDetailsOptions:(struct NavigationDetailsOptions)arg2 mapServiceTraits:(id)arg3 andSessionInitiator:(unsigned long long)arg4;	// IMP=0x0010000000899960

@end
