//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeAdministratorHandler, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDHomeAdministratorReceiver : HMFObject
{
    id <HMFMessageReceiver> _receiver;	// 8 = 0x8
    HMDHomeAdministratorHandler *_handler;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000961ca2
- (void).cxx_destruct;	// IMP=0x0000000000961c28
@property(readonly) __weak HMDHomeAdministratorHandler *handler; // @synthesize handler=_handler;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (id)logIdentifier;	// IMP=0x0000000000961b7c
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)__handleXPCMessage:(id)arg1;	// IMP=0x00000000009619b1
- (void)registerForMessage:(id)arg1 policies:(id)arg2;	// IMP=0x00000000009618c8
- (id)shortDescription;	// IMP=0x000000000096184e
- (void)dealloc;	// IMP=0x0000000000961791
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;	// IMP=0x00000000009616f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

