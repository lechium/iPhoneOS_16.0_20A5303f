//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, STLocalIDSTransport;
@protocol STPersistenceControllerProtocol, STTransport, STTransportPayloadManagerDelegate;

@interface STTransportPayloadManager : NSObject
{
    NSMutableSet *_queuedProcessQueueOperations;	// 8 = 0x8
    _Bool _invalid;	// 16 = 0x10
    _Bool _resumed;	// 17 = 0x11
    _Bool _shouldSetupLocalTransport;	// 18 = 0x12
    id <STTransportPayloadManagerDelegate> _delegate;	// 24 = 0x18
    id <STTransport> _transport;	// 32 = 0x20
    STLocalIDSTransport *_localTransport;	// 40 = 0x28
    id <STPersistenceControllerProtocol> _persistenceController;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000009f28e
@property _Bool shouldSetupLocalTransport; // @synthesize shouldSetupLocalTransport=_shouldSetupLocalTransport;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly) STLocalIDSTransport *localTransport; // @synthesize localTransport=_localTransport;
@property(readonly, nonatomic) id <STTransport> transport; // @synthesize transport=_transport;
@property(nonatomic, getter=isResumed) _Bool resumed; // @synthesize resumed=_resumed;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) __weak id <STTransportPayloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)localTransport:(id)arg1 didReceivePayload:(id)arg2;	// IMP=0x001000000009f188
- (void)transport:(id)arg1 didReceiveUpdatedState:(unsigned long long)arg2 forPayloadUUID:(id)arg3 context:(id)arg4 error:(id)arg5;	// IMP=0x001000000009f0e3
- (void)transport:(id)arg1 didReceiveData:(id)arg2 altURI:(id)arg3 appleID:(id)arg4 serverReceivedTime:(id)arg5;	// IMP=0x001000000009ea9d
- (void)_forwardPayloadToLocalTransport:(id)arg1;	// IMP=0x001000000009e551
- (void)_updatePayloadUUID:(id)arg1 toState:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000009e458
- (void)_sendPayload:(id)arg1;	// IMP=0x001000000009e00f
- (void)_operation:(id)arg1 finishedDidChange:(_Bool)arg2;	// IMP=0x001000000009df2d
- (void)_operation:(id)arg1 executingDidChange:(_Bool)arg2;	// IMP=0x001000000009dead
- (void)_operation:(id)arg1 cancelledDidChange:(_Bool)arg2;	// IMP=0x001000000009de2d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000009db88
- (void)_processEnqueuedPayloads;	// IMP=0x001000000009d622
- (void)enqueuePayload:(id)arg1;	// IMP=0x001000000009d468
- (void)invalidate;	// IMP=0x001000000009d299
- (void)resume;	// IMP=0x001000000009d0fe
- (id)initWithTransport:(id)arg1 localTransport:(id)arg2 persistenceController:(id)arg3;	// IMP=0x001000000009cccf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
