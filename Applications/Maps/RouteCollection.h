//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, Route;

@interface RouteCollection : NSObject
{
    NSArray *_alternateRoutes;	// 8 = 0x8
    unsigned long long _currentRouteIndex;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0010000000626e9e
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
- (unsigned long long)hash;	// IMP=0x0010000000626dc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000626cbe
@property(readonly, nonatomic) NSArray *uniqueRouteIDs;
- (unsigned long long)indexOfRoute:(id)arg1;	// IMP=0x0010000000626be4
- (unsigned long long)indexForUniqueRouteID:(id)arg1;	// IMP=0x0010000000626a5b
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) Route *currentRoute;
@property(readonly, nonatomic) unsigned long long count;
- (id)routeCollectionByReplacingAlternateComposedRoutes:(id)arg1 withTraffics:(id)arg2;	// IMP=0x001000000062666b
- (id)routeCollectionByReplacingAlternateRoutes:(id)arg1;	// IMP=0x0010000000626592
- (id)routeCollectionByChangingCurrentRouteIndex:(unsigned long long)arg1;	// IMP=0x0010000000626523
@property(readonly) NSString *shortDescription;
- (id)description;	// IMP=0x0010000000626303
- (id)initWithComposedRoutes:(id)arg1 currentRouteIndex:(unsigned long long)arg2;	// IMP=0x00100000006260f1
- (id)initWithRoutes:(id)arg1 currentRouteIndex:(unsigned long long)arg2;	// IMP=0x0010000000625cd8
@property(readonly) NSArray *composedRoutes;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000006270ed
- (void)enumerateRoutesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000626f9b
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0010000000626f89
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000626f2a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000626f18
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000626ec6
- (id)initWithRouteSet:(id)arg1;	// IMP=0x001000000071bac2

@end
