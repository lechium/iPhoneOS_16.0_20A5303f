//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSString;

@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

