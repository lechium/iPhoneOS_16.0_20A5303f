//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNTriggeredEventNotificationData, CALNTriggeredEventNotificationSourceNotificationInfo, NSString;

@protocol CALNTriggeredEventNotificationTriggerHelper <NSObject>
- (_Bool)shouldTriggerForSourceClientIdentifier:(NSString *)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(CALNTriggeredEventNotificationSourceNotificationInfo *)arg3 oldNotificationData:(CALNTriggeredEventNotificationData *)arg4;
@end

