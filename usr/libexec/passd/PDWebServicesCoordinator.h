//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PDCardFileManager, PDDatabaseManager, PDNetworkTaskManager, PDPushNotificationManager;

@interface PDWebServicesCoordinator : NSObject
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDCardFileManager *_cardFileManager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPushNotificationManager *_pushNotificationManager;	// 32 = 0x20
    PDNetworkTaskManager *_taskManager;	// 40 = 0x28
    NSMutableDictionary *_taskToHandlerMap;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x0020000000184371
+ (void)initializeConfigurationDefaults;	// IMP=0x00100000002e2d28
- (void).cxx_destruct;	// IMP=0x00100000001874dc
@property(readonly, nonatomic) PDNetworkTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void)_updatePassTypeIdentifier:(id)arg1;	// IMP=0x0010000000187029
- (void)_scheduleUpdateForPassTypeIdentifier:(id)arg1 afterDate:(id)arg2;	// IMP=0x0010000000186ddf
- (void)_cancelWhatChangedTasksForPassTypeIdentifier:(id)arg1;	// IMP=0x0010000000186ca7
- (void)_cancelAutomaticUpdateTasksForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x0010000000186b6d
- (void)_cancelAllTasksForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x0010000000186a35
- (void)_personalizePassTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x0010000000186951
- (void)_getPassTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x001000000018636a
- (void)_getSerialNumbersTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x0010000000185dd4
- (void)_whatChangedTaskSucceeded:(id)arg1;	// IMP=0x0010000000185d5d
- (void)_registrationTaskSucceeded:(id)arg1;	// IMP=0x0010000000185b0d
- (void)_registerWithSerialNumber:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x0010000000185987
- (void)_recalculatePushTopics;	// IMP=0x001000000018593e
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x00100000001858b0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x001000000018581e
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x0010000000185753
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x001000000018561a
- (void)taskFailed:(id)arg1;	// IMP=0x0010000000185508
- (void)taskSucceeded:(id)arg1;	// IMP=0x001000000018547b
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x0010000000185339
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x001000000018527a
- (id)pushNotificationTopics;	// IMP=0x0010000000185232
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000001851ab
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x0010000000184ef9
- (void)handlePushDisabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x0010000000184df1
- (void)handlePushEnabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x0010000000184dc3
- (void)handleModification:(id)arg1 webService:(id)arg2 pushEnabled:(_Bool)arg3 source:(long long)arg4;	// IMP=0x0010000000184cc1
- (void)handleDeletion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4;	// IMP=0x0010000000184bf6
- (void)handleInsertion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4 source:(long long)arg5;	// IMP=0x0010000000184ab4
- (void)nukeTasks;	// IMP=0x0010000000184a38
- (void)personalizePassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001846ce
- (void)updatePassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000184550
- (void)connect;	// IMP=0x00100000001844c8
- (void)dealloc;	// IMP=0x001000000018446b
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3;	// IMP=0x0010000000184383
- (id)_nextUpdateDateWithLastUpdateDate:(id)arg1 rateLimitLevel:(long long)arg2;	// IMP=0x00100000002e5ed5
- (long long)_rateLimitLevelForFrequencyScore:(double)arg1;	// IMP=0x00100000002e5b30
- (double)_updatedFrequencyScoreForScore:(double)arg1 lastPushDate:(id)arg2 zeroInterval:(double)arg3;	// IMP=0x00100000002e5970
- (double)_zeroIntervalForPassTypeID:(id)arg1;	// IMP=0x00100000002e5763
- (id)_userNotificationParametersForPassTypeID:(id)arg1;	// IMP=0x00100000002e507a
- (void)_unregisterPassesOfType:(id)arg1;	// IMP=0x00100000002e4e6a
- (void)_presentUnregistrationAlertForPassTypeID:(id)arg1;	// IMP=0x00100000002e4c78
- (void)_aggdLogWebServiceErrorCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00100000002e4b9c
- (void)_aggdLogTaskErrorCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00100000002e4ac0
- (void)_aggdLogTaskWarningCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00100000002e49e9
- (void)reportWarnings:(id)arg1 webService:(id)arg2 logToService:(_Bool)arg3;	// IMP=0x00100000002e4740
- (void);	// IMP=0x00100000002e4496
- (void)reportAbandonedTask:(id)arg1 passTypeID:(id)arg2;	// IMP=0x00100000002e41f9
- (void)reportUnchangedPassForPersonalizationTask:(id)arg1;	// IMP=0x00100000002e4137
- (void)reportMissingLastModifiedForSerialNumber:(id)arg1 webService:(id)arg2;	// IMP=0x00100000002e40bc
- (void)reportIgnoredIfModifiedSince:(id)arg1 forSerialNumber:(id)arg2 webService:(id)arg3;	// IMP=0x00100000002e403c
- (void)reportUnchangedPassForServerRequestedUpdateTask:(id)arg1;	// IMP=0x00100000002e3e6a
- (void)reportPushWithNoSerialNumbersFromTasks:(id)arg1;	// IMP=0x00100000002e3a8b
- (void)reportUnmodifiedTag:(id)arg1 withRequestedSerialNumbers:(id)arg2 forWebService:(id)arg3;	// IMP=0x00100000002e38e6
- (void)reportMissingTagWithRequestedSerialNumbers:(id)arg1 forWebService:(id)arg2;	// IMP=0x00100000002e3765
- (void)reportUpdateRequestForNonPushEnabledSerialNumber:(id)arg1 forWebService:(id)arg2;	// IMP=0x00100000002e353c
- (void)reportPushRateLimitLevel:(long long)arg1 forPassTypeID:(id)arg2;	// IMP=0x00100000002e31d3
- (void)resetPushFrequencyStateForPassTypeID:(id)arg1;	// IMP=0x00100000002e315c
- (void)adjustStateForIncomingPushNotification:(id)arg1 andComputeNextUpdateDate:(id *)arg2;	// IMP=0x00100000002e2f73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
