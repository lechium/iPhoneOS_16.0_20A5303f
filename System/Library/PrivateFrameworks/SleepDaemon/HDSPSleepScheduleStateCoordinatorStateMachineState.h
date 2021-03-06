//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState
{
    unsigned long long _scheduleState;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long scheduleState; // @synthesize scheduleState=_scheduleState;
- (void)wakeUpConfirmed;	// IMP=0x000000000007e128
- (void)wakeTimeReached;	// IMP=0x000000000007e122
- (void)bedtimeReached;	// IMP=0x000000000007e11c
- (void)windDownReached;	// IMP=0x000000000007e116
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;	// IMP=0x000000000007e104
- (void)scheduleModelChanged:(id)arg1;	// IMP=0x000000000007de9a
- (void)timeZoneChange;	// IMP=0x000000000007ddca
- (void)significantTimeChange;	// IMP=0x000000000007dcff
- (id)_determineNextStateFromTimeline;	// IMP=0x000000000007d9d4
- (id)_timelineForDate:(id)arg1;	// IMP=0x000000000007d8c6
- (_Bool)isAlarmEnabled;	// IMP=0x000000000007d811
- (_Bool)isSleepScheduleDisabled;	// IMP=0x000000000007d597
- (void)stateDidExpireWithContext:(id)arg1;	// IMP=0x000000000007d580
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)arg1;	// IMP=0x000000000007d4bd
- (id)nextStateWithContext:(id *)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000007d3e1
- (id)nextStateWithContext:(id *)arg1;	// IMP=0x000000000007d3cd
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;	// IMP=0x000000000007d282

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

