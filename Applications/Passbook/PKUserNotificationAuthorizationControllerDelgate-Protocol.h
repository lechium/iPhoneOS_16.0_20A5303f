//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UNNotification;

@protocol PKUserNotificationAuthorizationControllerDelgate <NSObject>

@optional
- (void)openSettingsForNotification:(UNNotification *)arg1;
- (void)willPresentNotification:(UNNotification *)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
@end
