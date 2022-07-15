//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol APSIDSProxyManagerDelegate, APSIDSService;

@interface APSIDSProxyManager : NSObject
{
    id <APSIDSService> _idsService;	// 8 = 0x8
    id <APSIDSProxyManagerDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_environmentToListener;	// 24 = 0x18
    _Bool _nearby;	// 32 = 0x20
    NSString *_recentDaemonAliveGuid;	// 40 = 0x28
    NSMutableDictionary *_apsOutgoingMessageMap;	// 48 = 0x30
}

+ (_Bool)shouldAssertWiFi;	// IMP=0x00200000000813dc
+ (id)_idsSendQueue;	// IMP=0x001000000007c3c8
- (void).cxx_destruct;	// IMP=0x0020000000081f71
@property(copy, nonatomic) NSString *recentDaemonAliveGuid; // @synthesize recentDaemonAliveGuid=_recentDaemonAliveGuid;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby; // @synthesize nearby=_nearby;
@property(nonatomic) __weak id <APSIDSProxyManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081def
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x0010000000081d3f
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0010000000081cda
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000081c2a
- (void)_updateTimerIfNecessaryWithDevices:(id)arg1;	// IMP=0x0010000000081c24
- (void)_retrieveAllDevicesAndDo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081a72
- (void)_checkNearbyDevices:(id)arg1;	// IMP=0x00100000000815e5
- (void)_assertWiFiIfPossible;	// IMP=0x0010000000081563
- (void)__assertWiFiIfPossible;	// IMP=0x00100000000813e4
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000007f8b2
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000007f63f
- (void)removeAllPendingAPSMessages;	// IMP=0x001000000007f596
- (void)sendProxyIsConnected:(_Bool)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007f48a
- (void)sendAppTokenGenerateResponse:(id)arg1 error:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x001000000007f312
- (void)sendExpiredNonceWithServerTime:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007f209
- (void)sendReversePushResponse:(long long)arg1 messageGUID:(id)arg2 messageId:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x001000000007f0a5
- (void)sendMessage:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007edc3
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 guid:(id)arg7 environmentName:(id)arg8;	// IMP=0x001000000007ea9d
- (void)sendMessageTracingStatus:(int)arg1 topic:(id)arg2 tracingUUID:(id)arg3 token:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x001000000007e92e
- (void)sendResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 interface:(long long)arg4 generation:(unsigned long long)arg5 guid:(id)arg6 environmentName:(id)arg7;	// IMP=0x001000000007e76b
- (void)sendInactiveWithEnvironmentName:(id)arg1 guid:(id)arg2;	// IMP=0x001000000007e6e7
- (void)sendPubSubChannelListRequest:(long long)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x001000000007e578
- (void)sendPubSubUpdateMessage:(id)arg1 interface:(long long)arg2 environmentName:(id)arg3 guid:(id)arg4;	// IMP=0x001000000007e3e6
- (void)sendPubSubChannelListResponse:(id)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x001000000007e299
- (void)sendPubSubChannelList:(id)arg1 messageID:(unsigned int)arg2 token:(id)arg3 interface:(long long)arg4 environmentName:(id)arg5 guid:(id)arg6;	// IMP=0x001000000007e0b2
- (void)sendFilterWithEnvironmentName:(id)arg1 guid:(id)arg2 enabledTopics:(id)arg3 ignoredTopics:(id)arg4 opportunisticTopics:(id)arg5 nonWakingTopics:(id)arg6 topicSalts:(id)arg7;	// IMP=0x001000000007dda8
- (void)sendPresenceWithEnvironmentName:(id)arg1 guid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9;	// IMP=0x001000000007daef
- (void)sendReceivedPush:(id)arg1 onInterface:(long long)arg2 generation:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x001000000007d8f0
- (void)sendLargeMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007d767
- (void)sendMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007d5de
- (void)sendPushToken:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000007d472
- (void)_sendDaemonAliveMessage;	// IMP=0x001000000007d397
- (void)sendProxyMessage:(id)arg1 forAPSMessage:(id)arg2;	// IMP=0x001000000007cb2f
- (void)sendProxyMessage:(id)arg1;	// IMP=0x001000000007cb1b
- (id)_recipientDevice;	// IMP=0x001000000007c9a8
- (void)removeListener:(id)arg1 environment:(id)arg2;	// IMP=0x001000000007c890
- (void)setListener:(id)arg1 environment:(id)arg2;	// IMP=0x001000000007c7cd
@property(readonly, nonatomic) _Bool canUseProxy;
- (void)dealloc;	// IMP=0x001000000007c6d1
- (id)init;	// IMP=0x001000000007c41f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
