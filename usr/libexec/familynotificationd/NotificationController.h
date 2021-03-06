//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAUserNotificationProvider, NSString;

@interface NotificationController : NSObject
{
    FAUserNotificationProvider *_notificationProvider;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0020000000001f09
- (void).cxx_destruct;	// IMP=0x0020000000002e03
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x0010000000002d52
- (void)provider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000002aa4
- (void)provider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x001000000000269e
- (void)_allPendingNotificationsSortedByDate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002517
- (void)allPendingNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002480
- (void)pendingNotificationsForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000221d
- (void)removeAllNotificationsFromClient:(id)arg1;	// IMP=0x0010000000002071
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001fb1
- (void)deliverNotification:(id)arg1;	// IMP=0x0010000000001f9b
- (void)start;	// IMP=0x0010000000001f5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

