//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKDataFlowLink, HKWorkoutActivity, HKWorkoutConfiguration, NSDate, NSSet, NSUUID;
@protocol HDWorkoutDataDestination;

@protocol HDWorkoutDataSource <NSObject>
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didEndActivity:(HKWorkoutActivity *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didBeginActivity:(HKWorkoutActivity *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didUpdateConfiguration:(HKWorkoutConfiguration *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 requestsFinalDataFrom:(NSDate *)arg2 to:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 requestsDataFrom:(NSDate *)arg2 to:(NSDate *)arg3;

@optional
- (NSSet *)quantityTypesToIncludeWhilePaused;
@end
