//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/NSObject-Protocol.h>

@class TRIRolloutDeployment;

@protocol TRIHotfixRolloutTargetingSchedulerProtocol <NSObject>
- (void)scheduleHotfixForDeployment:(TRIRolloutDeployment *)arg1 allowingAnyNetworkingAndBatteryUsage:(_Bool)arg2 runDelay:(double)arg3;
@end
