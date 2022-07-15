//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationAction, NCNotificationDispatcher, NCNotificationRequest, NCNotificationSystemSettings, NSArray, NSDate, NSSet, NSString, NSUUID;

@protocol NCNotificationDispatcherSourceDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (NCNotificationRequest *)dispatcher:(NCNotificationDispatcher *)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setSystemScheduledDeliveryEnabled:(_Bool)arg2 scheduledDeliveryTimes:(NSArray *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setScheduledDelivery:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsDirectMessages:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsTimeSensitive:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setMuted:(_Bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 didExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
@end
