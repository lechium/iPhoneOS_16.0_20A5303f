//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;
@protocol ADDeviceSyncMessageReceiving, OS_dispatch_queue;

@interface ADDeviceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _incomingSequence;	// 16 = 0x10
    unsigned long long _outgoingSequence;	// 24 = 0x18
    NSSet *_messageSenders;	// 32 = 0x20
    NSDictionary *_dataConsumersByType;	// 40 = 0x28
    NSDictionary *_dataProvidersByType;	// 48 = 0x30
    NSString *_deviceIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000010477d
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)_pullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010411e
- (void)_pullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000103a88
- (void)_pullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000103432
- (void)_pushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102e9f
- (void)_pingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010299c
- (void)_sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102607
- (void)_handlePullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102222
- (void)_handlePullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000101dff
- (void)_handlePullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010172c
- (void)_handlePushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101469
- (void)_handlePingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001013be
- (void)_receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001004ec
- (_Bool)_handlePulledSnapshot:(id)arg1 forDataType:(id)arg2;	// IMP=0x001000000010046e
- (_Bool)_handlePulledDeltaWithIncrementalChanges:(id)arg1 forDataType:(id)arg2;	// IMP=0x00100000001003f0
- (_Bool)_handlePushedOrPulledGeneration:(unsigned long long)arg1 forDataType:(id)arg2;	// IMP=0x00100000000ffe93
- (void)_invalidate;	// IMP=0x00100000000ffe44
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffd6c
- (void)receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffc94
- (void)invalidate;	// IMP=0x00100000000ffc33
- (void)pushGenerationsByDataTypes:(id)arg1;	// IMP=0x00100000000ffb89
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2 dataConsumersByType:(id)arg3 dataProvidersByType:(id)arg4 messageSenders:(id)arg5;	// IMP=0x00100000000ff9a3
@property(readonly, nonatomic) id <ADDeviceSyncMessageReceiving> messageReceiver;
- (void)dealloc;	// IMP=0x00100000000ff95c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

