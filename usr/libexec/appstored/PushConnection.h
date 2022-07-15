//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSData, NSString, PushConnectionMessageHistory, TaskQueue;
@protocol OS_dispatch_queue, PushConnectionDelegate;

@interface PushConnection : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    PushConnectionMessageHistory *_appStoreMessageHistory;	// 40 = 0x28
    PushConnectionMessageHistory *_testFlightMessageHistory;	// 48 = 0x30
    _Bool _testFlightTopicEnabled;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
    id <PushConnectionDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000034abe
@property __weak id <PushConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTopicsInConnection:(id)arg1;	// IMP=0x001000000003486f
- (void)_retryAddPushTypeRequestForAccountID:(id)arg1 isSandboxAccount:(_Bool)arg2 forEnvironment:(id)arg3;	// IMP=0x001000000003449c
- (void)_sendPushTypesRequest:(long long)arg1 accountID:(id)arg2 forEnvironment:(id)arg3 isSandboxAccount:(_Bool)arg4;	// IMP=0x0010000000033d8d
@property(readonly, copy) NSString *description;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000033b5f
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000033a37
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000338bf
- (void)_unitTest_sendFakeRawMessage:(id)arg1;	// IMP=0x00100000000337f5
- (void)invalidateTokenForTopic:(unsigned long long)arg1;	// IMP=0x001000000003365b
- (void)requestTokenForTopic:(unsigned long long)arg1;	// IMP=0x0010000000033468
- (void)shutdown;	// IMP=0x0010000000033452
- (void)removePushTypeForSandboxAccountId:(id)arg1;	// IMP=0x00100000000333d2
- (void)addPushTypeForCurrentSandboxAccount;	// IMP=0x001000000003337c
- (void)removePushTypeForAccountId:(id)arg1;	// IMP=0x00100000000332ff
- (void)addPushTypeForCurrentAccount;	// IMP=0x00100000000332ac
@property _Bool testFlightTopicEnabled;
@property(readonly) NSData *publicToken;
@property(readonly) NSString *environment;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2 apsConnection:(id)arg3;	// IMP=0x00100000000330c4
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000033020
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000032fbd
- (id)init;	// IMP=0x0010000000032fa1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
