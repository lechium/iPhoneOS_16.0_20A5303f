//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSSet, NSString;

@protocol PDPushNotificationConsumer <NSObject>
- (void)applyPushNotificationToken:(NSString *)arg1;
- (void)handlePushNotificationForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSSet *)pushNotificationTopics;
@end
