//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol NSObject;

@protocol CNChangeNotificationReceiver <NSObject>
@property(nonatomic) double externalNotificationCoalescingDelay;
@property(nonatomic) _Bool forwardsSelfGeneratedDistributedSaveNotifications;
- (void)receiveExternalNotificationName:(NSString *)arg1;
- (void)receiveNotificationName:(NSString *)arg1 fromSender:(id <NSObject>)arg2 saveIdentifier:(NSString *)arg3 userInfo:(NSDictionary *)arg4 isFromExternalProcess:(_Bool)arg5;
@end

