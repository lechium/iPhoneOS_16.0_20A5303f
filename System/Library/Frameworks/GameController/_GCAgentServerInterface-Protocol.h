//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GCUserDefaultsXPCProxyServiceRemoteClientInterface, GCVideoRelocationXPCProxyServiceRemoteClientInterface;

@protocol _GCAgentServerInterface
- (void)connectToUserDefaultsXPCProxyServiceWithClient:(id <GCUserDefaultsXPCProxyServiceRemoteClientInterface>)arg1 reply:(void (^)(id <GCUserDefaultsXPCProxyServiceRemoteServerInterface>, NSError *))arg2;
- (void)connectToVideoRelocationXPCProxyServiceWithClient:(id <GCVideoRelocationXPCProxyServiceRemoteClientInterface>)arg1 reply:(void (^)(id <GCVideoRelocationXPCProxyServiceRemoteServerInterface>, NSError *))arg2;
- (void)pingWithReply:(void (^)(void))arg1;
@end
