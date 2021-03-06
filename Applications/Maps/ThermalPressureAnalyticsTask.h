//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, MapsPowerSourceController, MapsThermalPressureController, NSString, PlatformController;
@protocol OS_dispatch_queue;

@interface ThermalPressureAnalyticsTask : NSObject
{
    PlatformController *_platformController;	// 8 = 0x8
    MapsThermalPressureController *_thermalPressureController;	// 16 = 0x10
    MNNavigationService *_navigationService;	// 24 = 0x18
    MapsPowerSourceController *_powerSourceController;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
}

+ (long long)creationPreference;	// IMP=0x0020000000736052
- (void).cxx_destruct;	// IMP=0x002000000073688c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(nonatomic) __weak MapsPowerSourceController *powerSourceController; // @synthesize powerSourceController=_powerSourceController;
@property(nonatomic) __weak MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak MapsThermalPressureController *thermalPressureController; // @synthesize thermalPressureController=_thermalPressureController;
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000007367cf
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000007367c9
- (void)powerSourceController:(id)arg1 didUpdateChargingState:(long long)arg2;	// IMP=0x001000000073657b
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x001000000073625f
- (void)didUpdateThermalPressureLevel:(int)arg1;	// IMP=0x001000000073605d
- (int)_chargingState;	// IMP=0x0010000000736004
- (int)_mapType;	// IMP=0x0010000000735d98
- (void)dealloc;	// IMP=0x0010000000735c6a
- (id)initWithPlatformController:(id)arg1 thermalPressureController:(id)arg2 navigationService:(id)arg3 powerSourceController:(id)arg4;	// IMP=0x00100000007358d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

