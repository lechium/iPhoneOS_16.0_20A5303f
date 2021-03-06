//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPStateMachineInfoProvider-Protocol.h>

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate;

@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) _Bool sleepFeaturesEnabled;
@property(readonly, nonatomic) _Bool isAppleWatch;
@end

