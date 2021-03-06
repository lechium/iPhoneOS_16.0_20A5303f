//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@protocol AMSDeviceMessengerClientInterface, AMSSecurityClientInterface;

@protocol AMSDaemonConnectionProtocol <NSObject>
- (void)getSecurityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1 replyHandler:(void (^)(id <AMSSecurityServiceInterface>, NSError *))arg2;
- (void)getPushNotificationServiceProxyWithReplyHandler:(void (^)(id <AMSPushNotificationServiceInterface>, NSError *))arg1;
- (void)getPurchaseServiceProxyWithReplyHandler:(void (^)(id <AMSPurchaseServiceInterface>, NSError *))arg1;
- (void)getFraudReportServiceProxyWithReplyHandler:(void (^)(id <AMSFraudReportServiceInterface>, NSError *))arg1;
- (void)getDeviceMessengerServiceProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1 replyHandler:(void (^)(id <AMSDeviceMessengerServiceInterface>, NSError *))arg2;
- (void)getCookieServiceProxyWithReplyHandler:(void (^)(id <AMSCookieServiceInterface>, NSError *))arg1;
@end

