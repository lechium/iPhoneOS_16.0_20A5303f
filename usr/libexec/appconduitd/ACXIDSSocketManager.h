//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXSocket, IDSService, NSString;
@protocol ACXIDSSocketManagerDelegateProtocol, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface ACXIDSSocketManager : NSObject
{
    int _socketInUseCount;	// 8 = 0x8
    _Bool _wiFiAsserted;	// 12 = 0xc
    id <ACXIDSSocketManagerDelegateProtocol> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_socketInUse;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
    IDSService *_service;	// 48 = 0x30
    ACXSocket *_socket;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_socketTeardownTimer;	// 64 = 0x40
    CDUnknownBlockType _initiateCB;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_socketSetupTimer;	// 80 = 0x50
    NSString *_currentConnectionUUID;	// 88 = 0x58
    NSString *_currentSetupMessageUUID;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_listenSource;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_timerSource;	// 112 = 0x70
}

+ (id)sharedV2SocketManager;	// IMP=0x002000000001306b
+ (id)sharedV1SocketManager;	// IMP=0x0010000000012fc3
- (void).cxx_destruct;	// IMP=0x0020000000016d3b
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenSource; // @synthesize listenSource=_listenSource;
@property(retain, nonatomic) NSString *currentSetupMessageUUID; // @synthesize currentSetupMessageUUID=_currentSetupMessageUUID;
@property(retain, nonatomic) NSString *currentConnectionUUID; // @synthesize currentConnectionUUID=_currentConnectionUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSetupTimer; // @synthesize socketSetupTimer=_socketSetupTimer;
@property(nonatomic) _Bool wiFiAsserted; // @synthesize wiFiAsserted=_wiFiAsserted;
@property(copy, nonatomic) CDUnknownBlockType initiateCB; // @synthesize initiateCB=_initiateCB;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketTeardownTimer; // @synthesize socketTeardownTimer=_socketTeardownTimer;
@property(retain, nonatomic) ACXSocket *socket; // @synthesize socket=_socket;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *socketInUse; // @synthesize socketInUse=_socketInUse;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <ACXIDSSocketManagerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000001695d
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000166f1
- (void)handleIDSRelayConnectionResponse:(id)arg1 fromID:(id)arg2 UUID:(id)arg3 socketPath:(id)arg4 context:(id)arg5;	// IMP=0x00100000000160a9
- (void)handleIDSRelayConnection:(id)arg1 fromID:(id)arg2 UUID:(id)arg3 context:(id)arg4;	// IMP=0x0010000000015197
- (void)_onQueue_stopSocketSetupTimer;	// IMP=0x00100000000150f4
- (void)_onQueue_startSocketSetupTimer;	// IMP=0x0010000000014ed9
- (void)_onInternalQueue_resetSocketBecauseOfError:(id)arg1;	// IMP=0x0010000000014d2b
- (id)_sendMessage:(id)arg1 messageDictionary:(id)arg2 withAcknowledgement:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000014a70
- (void)_onInternalQueue_initiateConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001480d
- (void)_readSourceReturnedDictionaryOrData:(id)arg1 error:(id)arg2;	// IMP=0x00100000000145a1
- (void)_onInternalQueue_disarmSocketShutdownTimer;	// IMP=0x001000000001451c
- (void)_onInternalQueue_armSocketShutdownTimer;	// IMP=0x00100000000141f2
- (void)_doneUsingSocket;	// IMP=0x00100000000141b2
- (void)_waitForSocket;	// IMP=0x001000000001415f
- (_Bool)writeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000013f8a
- (_Bool)writeData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000013db5
- (_Bool)writeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000013c00
- (void)resetSocket;	// IMP=0x0010000000013a9d
- (void)endUsingSocket;	// IMP=0x001000000001399a
- (void)beginUsingSocketAsDelegate:(id)arg1 onQueue:(id)arg2 tryWiFi:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013559
- (void)_onInternalQueue_beginUsingSocketAsDelegate:(id)arg1 onQueue:(id)arg2 tryWiFi:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001334b
- (id)_initWithDelegate:(id)arg1 queue:(id)arg2 serviceName:(id)arg3;	// IMP=0x001000000001312c
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000013113

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

