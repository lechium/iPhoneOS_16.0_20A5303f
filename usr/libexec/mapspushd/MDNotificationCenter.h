//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, UNUserNotificationCenter;

@interface MDNotificationCenter : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableSet *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000007408
- (int)GEOUITargetForAnnouncementType:(int)arg1;	// IMP=0x00100000000073f1
- (void)handleTapNotificationMetricsWithRequest:(id)arg1;	// IMP=0x0010000000006d83
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006b8a
- (void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2;	// IMP=0x0010000000006a44
- (void)handleNotificationResponse:(id)arg1;	// IMP=0x00100000000066fb
- (void)hideSharedTripNotification:(id)arg1;	// IMP=0x0010000000006438
- (void)showSharedTripNotification:(id)arg1 ofType:(unsigned long long)arg2 forState:(id)arg3;	// IMP=0x001000000000630f
- (id)addUGCPhotoNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x00100000000062a9
- (id)addRAPNotification:(id)arg1;	// IMP=0x0010000000006168
- (id)addPushedBookmark:(id)arg1;	// IMP=0x00100000000060bd
- (id)addPredictedRouteTrafficIncidentNotificationForCommuteDetails:(id)arg1;	// IMP=0x0010000000005fbe
- (void)clearNotificationWithTrafficIncidentAlertID:(id)arg1;	// IMP=0x0010000000005da1
- (id)addTrafficIncidentAlertNotificationWithAlertID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x0010000000005cc1
- (id);	// IMP=0x0010000000005bc3
- (id)addMapsSuggestionsNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000005ae9
- (id)addLowFuelAlertNotificationWithDetails:(id)arg1;	// IMP=0x0010000000005a2c
- (id)addParkedCarReplacementNotificationWithEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x001000000000594f
- (id)addParkedCarNotificationWithEvent:(id)arg1;	// IMP=0x0010000000005369
- (id)addGeoDInternalNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00100000000052b2
- (id)addProxyAuthFailedNotificationWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00100000000051dc
- (id)addAnnouncement:(id)arg1;	// IMP=0x00100000000050a1
- (id)_addRequest:(id)arg1;	// IMP=0x0010000000004d97
- (void)clearAllNotifications;	// IMP=0x0010000000004ba5
- (void)clearNotificationsOfType:(long long)arg1;	// IMP=0x001000000000495d
- (void)clearNotificationWithIdentifier:(id)arg1;	// IMP=0x00100000000044c3
- (void)dealloc;	// IMP=0x0010000000004467
- (id)init;	// IMP=0x0010000000004355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
