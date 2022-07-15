//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, RPRemoteDisplayDiscovery, RPRemoteDisplayServer, RPRemoteDisplaySession;

@protocol RPRemoteDisplayXPCDaemonInterface
- (void)remoteDisplaySendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)remoteDisplaySendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)remoteDisplayTryPassword:(NSString *)arg1;
- (void)remoteDisplayInvalidateSessionID:(NSNumber *)arg1;
- (void)remoteDisplayActivateSession:(RPRemoteDisplaySession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)remoteDisplayActivateServer:(RPRemoteDisplayServer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)remoteDisplayActivateDiscovery:(RPRemoteDisplayDiscovery *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
@end
