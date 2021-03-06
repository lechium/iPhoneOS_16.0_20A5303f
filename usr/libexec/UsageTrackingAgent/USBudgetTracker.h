//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler, NSDate, _CDContextualChangeRegistration;

@interface USBudgetTracker : NSObject
{
    NSBackgroundActivityScheduler *_resetDeviceActivityAlarms;	// 8 = 0x8
    _CDContextualChangeRegistration *_applicationRegistration;	// 16 = 0x10
    _CDContextualChangeRegistration *_webDomainRegistration;	// 24 = 0x18
    _CDContextualChangeRegistration *_nowPlayingRegistration;	// 32 = 0x20
    _CDContextualChangeRegistration *_videoRegistration;	// 40 = 0x28
    NSDate *_lastSyncDate;	// 48 = 0x30
}

+ (id)_getRemainingTimeForEvents:(id)arg1 referenceDate:(id)arg2 error:(id *)arg3;	// IMP=0x002000000001cc19
+ (id)_getRemainingTimeForBudgets:(id)arg1 referenceDate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001c518
+ (void)_checkStatusOfBudgets:(id)arg1 withError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001aa4b
+ (void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a937
+ (void)checkStatusOfAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a857
+ (void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a72c
+ (void)startTracking;	// IMP=0x00100000000143e8
+ (id)sharedTracker;	// IMP=0x0010000000014393
- (void).cxx_destruct;	// IMP=0x0020000000020be3
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(copy) _CDContextualChangeRegistration *videoRegistration; // @synthesize videoRegistration=_videoRegistration;
@property(copy) _CDContextualChangeRegistration *nowPlayingRegistration; // @synthesize nowPlayingRegistration=_nowPlayingRegistration;
@property(copy) _CDContextualChangeRegistration *webDomainRegistration; // @synthesize webDomainRegistration=_webDomainRegistration;
@property(copy) _CDContextualChangeRegistration *applicationRegistration; // @synthesize applicationRegistration=_applicationRegistration;
@property(readonly) NSBackgroundActivityScheduler *resetDeviceActivityAlarms; // @synthesize resetDeviceActivityAlarms=_resetDeviceActivityAlarms;
- (_Bool)_notifyExtensionThatEventDidReachThreshold:(id)arg1 activity:(id)arg2 clientIdentifier:(id)arg3 extensionIdentifier:(id)arg4 isWarning:(_Bool)arg5;	// IMP=0x0010000000020679
- (void)_notifyExtensionThatIntervalDidEndForActivity:(id)arg1 clientIdentifier:(id)arg2 extensionIdentifier:(id)arg3 isWarning:(_Bool)arg4;	// IMP=0x00100000000202cd
- (void)_notifyExtensionThatIntervalDidStartForActivity:(id)arg1 clientIdentifier:(id)arg2 extensionIdentifier:(id)arg3 isWarning:(_Bool)arg4;	// IMP=0x001000000001ff21
- (_Bool)_setWarningAlarmOrNotifyExtensionWithComponents:(id)arg1 referenceDate:(id)arg2 budgetID:(id)arg3 activity:(id)arg4 clientIdentifier:(id)arg5 extensionIdentifier:(id)arg6 warnForStartOfInterval:(_Bool)arg7;	// IMP=0x001000000001fbe8
- (_Bool)_setAlarmsOrNotifyExtensionsForDeviceActivityBudgets:(id)arg1 notifyForIntervalEnd:(_Bool)arg2;	// IMP=0x001000000001eeba
- (_Bool)_notifyForBudgets:(id)arg1 events:(id)arg2 nextNotificationEventName:(const char *)arg3 duetSyncForImpendingBudgets:(_Bool)arg4;	// IMP=0x001000000001d59e
- (void)_checkBudgetStatusForAllCurrentUsage;	// IMP=0x001000000001b60f
- (void)_checkBudgetStatusForVideoWebDomains:(id)arg1;	// IMP=0x001000000001b491
- (void)_checkBudgetStatusForVideoBundleIdentifiers:(id)arg1;	// IMP=0x001000000001b313
- (void)_checkBudgetStatusForNowPlayingCategories:(id)arg1;	// IMP=0x001000000001b195
- (void)_checkBudgetStatusForWebDomains:(id)arg1;	// IMP=0x001000000001b017
- (void)_checkBudgetStatusForApplications:(id)arg1;	// IMP=0x001000000001ae99
- (void)_resetDeviceActivityAlarms;	// IMP=0x001000000001a61b
- (void)_systemTimeDidChange;	// IMP=0x001000000001a597
- (void)_clearPostedNotificationsForNoLongerExpiredBudgets;	// IMP=0x0010000000019c21
- (void)_tombstoneEventDidFire:(const char *)arg1;	// IMP=0x0010000000019b91
- (void)_budgetIntervalAlarmDidFire:(const char *)arg1 isWarning:(_Bool)arg2 isEndOfInterval:(_Bool)arg3;	// IMP=0x00100000000196e0
- (void)_budgetsResetAlarmDidFire:(id)arg1;	// IMP=0x0010000000018e71
- (void)_duetSyncCoordinatorDidIdle;	// IMP=0x0010000000018d01
- (void)_videoRegistrationDidFire;	// IMP=0x00100000000186a5
- (void)_videoAlarmDidFire;	// IMP=0x0010000000018049
- (void)_nowPlayingRegistrationDidFire;	// IMP=0x0010000000017eb3
- (void)_nowPlayingAlarmDidFire;	// IMP=0x0010000000017d1d
- (void)_webDomainRegistrationDidFire;	// IMP=0x001000000001792e
- (void)_webDomainAlarmDidFire;	// IMP=0x001000000001753f
- (void)_applicationRegistrationDidFire;	// IMP=0x0010000000017142
- (void)_applicationAlarmDidFire;	// IMP=0x0010000000016d45
- (void)_registerForVideoUsage;	// IMP=0x0010000000016698
- (void)_registerForNowPlayingUsage;	// IMP=0x00100000000161d0
- (void)_registerForWebDomainUsage;	// IMP=0x0010000000015c85
- (void)_registerForApplicationUsage;	// IMP=0x001000000001573a
- (void)_registerForAllUsage;	// IMP=0x00100000000156f2
- (void)_deviceActivityBudgetsWereRemoved:(id)arg1;	// IMP=0x0010000000015148
- (void)_deviceActivityBudgetWasAddedOrUpdated:(id)arg1;	// IMP=0x0010000000014e97
- (void)_registeredBudgetsDidChange:(id)arg1;	// IMP=0x0010000000014e39
- (void)_startTracking;	// IMP=0x0010000000014425
- (id)init;	// IMP=0x001000000001432b

@end

