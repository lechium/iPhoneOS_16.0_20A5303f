//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListInteractiveTransitionCoordinator, NCNotificationListView;

@protocol NCNotificationListInteractiveTransitionCoordinatorDelegate <NSObject>
- (_Bool)notificationListInteractiveTransitionCoordinatorRequestsIsCurrentDigestVisible:(NCNotificationListInteractiveTransitionCoordinator *)arg1;
- (void)notificationListInteractiveTransitionCoordinatorRequestsMigratingProminentNotificationsForHiddenSetting:(NCNotificationListInteractiveTransitionCoordinator *)arg1;
- (_Bool)notificationListInteractiveTransitionCoordinatorRequestsIsScrollingListContent:(NCNotificationListInteractiveTransitionCoordinator *)arg1;
- (_Bool)notificationListInteractiveTransitionCoordinatorRequestsIsHiddenListRevealed:(NCNotificationListInteractiveTransitionCoordinator *)arg1;
- (unsigned long long)notificationListInteractiveTransitionCoordinator:(NCNotificationListInteractiveTransitionCoordinator *)arg1 requestsCountForInteractiveListView:(NCNotificationListView *)arg2;
- (void)notificationListInteractiveTransitionCoordinator:(NCNotificationListInteractiveTransitionCoordinator *)arg1 didUpdateListDisplaySetting:(unsigned long long)arg2 isPersistentSetting:(_Bool)arg3 hideRevealedList:(_Bool)arg4;
@end
