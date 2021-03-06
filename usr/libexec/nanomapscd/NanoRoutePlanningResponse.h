//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, MNTraceRecordingData, NSArray, NSDictionary, NSError, NSUUID;

@interface NanoRoutePlanningResponse : NSObject
{
    NSDictionary *_userInfoByRouteID;	// 8 = 0x8
    NSArray *_routeIDs;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSArray *_companionRoutes;	// 32 = 0x20
    unsigned long long _routeOrigin;	// 40 = 0x28
    NSError *_lastError;	// 48 = 0x30
    unsigned long long _expectedNumberOfRoutes;	// 56 = 0x38
    MNTraceRecordingData *_traceRecordingData;	// 64 = 0x40
    NSUUID *_selectedRouteID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000004106
+ (_Bool)_canRunNavigationForRoute:(id)arg1;	// IMP=0x00100000000029c7
- (void).cxx_destruct;	// IMP=0x0020000000004809
@property(retain, nonatomic) NSUUID *selectedRouteID; // @synthesize selectedRouteID=_selectedRouteID;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(nonatomic) unsigned long long expectedNumberOfRoutes; // @synthesize expectedNumberOfRoutes=_expectedNumberOfRoutes;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) unsigned long long routeOrigin; // @synthesize routeOrigin=_routeOrigin;
@property(readonly, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) NSArray *companionRoutes; // @synthesize companionRoutes=_companionRoutes;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000463a
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000410e
- (void)_populateCopy:(id)arg1;	// IMP=0x0010000000004075
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004041
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000400d
- (id)snapshot;	// IMP=0x0010000000003e80
- (_Bool)canNavigateRouteWithID:(id)arg1;	// IMP=0x0010000000003e0b
- (id)userInfoForRouteWithID:(id)arg1;	// IMP=0x0010000000003dd6
- (id)routeWithID:(id)arg1;	// IMP=0x0010000000003be3
@property(readonly, nonatomic) GEOComposedRoute *selectedRoute;
@property(readonly, nonatomic) _Bool hasReceivedAllExpectedRoutes;
@property(readonly, nonatomic) unsigned long long numberOfRoutes;
- (id)_generateCompanionRouteFromComposedRoute:(id)arg1;	// IMP=0x0010000000003862
- (void)_generateCompanionRoutesFromComposedRoutes;	// IMP=0x001000000000370a
- (id)companionRouteWithID:(id)arg1;	// IMP=0x00100000000032b5
- (id)selectedCompanionRoute;	// IMP=0x0010000000003256
- (void)setObject:(id)arg1 forUserInfoKey:(id)arg2 forRouteID:(id)arg3;	// IMP=0x0010000000002ea0
- (void)_setRoutes:(id)arg1 withRouteIDs:(id)arg2;	// IMP=0x0010000000002b36
- (id)init;	// IMP=0x001000000000298b

@end

