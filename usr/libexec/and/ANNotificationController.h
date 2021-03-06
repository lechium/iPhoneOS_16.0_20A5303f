//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationProvider, NSString;

@interface ANNotificationController : NSObject
{
    ANNotificationProvider *_notificationProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006548
- (id)_clientSideNotifierWithMachServiceName:(id)arg1;	// IMP=0x0010000000006243
- (void)notificationProvider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000005f1b
- (void)notificationProvider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x0010000000005ba9
- (void)removeNotificationsWithEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005882
- (void)removeNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005830
- (void)addNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000581a
- (id)init;	// IMP=0x00100000000057b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

