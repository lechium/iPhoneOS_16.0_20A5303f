//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, HKHealthStore, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol CLMotionStateProtocol;

@interface CLCompanionActivityAWDAggregator : CLIntersiloService
{
    _Bool fServiceEnabled;	// 8 = 0x8
    CLTimer *fStoreCacheTimer;	// 16 = 0x10
    NSMutableDictionary *fDataCache;	// 24 = 0x18
    id <CLMotionStateProtocol> fMotionStateProxy;	// 32 = 0x20
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> fLocationClient;	// 40 = 0x28
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionNotifierClient;	// 48 = 0x30
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> fDataProtectionClient;	// 56 = 0x38
    struct unique_ptr<CLAppMonitor_Type::Client, std::default_delete<CLAppMonitor_Type::Client>> fAppMonitorClient;	// 64 = 0x40
    _Bool fEncryptedDataAvailable;	// 72 = 0x48
    int fQueryState;	// 76 = 0x4c
    CLTimer *fQueryTimer;	// 80 = 0x50
    HKHealthStore *fHealthStore;	// 88 = 0x58
    NSDate *fHKQueryStartDate;	// 96 = 0x60
    NSMutableSet *fPhoneSources;	// 104 = 0x68
    NSMutableSet *fWatchSources;	// 112 = 0x70
    int fPendingPhoneDailyStepCountQueries;	// 120 = 0x78
    int fPendingWatchDailyStepCountQueries;	// 124 = 0x7c
    int fPendingWatchWorkoutQueries;	// 128 = 0x80
    int fPendingWatchStandHoursQueries;	// 132 = 0x84
    int fPendingPhoneFlightsClimbedQueries;	// 136 = 0x88
    int fPendingPhoneStaticTimeQueries;	// 140 = 0x8c
    double fBeginStaticTime;	// 144 = 0x90
    double fBeginWatchConnectedTime;	// 152 = 0x98
}

+ (_Bool)isSupported;	// IMP=0x0020000000401ece
+ (id)getSilo;	// IMP=0x0010000000401e72
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000401e59
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000401dfc
- (id).cxx_construct;	// IMP=0x00200000004080c0
- (void).cxx_destruct;	// IMP=0x0010000000408032
- (void)queryStaticTime:(double)arg1 endDate:(double)arg2 staticTimeHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000407c4c
- (void)queryPhoneStaticTime;	// IMP=0x00100000004078ee
- (void)queryFlightsClimbed:(id)arg1 endDate:(id)arg2 flightsClimbedHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004074ba
- (void)queryPhoneFlightsClimbed;	// IMP=0x00100000004071f1
- (void)queryStandHours:(id)arg1 endDate:(id)arg2 standHoursHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000406e41
- (void)queryWatchStandHours;	// IMP=0x0010000000406b78
- (void)queryStepCount:(id)arg1 endDate:(id)arg2 sources:(id)arg3 stepCountHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000406379
- (void)queryPhoneDailyStepCount;	// IMP=0x0010000000405ff9
- (void)queryWatchDailyStepCount;	// IMP=0x0010000000405d0a
- (void)queryWorkouts:(id)arg1 endDate:(id)arg2 workoutsHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000405733
- (void)queryWatchWorkouts;	// IMP=0x0010000000405434
- (void)querySources;	// IMP=0x0010000000404dbc
- (void)runQueries;	// IMP=0x0010000000404baa
- (void)setupQueryTimer;	// IMP=0x0010000000404a3f
- (void)resetQueryState;	// IMP=0x00100000004049b8
- (void)onAppMonitorNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000040444a
- (void)onDataProtectionNotification:(int)arg1 data:(NotificationData_6933e140)arg2;	// IMP=0x00100000004043e3
- (void)onCompanionNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000404198
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000040405b
- (void);	// IMP=0x0010000000403fe8
- (long long)truncateLatLong:(double)arg1;	// IMP=0x0010000000403fd6
- (void)initDataDictForDay:(id)arg1;	// IMP=0x0010000000403e4f
- (struct MotionFitnessDaily)NSDictionaryToMotionFitnessDailyStruct:(id)arg1;	// IMP=0x0010000000403922
- (id)MotionFitnessDailyStructToNSDictionary:(struct MotionFitnessDaily)arg1;	// IMP=0x0010000000403628
- (id)NSDateToNSStringKey:(id)arg1;	// IMP=0x00100000004035f7
- (id)CFAbsoluteTimeToNSStringKey:(double)arg1;	// IMP=0x00100000004035a9
- (id)createUUID;	// IMP=0x0010000000403590
- (_Bool)isIDValid:(double)arg1;	// IMP=0x0010000000403568
- (void)ageOutCache:(id)arg1;	// IMP=0x00100000004033e4
- (void)storeCache:(id)arg1;	// IMP=0x0010000000403181
- (id)loadCache;	// IMP=0x00100000004030b1
- (id)createCache;	// IMP=0x0010000000402e5c
- (void)setupStoreCacheTimer;	// IMP=0x0010000000402d10
- (struct MotionFitnessDaily)syncgetActivityStats;	// IMP=0x0010000000402959
- (void)endService;	// IMP=0x0010000000402822
- (void)beginService;	// IMP=0x0010000000401f13
- (id)init;	// IMP=0x0010000000401ed6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
