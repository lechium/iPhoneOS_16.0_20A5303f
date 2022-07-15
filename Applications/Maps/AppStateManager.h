//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, NSString, PlatformController;

@interface AppStateManager : NSObject
{
    unsigned long long _defaultZoomLevel;	// 8 = 0x8
    AppCoordinator *_appCoordinator;	// 16 = 0x10
    PlatformController *_platformController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a7c293
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void)setPPTTestDirectionsPlan:(id)arg1;	// IMP=0x0010000000a7c23a
- (_Bool)tryMovingStepModeToStepAtIndex:(unsigned long long)arg1 forRouteWithHandle:(id)arg2;	// IMP=0x0010000000a7bdd3
- (void)setDirectionsPlan:(id)arg1 source:(long long)arg2;	// IMP=0x0010000000a79f90
- (void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x0010000000a783b4
- (void)resetNonActivityStateForMapView:(id)arg1;	// IMP=0x0010000000a7839f
- (id)directionsPlanWithFidelity:(unsigned long long)arg1;	// IMP=0x0010000000a782ea
- (id)mapsActivityWithFidelity:(unsigned long long)arg1;	// IMP=0x0010000000a772c1
- (void)openCommuteEntry:(id)arg1;	// IMP=0x0010000000a771ae
- (void)openTransitIncidents:(id)arg1;	// IMP=0x0010000000a77095
- (void)openMapsSuggestion:(id)arg1;	// IMP=0x0010000000a76f7f
- (void)openSearchWithQuery:(id)arg1;	// IMP=0x0010000000a76e45
- (id)iosChrome;	// IMP=0x0010000000a76e02
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000a76d81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
