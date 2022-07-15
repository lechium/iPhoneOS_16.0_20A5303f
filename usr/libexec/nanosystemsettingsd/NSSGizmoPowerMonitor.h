//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPSleepSettings, HKSPSleepStore, NPSManager, NSDictionary, NSString, _CDClientContext;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NSSGizmoPowerMonitor : NSObject
{
    int _psNotifyTokenAnyPowerSource;	// 8 = 0x8
    _CDClientContext *_context;	// 16 = 0x10
    NSObject<OS_os_transaction> *_keepAliveTransaction;	// 24 = 0x18
    NSDictionary *_powerSourceDescription;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HKSPSleepStore *_sleepStore;	// 48 = 0x30
    HKSPSleepSettings *_sleepSettings;	// 56 = 0x38
    NPSManager *_npsManager;	// 64 = 0x40
}

+ (id)sharedMonitor;	// IMP=0x0020000000015cf2
- (void).cxx_destruct;	// IMP=0x0020000000017d80
@property(retain, nonatomic) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property(retain, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
@property(retain, nonatomic) HKSPSleepStore *sleepStore; // @synthesize sleepStore=_sleepStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDictionary *powerSourceDescription; // @synthesize powerSourceDescription=_powerSourceDescription;
- (void)resetLevels;	// IMP=0x0010000000017c7f
- (void)addLevel:(long long)arg1;	// IMP=0x0010000000017aff
- (void)_setLevels:(id)arg1;	// IMP=0x00100000000179a1
- (id)levels;	// IMP=0x0010000000017903
- (_Bool)_droppedFromLastNotifiedLevel:(long long)arg1;	// IMP=0x0010000000017828
- (_Bool)substantialChangeFromLastNotifiedLevel:(long long)arg1;	// IMP=0x00100000000177e4
- (long long)substantialChange;	// IMP=0x001000000001779c
- (void)setLastKnownPowerLevelBeforeGoingOffCharger:(long long)arg1;	// IMP=0x00100000000176e9
- (long long)lastKnownPowerLevelBeforeGoingOffCharger;	// IMP=0x0010000000017657
- (_Bool)forceEnabledOverride;	// IMP=0x00100000000175b1
- (void)_registerForSleepSettingsChanges;	// IMP=0x00100000000173f8
- (id)sleepSchedulePredicate;	// IMP=0x0010000000017393
- (_Bool)_shouldPostNotificationForPowerLevel:(long long)arg1;	// IMP=0x0010000000017291
- (void)_updateSettings;	// IMP=0x0010000000017005
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;	// IMP=0x0010000000016f4b
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(_Bool)arg2;	// IMP=0x0010000000016e74
- (void)_loadSleepSettingsFrom:(id)arg1;	// IMP=0x0010000000016d79
- (void)_stopMonitoringForPowerUpdates;	// IMP=0x0010000000016c5e
- (void)_beginMonitoringForPowerUpdates;	// IMP=0x0010000000016a63
- (void)_removedFromChargerNotification;	// IMP=0x001000000001697b
- (void)_processOffChargerState;	// IMP=0x0010000000016769
- (_Bool)_powerStatusNotifierEnabled;	// IMP=0x0010000000016625
- (void)_postNotificationForPowerLevel:(long long)arg1;	// IMP=0x001000000001646f
- (void)_updatePowerSourceDescription;	// IMP=0x00100000000161bc
- (id)_activeNRDevice;	// IMP=0x001000000001610d
- (void)processBatteryUpdate;	// IMP=0x0010000000015ee8
- (id)init;	// IMP=0x0010000000015d77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
