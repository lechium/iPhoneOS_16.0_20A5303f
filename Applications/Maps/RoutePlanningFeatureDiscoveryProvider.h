//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSArray, RouteCollection;
@protocol TransitPayActionDelegate;

@interface RoutePlanningFeatureDiscoveryProvider : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
    RouteCollection *_routeCollection;	// 24 = 0x18
    NSArray *_sources;	// 32 = 0x20
    FeatureDiscoveryModel *_suggestedModel;	// 40 = 0x28
    CDUnknownBlockType _changeHandler;	// 48 = 0x30
    id <TransitPayActionDelegate> _transitPayActionDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000090fb04
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate; // @synthesize transitPayActionDelegate=_transitPayActionDelegate;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) FeatureDiscoveryModel *suggestedModel; // @synthesize suggestedModel=_suggestedModel;
- (void)source:(id)arg1 didUpdateAvailability:(_Bool)arg2;	// IMP=0x001000000090f994
- (id)_bestModelForCurrentState;	// IMP=0x001000000090f601
- (_Bool)_updateCurrentModelAndNotify:(_Bool)arg1;	// IMP=0x001000000090f3cb
- (_Bool)updateWithTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x001000000090f0f4
- (id)init;	// IMP=0x001000000090ee92

@end

