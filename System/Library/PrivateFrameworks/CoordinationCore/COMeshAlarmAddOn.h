//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshAddOn.h"

@class COAlarmReadRequest, COHomeHubAdapter, COHomeKitAdapter, MTAlarmManager, NSArray, NSDictionary;
@protocol COMeshAlarmAddOnDelegate;

__attribute__((visibility("hidden")))
@interface COMeshAlarmAddOn : COMeshAddOn
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <COMeshAlarmAddOnDelegate> _delegate;	// 16 = 0x10
    MTAlarmManager *_alarmManager;	// 24 = 0x18
    COHomeKitAdapter *_homekit;	// 32 = 0x20
    COHomeHubAdapter *_homehub;	// 40 = 0x28
    NSArray *_deletes;	// 48 = 0x30
    NSArray *_mergingNodes;	// 56 = 0x38
    COAlarmReadRequest *_mergeRequest;	// 64 = 0x40
    NSDictionary *_mergeResponses;	// 72 = 0x48
    NSArray *_queuedCommands;	// 80 = 0x50
    MTAlarmManager *_observedAlarmManager;	// 88 = 0x58
    CDUnknownBlockType _recorder;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000069ab2
@property(copy, nonatomic) CDUnknownBlockType recorder; // @synthesize recorder=_recorder;
@property(readonly, nonatomic) MTAlarmManager *observedAlarmManager; // @synthesize observedAlarmManager=_observedAlarmManager;
@property(copy, nonatomic) NSArray *queuedCommands; // @synthesize queuedCommands=_queuedCommands;
@property(retain, nonatomic) NSDictionary *mergeResponses; // @synthesize mergeResponses=_mergeResponses;
@property(retain, nonatomic) COAlarmReadRequest *mergeRequest; // @synthesize mergeRequest=_mergeRequest;
@property(copy, nonatomic) NSArray *mergingNodes; // @synthesize mergingNodes=_mergingNodes;
@property(copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) COHomeHubAdapter *homehub; // @synthesize homehub=_homehub;
@property(readonly, nonatomic) COHomeKitAdapter *homekit; // @synthesize homekit=_homekit;
@property(readonly, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000006935d
- (void)dismissAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068933
- (void)snoozeAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067d3a
- (void)removeAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 fromConnection:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x00000000000675e6
- (void)updateAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 fromConnection:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x0000000000066e92
- (void)addAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 fromConnection:(id)arg4 cluster:(id)arg5 withCallback:(CDUnknownBlockType)arg6;	// IMP=0x00000000000663f1
- (void)alarmsforAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 fromConnection:(id)arg3 cluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x0000000000065e94
- (void)handleAlarmManagerStateResetNotification:(id)arg1;	// IMP=0x0000000000065df7
- (void)handleAlarmSnoozeNotification:(id)arg1;	// IMP=0x0000000000065827
- (void)handleAlarmsChangedNotification:(id)arg1;	// IMP=0x0000000000065821
- (void)handleAlarmFiringAlarmDismissedNotification:(id)arg1;	// IMP=0x0000000000065386
- (void)handleAlarmFiredNotification:(id)arg1;	// IMP=0x00000000000652ca
- (void)handleAlarmsUpdatedNotification:(id)arg1;	// IMP=0x000000000006490a
- (void)handleAlarmsRemovedNotification:(id)arg1;	// IMP=0x000000000006439f
- (void)handleAlarmsAddedNotification:(id)arg1;	// IMP=0x0000000000063ece
- (void)handleAlarmDismissRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000634a1
- (void)handleAlarmSnoozeRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000630d2
- (void)handleAlarmDeleteRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000625d3
- (void)handleAlarmUpdateRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000619ba
- (void)handleAlarmCreateRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060d0a
- (void)handleAlarmReadRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000005fc66
- (_Bool)_isAlarm:(id)arg1 targetingAccessory:(id)arg2;	// IMP=0x000000000005fa4a
- (id)dismissAlarmWithIdentifier:(id)arg1;	// IMP=0x000000000005f54b
- (id)snoozeAlarmWithIdentifier:(id)arg1;	// IMP=0x000000000005f04c
- (id)removeAlarm:(id)arg1;	// IMP=0x000000000005eb01
- (id)updateAlarm:(id)arg1;	// IMP=0x000000000005e5b6
- (id)addAlarm:(id)arg1;	// IMP=0x000000000005e06b
- (id)alarmsForAccessory:(id)arg1;	// IMP=0x000000000005dff3
- (id)alarms;	// IMP=0x000000000005dfdf
- (_Bool)_isAlarm:(id)arg1 targetingAccessoryIdentifiers:(id)arg2;	// IMP=0x000000000005da7a
- (id)_alarmsForAccessoryIdentifier:(id)arg1 allowLocalStorage:(_Bool)arg2 usingLeader:(_Bool)arg3;	// IMP=0x000000000005c759
- (id)_filteredAlarmsList:(id)arg1 forAccessory:(id)arg2;	// IMP=0x000000000005c575
- (void)_replicateToMobileTimerFromHomeKit;	// IMP=0x000000000005b543
- (id)_currentAccessoryForConnection:(id)arg1;	// IMP=0x000000000005b45d
- (void)_accessorySettingValueUpdated:(id)arg1;	// IMP=0x000000000005b2f7
- (void)_alarmManagerFiringAlarmChanged:(id)arg1;	// IMP=0x000000000005b242
- (void)_alarmManagerAlarmsChanged:(id)arg1;	// IMP=0x000000000005b18d
- (void)_alarmManagerStateReset:(id)arg1;	// IMP=0x000000000005b095
- (void)_alarmManagerAlarmFired:(id)arg1;	// IMP=0x000000000005a01c
- (void)_addAlarmDeleteEvent:(id)arg1;	// IMP=0x0000000000059dd8
- (void)_processQueuedCommands;	// IMP=0x0000000000059c97
- (void)_concludeMerge:(id)arg1 usingLocalAlarms:(id)arg2;	// IMP=0x0000000000058967
- (id)_commandsForReconciling:(id)arg1 toTruth:(id)arg2 forNode:(id)arg3;	// IMP=0x0000000000058096
- (void)_abandonMerge;	// IMP=0x0000000000057f14
- (void)_finishMerge;	// IMP=0x0000000000057bb3
- (void)_continueMerge:(id)arg1 withResponse:(id)arg2 fromNode:(id)arg3;	// IMP=0x000000000005789b
- (void)_primeMerge:(id)arg1 withNodes:(id)arg2;	// IMP=0x000000000005761f
- (void)_startMerge;	// IMP=0x000000000005717b
- (void)_alarmManagerFiringAlarmDismissed:(id)arg1;	// IMP=0x00000000000570c6
- (void)_alarmManagerAlarmsUpdated:(id)arg1;	// IMP=0x0000000000057011
- (void)_alarmManagerAlarmsRemoved:(id)arg1;	// IMP=0x0000000000056f5c
- (void)_alarmManagerAlarmsAdded:(id)arg1;	// IMP=0x0000000000056ea7
- (void)_significantHomeChange:(id)arg1;	// IMP=0x0000000000056e95
- (void)_addCompletionsToFuture:(id)arg1 withXPCCallback:(CDUnknownBlockType)arg2 transactionDescription:(const char *)arg3;	// IMP=0x0000000000056c9f
- (id)_sendRequest:(id)arg1;	// IMP=0x000000000005692e
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000568ee
@property(readonly, nonatomic) _Bool performsLocalActions;
@property(nonatomic) __weak id <COMeshAlarmAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeNodesForMeshController:(id)arg1;	// IMP=0x000000000005641d
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x00000000000562ec
- (void)didStopMeshController:(id)arg1;	// IMP=0x00000000000561f2
- (void)willStartMeshController:(id)arg1;	// IMP=0x00000000000560bf
- (void)willRemoveFromMeshController:(id)arg1;	// IMP=0x0000000000055edf
- (void)didAddToMeshController:(id)arg1;	// IMP=0x0000000000054b2c
- (id)init;	// IMP=0x0000000000054aec
- (id)initWithAlarmManager:(id)arg1;	// IMP=0x0000000000054a47
- (id)initWithAlarmManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;	// IMP=0x0000000000054705

@end

