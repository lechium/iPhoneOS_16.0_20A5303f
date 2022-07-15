//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, SPTransportDelegate;

@interface SPTransport : NSObject
{
    _Bool _canSend;	// 8 = 0x8
    _Bool _wifiEnabled;	// 9 = 0x9
    IDSService *_secureRemoteService;	// 16 = 0x10
    IDSService *_insecureRemoteService;	// 24 = 0x18
    id <SPTransportDelegate> _delegate;	// 32 = 0x20
    NSMutableDictionary *_messages;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_messagesAccessQueue;	// 48 = 0x30
    long long _wifiThresholdCount;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_wifiTimer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_retainedIDSMessageContextsQueue;	// 72 = 0x48
    NSMutableArray *_retainedIDSMessageContexts;	// 80 = 0x50
    NSString *_outgoingMessageBlockedUntil;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_blockedOutgoingMessagesQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_sendQueue;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x002000000002154f
- (void).cxx_destruct;	// IMP=0x0020000000027856
@property(retain) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain) NSObject<OS_dispatch_queue> *blockedOutgoingMessagesQueue; // @synthesize blockedOutgoingMessagesQueue=_blockedOutgoingMessagesQueue;
@property(retain) NSString *outgoingMessageBlockedUntil; // @synthesize outgoingMessageBlockedUntil=_outgoingMessageBlockedUntil;
@property(retain, nonatomic) NSMutableArray *retainedIDSMessageContexts; // @synthesize retainedIDSMessageContexts=_retainedIDSMessageContexts;
@property(retain) NSObject<OS_dispatch_queue> *retainedIDSMessageContextsQueue; // @synthesize retainedIDSMessageContextsQueue=_retainedIDSMessageContextsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *wifiTimer; // @synthesize wifiTimer=_wifiTimer;
@property _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
@property long long wifiThresholdCount; // @synthesize wifiThresholdCount=_wifiThresholdCount;
@property _Bool canSend; // @synthesize canSend=_canSend;
@property(retain) NSObject<OS_dispatch_queue> *messagesAccessQueue; // @synthesize messagesAccessQueue=_messagesAccessQueue;
@property(retain) NSMutableDictionary *messages; // @synthesize messages=_messages;
@property(retain) id <SPTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDSService *insecureRemoteService; // @synthesize insecureRemoteService=_insecureRemoteService;
@property(retain) IDSService *secureRemoteService; // @synthesize secureRemoteService=_secureRemoteService;
- (void)removeOutgoingMessageBlockIfIdentiferMatches:(id)arg1 sendError:(id)arg2;	// IMP=0x0010000000027409
- (_Bool)handleDataProtectionSendFailureOrRetryFailureOnService:(id)arg1 account:(id)arg2 identifier:(id)arg3 error:(id)arg4;	// IMP=0x0010000000026a24
- (void)temporarilyRetainIDSMessageContext:(id)arg1;	// IMP=0x0010000000026871
- (void)incomingProtobuf:(id)arg1;	// IMP=0x001000000002674e
- (void)incomingInsecureProtobuf:(id)arg1;	// IMP=0x0010000000026614
- (void)incomingSecureProtobuf:(id)arg1;	// IMP=0x00100000000264b7
- (_Bool)saveForPossibleResend:(id)arg1;	// IMP=0x0010000000026319
- (id)serviceForTransport:(long long)arg1;	// IMP=0x00100000000261e6
- (_Bool)_sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4 retryExpiration:(id)arg5 tryGeneration:(unsigned long long)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000024f91
- (_Bool)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000024d5f
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000024962
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;	// IMP=0x00100000000248b9
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000023dd1
- (void)_sendData:(id)arg1 forApplication:(id)arg2 idsPriority:(long long)arg3 installer:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000233d7
- (void)sendData:(id)arg1 forApplication:(id)arg2 idsPriority:(long long)arg3 installer:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000023224
- (void)_sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3 retryExpiration:(id)arg4 tryGeneration:(unsigned long long)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000021f28
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000021e18
- (void)wifiTimeOut;	// IMP=0x0010000000021d5a
- (void)killWiFiTimer;	// IMP=0x0010000000021d0c
- (void)startWiFiTimer;	// IMP=0x0010000000021bf3
- (void)keepWiFiAliveIfNeeded;	// IMP=0x0010000000021b9d
- (_Bool)isWiFiRequiredForSize:(long long)arg1;	// IMP=0x0010000000021b5a
- (_Bool)isWiFiEnabled;	// IMP=0x0010000000021b25
- (void)disableWiFiIfNeededForDataOfSize:(long long)arg1;	// IMP=0x0010000000021995
- (void)enableWiFiIfNeededForDataOfSize:(long long)arg1;	// IMP=0x0010000000021818
- (void)setTransportDelegate:(id)arg1;	// IMP=0x0010000000021807
- (id)init;	// IMP=0x00100000000215a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
