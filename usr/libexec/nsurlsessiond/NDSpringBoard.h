//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    RBSProcessMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_assertions;	// 16 = 0x10
    NSMutableDictionary *_observers;	// 24 = 0x18
    NSMutableDictionary *_appIsForeground;	// 32 = 0x20
    NSMutableDictionary *_observedBackgroundSettings;	// 40 = 0x28
    NSMutableSet *_monitoredBundleIDs;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct os_unfair_lock_s _assertion_lock;	// 64 = 0x40
    _Bool _backgroundUpdatesAllowed;	// 68 = 0x44
}

+ (id)sharedSpringBoard;	// IMP=0x004000000005c28b
- (void).cxx_destruct;	// IMP=0x002000000005a298
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x001000000005a20b
- (_Bool)wakeUpApp:(id)arg1 forSession:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x0010000000059c9c
- (_Bool)takeAssertionForBundleID:(id)arg1 sessionID:(id)arg2 sessionUUID:(id)arg3 pid:(int)arg4;	// IMP=0x0010000000059762
- (id)assertionNameForSessionUUID:(id)arg1;	// IMP=0x001000000005972d
- (void)removePendingLaunchTasksForBundleID:(id)arg1 sessionID:(id)arg2 cancel:(_Bool)arg3;	// IMP=0x0010000000059727
- (void)releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000059670
- (void)_onqueue_releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000005948d
- (_Bool)applicationBackgroundUpdatesEnabled:(id)arg1;	// IMP=0x00100000000593f8
- (_Bool)application:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x00100000000591db
- (_Bool)applicationHasBackgroundTaskCompletion:(id)arg1;	// IMP=0x0010000000058f07
- (_Bool)application:(id)arg1 hasAssertionWithName:(id)arg2;	// IMP=0x0010000000058ce2
- (_Bool)isValidAssertion:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000058b8d
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x0010000000058a4f
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x00100000000589c4
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0010000000058939
- (void)monitoredBundleIDsUpdated;	// IMP=0x00100000000588de
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x001000000005881f
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000058760
- (void)handleStateUpdate:(id)arg1 forProcess:(id)arg2;	// IMP=0x00100000000586a1
- (void)handleBackgroundSettingsChange;	// IMP=0x0010000000058656
- (id)getBackgroundSettingsAppList;	// IMP=0x001000000005859b
- (void)dealloc;	// IMP=0x0010000000058525
- (id)init;	// IMP=0x00100000000582a5

@end

