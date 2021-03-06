//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;
@protocol VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelTransaction
{
    unsigned int _sessionID;	// 24 = 0x18
    NSNumber *_participantID;	// 32 = 0x20
    unsigned long long _transactionID;	// 40 = 0x28
    struct _opaque_pthread_mutex_t _transactionLock;	// 48 = 0x30
    struct _opaque_pthread_cond_t _transactionDone;	// 112 = 0x70
    _Bool _isConfirmed;	// 160 = 0xa0
    _Bool _isFlushed;	// 161 = 0xa1
    id <VCControlChannelTransactionDelegate> _weakTransactionDelegate;	// 168 = 0xa8
}

+ (_Bool)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionID:(id)arg4 transactionDelegate:(id)arg5;	// IMP=0x00600000001e2bbb
- (_Bool)sendReliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 timeout:(id)arg4 useFastRetries:(_Bool)arg5;	// IMP=0x00000000001e1a07
- (float)retryTimeoutForRetryAttempt:(unsigned int)arg1 usingFastRetries:(_Bool)arg2;	// IMP=0x00000000001e19c8
- (unsigned int)retryCountUsingFastRetries:(_Bool)arg1;	// IMP=0x00000000001e19b3
- (void)confirmedTransactionByParticipantID:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000000001e1536
- (void)flushTransaction;	// IMP=0x00000000001e12e7
- (void)dealloc;	// IMP=0x00000000001e10e2
- (id)initWithTransportSessionID:(unsigned int)arg1 participantID:(id)arg2 transactionID:(unsigned long long)arg3 transactionDelegate:(id)arg4;	// IMP=0x00000000001e0e22

@end

