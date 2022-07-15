//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer;
@protocol OS_dispatch_queue;

@interface MCBackgroundActivityManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _passcodeChangedNotificationToken;	// 16 = 0x10
    int _passcodePolicyChangedNotificationToken;	// 20 = 0x14
    MCProfileServiceServer *_server;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001b122
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int passcodePolicyChangedNotificationToken; // @synthesize passcodePolicyChangedNotificationToken=_passcodePolicyChangedNotificationToken;
@property(nonatomic) int passcodeChangedNotificationToken; // @synthesize passcodeChangedNotificationToken=_passcodeChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (void)_workQueueReschedule:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001af9a
- (void)_rescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001ae32
- (void)_workQueueReschedulePasscodeExpiryJob;	// IMP=0x001000000001ab35
- (void)reschedulePasscodeExpiryJob;	// IMP=0x001000000001aad4
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x001000000001aaa3
- (void)rescheduleManagedAppValidationJob;	// IMP=0x001000000001aa35
- (void)rescheduleProfileJanitorJob;	// IMP=0x001000000001a8ea
- (void)_handleXPCActivity:(long long)arg1 proposedStartDate:(id)arg2 normalizeStartDate:(_Bool)arg3 proposedGracePeriod:(id)arg4 proposedPriority:(const char *)arg5 repeatingInterval:(id)arg6 requireNetwork:(_Bool)arg7 requireUnlock:(_Bool)arg8;	// IMP=0x001000000001a897
- (id)_jobDescriptionForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001a873
- (const char *)_jobNameForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001a84f
- (id)_nextManagedAppValidationDateWithOverride:(id)arg1;	// IMP=0x001000000001a7b8
- (id)_nextActivationLockCleanupDate;	// IMP=0x001000000001a72c
- (id)_nextRegularDate;	// IMP=0x001000000001a591
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x001000000001a4af
- (void)stop;	// IMP=0x001000000001a40f
- (void)start;	// IMP=0x0010000000019ca5

@end
