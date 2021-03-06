//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoutingDataSource, MRDIDSService, NSMutableDictionary, NSString;
@protocol MRDIDSRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDIDSRemoteControlService : NSObject
{
    MRDAVRoutingDataSource *_routingDataSource;	// 8 = 0x8
    id <MRDIDSRemoteControlServiceDelegate> _delegate;	// 16 = 0x10
    id _serviceToken;	// 24 = 0x18
    MRDIDSService *_service;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workerQueue;	// 40 = 0x28
    NSMutableDictionary *_discoveryChannels;	// 48 = 0x30
    NSMutableDictionary *_remoteControlChannels;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000040bf3
@property(retain, nonatomic) NSMutableDictionary *remoteControlChannels; // @synthesize remoteControlChannels=_remoteControlChannels;
@property(retain, nonatomic) NSMutableDictionary *discoveryChannels; // @synthesize discoveryChannels=_discoveryChannels;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) MRDIDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) id serviceToken; // @synthesize serviceToken=_serviceToken;
@property(nonatomic) __weak id <MRDIDSRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_removeAuthorizationCallbackForOutputDevice:(id)arg1;	// IMP=0x0010000000040aeb
- (void)_addAuthorizationCallbackForOutputDevice:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x0010000000040758
- (void)_onWorkerQueue_sendEndpoint:(id)arg1 toClient:(id)arg2 options:(id)arg3;	// IMP=0x00100000000405d6
- (void)_intializeClient:(id)arg1 forRemoteControlChannel:(id)arg2 authCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040037
- (id)_createRemoteControlChannelForIDSConnection:(id)arg1 deviceInfo:(id)arg2 destination:(id)arg3 session:(id)arg4 options:(unsigned int)arg5;	// IMP=0x001000000003f923
- (id)_createDiscoveryChannelForIDSConnection:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x001000000003f751
- (void)_handleConnectRemoteControlMessage:(id)arg1 fromDevice:(id)arg2 destination:(id)arg3 session:(id)arg4;	// IMP=0x001000000003f031
- (void)_handleDiscoveryMessage:(id)arg1 fromDevice:(id)arg2;	// IMP=0x001000000003ec66
- (void)handleSetDiscoveryModeMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000003ea9e
- (void)handleSetConnectionStateMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000003ea83
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x001000000003e88f
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000003e800
- (void)stop;	// IMP=0x001000000003e7b2
- (void)start;	// IMP=0x001000000003e4b2
@property(readonly, copy) NSString *debugDescription;
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x001000000003e26d

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

