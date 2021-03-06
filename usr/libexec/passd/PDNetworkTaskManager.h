//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_os_transaction, PDNetworkTaskDelegate;

@interface PDNetworkTaskManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_enqueuedTasks;	// 16 = 0x10
    NSMutableArray *_scheduledTasks;	// 24 = 0x18
    NSMutableSet *_activeTasks;	// 32 = 0x20
    NSObject<OS_os_transaction> *_activeTasksTransaction;	// 40 = 0x28
    NSString *_archivePath;	// 48 = 0x30
    NSString *_scheduledActivityClientIdentifier;	// 56 = 0x38
    NSString *_powerAssertionName;	// 64 = 0x40
    unsigned int _powerAssertionIdentifier;	// 72 = 0x48
    _Bool _archivePending;	// 76 = 0x4c
    id <PDNetworkTaskDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000181406
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00100000001813f0
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00100000001813da
- (void)taskFailedForAuthentication:(id)arg1;	// IMP=0x00100000001812a6
- (void)taskFailed:(id)arg1;	// IMP=0x00100000001810ef
- (void)taskSucceeded:(id)arg1;	// IMP=0x0010000000181059
- (void)taskChangedState:(id)arg1;	// IMP=0x0010000000181047
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x0010000000181031
- (void)_unarchiveTasks;	// IMP=0x0010000000180909
- (void)_archiveTasks;	// IMP=0x001000000018029c
- (void)_releasePowerAssertion;	// IMP=0x00100000001801a0
- (void)_createPowerAssertion;	// IMP=0x001000000017ffef
- (void)_lock_deactivateTask:(id)arg1;	// IMP=0x001000000017fdcb
- (void)_activateTask:(id)arg1;	// IMP=0x001000000017fbea
- (void)_activateOrScheduleEligibleTasksWithNetworkConnectivity:(_Bool)arg1;	// IMP=0x001000000017f7e8
- (void)_tryToDequeueTasks;	// IMP=0x001000000017ece4
- (void)_enqueueTask:(id)arg1;	// IMP=0x001000000017e735
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x001000000017e6ec
- (void)nukeArchive;	// IMP=0x001000000017e3de
- (_Bool)containsTaskPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000017e282
- (void)cancelTasksPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000017ded2
- (void)performTask:(id)arg1;	// IMP=0x001000000017dea4
- (void)dealloc;	// IMP=0x001000000017de0b
- (id)initWithDelegate:(id)arg1 archiveName:(id)arg2;	// IMP=0x001000000017dbb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

