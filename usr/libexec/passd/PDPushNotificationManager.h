//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PDPushNotificationManager : NSObject
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSMutableSet *_registeredTopics;	// 16 = 0x10
    NSString *_pushToken;	// 24 = 0x18
    NSHashTable *_consumers;	// 32 = 0x20
    long long _enableCriticalReliabilityCount;	// 40 = 0x28
    struct os_unfair_lock_s _consumersLock;	// 48 = 0x30
    struct os_unfair_lock_s _criticalReliabilityLock;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    struct os_unfair_lock_s _outstandingTokenRequestsLock;	// 64 = 0x40
    NSMutableDictionary *_outstandingTokenRequests;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001e6218
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (void)_handleToken:(id)arg1 forTokenInfo:(id)arg2 fromTimeout:(_Bool)arg3;	// IMP=0x00100000001e5fb6
- (void)simulatePushForTopic:(id)arg1;	// IMP=0x00100000001e5f9c
- (void)connect;	// IMP=0x00100000001e5efb
- (void)generateSingleUsePushTokenForTopic:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e5bd3
- (void)disableCriticalReliability;	// IMP=0x00100000001e5b2e
- (void)enableCriticalReliability;	// IMP=0x00100000001e5a84
@property(readonly, nonatomic) NSArray *currentConsumers;
@property(readonly, nonatomic) NSArray *topics;
- (void)recalculatePushTopics;	// IMP=0x00100000001e57bb
- (void)unregisterAllConsumers;	// IMP=0x00100000001e574d
- (void)unregisterConsumer:(id)arg1;	// IMP=0x00100000001e56e9
- (void)registerConsumer:(id)arg1;	// IMP=0x00100000001e54f0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forInfo:(id)arg3;	// IMP=0x00100000001e54d5
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000001e51db
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000001e4f9e
- (void)dealloc;	// IMP=0x00100000001e4f48
- (id)init;	// IMP=0x00100000001e4e9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
