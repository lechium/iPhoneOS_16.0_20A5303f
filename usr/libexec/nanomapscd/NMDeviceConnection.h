//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSHashTable, NSLock, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface NMDeviceConnection : NSObject
{
    unsigned long long _protocolVersion;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    NSMutableDictionary *_replyCallbackBlocks;	// 24 = 0x18
    NSMutableDictionary *_replyExpectingMessageMetadata;	// 32 = 0x20
    NSMutableDictionary *_messageObservers;	// 40 = 0x28
    id _simulatorConnectionHandler;	// 48 = 0x30
    unsigned long long _simulatorConnectionState;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    _Bool _connected;	// 72 = 0x48
    _Bool _nearby;	// 73 = 0x49
    _Bool _testSimulateNoDevices;	// 74 = 0x4a
    NSLock *_replyCallbackBlocksLock;	// 80 = 0x50
    NSLock *_observersLock;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *;	// 96 = 0x60
    NSRecursiveLock *_messageQueuesLock;	// 104 = 0x68
    NSMutableDictionary *_messageQueues;	// 112 = 0x70
    NSMutableDictionary *_inFlightMessageMetadata;	// 120 = 0x78
    NSLock *_inFlightMessageMetadataLock;	// 128 = 0x80
    NSString *_receiverProcessUUID;	// 136 = 0x88
    NSLock *_receiverProcessUUIDLock;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x001000000004b44c
@property(readonly, nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic, getter=isNearbyAndUsable) _Bool nearbyAndUsable; // @synthesize nearbyAndUsable=_nearby;
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000004b428
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000004aae0
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000049411
- (void)updateConnectionStatus;	// IMP=0x0010000000048b21
- (void)removeConnectionObserver:(id)arg1;	// IMP=0x0010000000048ab1
- (void)addConnectionObserver:(id)arg1;	// IMP=0x0010000000048a36
- (void)removeMessageObserver:(id)arg1 forType:(int)arg2;	// IMP=0x001000000004893d
- (id)addMessageObserverForType:(int)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x001000000004879d
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (_Bool)canSendMessageWithType:(int)arg1;	// IMP=0x0010000000048628
- (void)cancelAllMessagesOfType:(int)arg1;	// IMP=0x001000000004810c
- (void)_sendReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3 force:(_Bool)arg4 timeSpentEnqueued:(double)arg5;	// IMP=0x0010000000047645
- (void)sendReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3;	// IMP=0x001000000004762a
- (void)_sendMessage:(id)arg1 options:(id)arg2 force:(_Bool)arg3 timeSpentEnqueued:(double)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000045ebe
- (void)sendMessage:(id)arg1 options:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045ea0
- (void)sendMessage:(id)arg1 options:(id)arg2;	// IMP=0x0010000000045e8b
- (_Bool)_shouldIncludeTemporaryLocationAuthorizationWithMessage:(id)arg1;	// IMP=0x0010000000045dec
- (_Bool)shouldSendMessage:(id)arg1;	// IMP=0x0010000000045de4
- (void)_unpauseAllQueues;	// IMP=0x0010000000045820
- (void)_dequeueNextMessageIfNecessaryForType:(int)arg1;	// IMP=0x0010000000044d38
- (long long)_priorityForReply:(id)arg1;	// IMP=0x0010000000044d26
- (long long)_priorityForMessage:(id)arg1;	// IMP=0x0010000000044c3d
- (id)_idsOptionsForMessage:(id)arg1 withOptions:(id)arg2;	// IMP=0x0010000000044958
- (void)setMessageQueue:(id)arg1 forType:(int)arg2;	// IMP=0x00100000000448ab
- (id)_messageQueueForType:(int)arg1;	// IMP=0x00100000000447bc
- (id)_nearbyConnectedDevice;	// IMP=0x0010000000044629
- (void)_updateReceiverProcessUUID:(id)arg1;	// IMP=0x0010000000044389
- (void)start;	// IMP=0x001000000004437b
- (void)dealloc;	// IMP=0x0010000000044290
- (id)init;	// IMP=0x0010000000043e64
- (void)test_reconnect;	// IMP=0x001000000004b5ab
- (void)test_disconnect;	// IMP=0x001000000004b50c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
