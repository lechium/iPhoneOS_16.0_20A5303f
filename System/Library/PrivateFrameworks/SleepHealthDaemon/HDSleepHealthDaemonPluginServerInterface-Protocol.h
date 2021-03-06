//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepHealthDaemon/NSObject-Protocol.h>

@class HKQuantitySample, NSArray;

@protocol HDSleepHealthDaemonPluginServerInterface <NSObject>
- (void)remote_saveSleepTrackingSamples:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_stopSleepTrackingSession;
- (void)remote_startSleepTrackingSession;
- (void)remote_updateCurrentSleepSchedules:(NSArray *)arg1 sleepDurationGoal:(HKQuantitySample *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

