//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, NSXPCConnection, UNUserNotificationCenter;
@protocol AFUserNotificationServiceDelegate, OS_dispatch_queue;

@interface ADUserNotificationServiceProvider : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableDictionary *_responseHandlersByNotificationID;	// 16 = 0x10
    id <AFUserNotificationServiceDelegate> _delegate;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSMutableDictionary *_notificationsToBeSnoozed;	// 40 = 0x28
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)personalDomainNotificationProvider;	// IMP=0x00100000002b1d74
- (void).cxx_destruct;	// IMP=0x0020000000251706
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000251380
- (void)postNotificationRequest:(id)arg1 options:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000250ff5
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000250f51
- (void)_clearNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000250ebe
- (void)_snoozeNotifications;	// IMP=0x0010000000250bbb
- (void)_stopMonitoringUnlockActivity;	// IMP=0x0010000000250b89
- (void)_startMonitoringUnlockActivity;	// IMP=0x00100000002507f9
- (_Bool)_isMonitoringUnlockActivity;	// IMP=0x00100000002507eb
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x001000000025062f
- (void)postNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000250619
- (id)initWithConnection:(id)arg1 bundleIdentifier:(id)arg2 notificationCategories:(id)arg3;	// IMP=0x0010000000250426

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

