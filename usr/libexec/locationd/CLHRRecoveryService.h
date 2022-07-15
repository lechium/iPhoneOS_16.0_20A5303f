//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class HKHealthStore, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLHRRecoveryService : CLIntersiloService
{
    struct shared_ptr<CLHRRecoveryInputHRRecorderDb> fInputHRDb;	// 8 = 0x8
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputHR>, std::default_delete<CLActivityAggregator<HRRecoveryInputHR>>> fInputHRAggregator;	// 24 = 0x18
    struct shared_ptr<CLHRRecoveryInputWRRecorderDb> fInputWRDb;	// 32 = 0x20
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputWR>, std::default_delete<CLActivityAggregator<HRRecoveryInputWR>>> fInputWRAggregator;	// 48 = 0x30
    struct shared_ptr<CLHRRecoverySessionRecorderDb> fSessionDb;	// 56 = 0x38
    struct unique_ptr<CLActivityAggregator<HRRecoverySession>, std::default_delete<CLActivityAggregator<HRRecoverySession>>> fSessionAggregator;	// 72 = 0x48
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 80 = 0x50
    struct unique_ptr<CLHRRecoveryEstimator, std::default_delete<CLHRRecoveryEstimator>> fHRRecoveryEstimator;	// 88 = 0x58
    struct CLHRRecoveryStats fSessionStats;	// 96 = 0x60
    struct unique_ptr<CLCatherineNotifier_Type::Client, std::default_delete<CLCatherineNotifier_Type::Client>> fCatherineClient;	// 224 = 0xe0
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 232 = 0xe8
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fNatalimetryClient;	// 240 = 0xf0
    HKHealthStore *fHkHealthStore;	// 248 = 0xf8
}

+ (_Bool)isSupported;	// IMP=0x0020000000119285
+ (id)getSilo;	// IMP=0x00100000001191ec
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001191d3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000119176
- (id).cxx_construct;	// IMP=0x002000000011cfde
- (void).cxx_destruct;	// IMP=0x001000000011cf04
- (void)sendAnalytics;	// IMP=0x001000000011c3c2
- (void)logSessionStats:(const struct HRRecoveryResult *)arg1;	// IMP=0x001000000011bdfe
- (void)logVO2MaxStats:(const struct VO2MaxResult *)arg1;	// IMP=0x001000000011bd88
- (void)logBodyMetrics:(const struct CLBodyMetrics *)arg1;	// IMP=0x001000000011bd03
- (void)forceWriteSampleToHealthKit:(const struct WorkoutEvent *)arg1;	// IMP=0x001000000011b97a
- (_Bool)shouldForceWriteSampleToHealthKit;	// IMP=0x001000000011b8de
- (unsigned long long)mapWorkoutTypeToHKWorkoutActivityType:(long long)arg1;	// IMP=0x001000000011b89e
- (void)storeHRRecoveryToHealthKit:(const struct HRRecoveryResult *)arg1;	// IMP=0x001000000011b3fb
- (void)onHRRecoveryEstimate:(struct HRRecoveryResult)arg1;	// IMP=0x001000000011b3b6
- (void)onHRRecoverySessionEnd;	// IMP=0x001000000011b2cd
- (void)onHRRecoverySessionStart;	// IMP=0x001000000011b264
- (void)onNatalimetryNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x001000000011b091
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x001000000011aec7
- (void)onCatherineNotification:(const int *)arg1 data:(const NotificationData_f96d9675 *)arg2;	// IMP=0x001000000011ad3e
- (void)setUpAggregationOnTimer;	// IMP=0x0010000000119cda
- (void)endService;	// IMP=0x0010000000119bde
- (void)beginService;	// IMP=0x00100000001192cb
- (id)init;	// IMP=0x0010000000119248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
