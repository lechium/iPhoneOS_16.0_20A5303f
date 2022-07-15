//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, RBSProcessHandle, TUCallServicesClientCapabilities;
@protocol OS_dispatch_queue;

@interface CSDClient : NSObject
{
    _Bool _supportsMessagesGroupProviding;	// 8 = 0x8
    id _object;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    TUCallServicesClientCapabilities *_capabilities;	// 32 = 0x20
    NSMutableSet *_identifiersWithPendingCoalescingBlocks;	// 40 = 0x28
    NSMutableDictionary *_blockToExecuteAfterPendingCoalescingBlocksByIdentifier;	// 48 = 0x30
    RBSProcessHandle *_processHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x001000000016aa45
@property(retain, nonatomic) RBSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(retain, nonatomic) NSMutableDictionary *blockToExecuteAfterPendingCoalescingBlocksByIdentifier; // @synthesize blockToExecuteAfterPendingCoalescingBlocksByIdentifier=_blockToExecuteAfterPendingCoalescingBlocksByIdentifier;
@property(retain, nonatomic) NSMutableSet *identifiersWithPendingCoalescingBlocks; // @synthesize identifiersWithPendingCoalescingBlocks=_identifiersWithPendingCoalescingBlocks;
@property(nonatomic) _Bool supportsMessagesGroupProviding; // @synthesize supportsMessagesGroupProviding=_supportsMessagesGroupProviding;
@property(retain, nonatomic) TUCallServicesClientCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic, getter=isProcessSuspended) _Bool processSuspended;
- (id)valueForEntitlement:(id)arg1;	// IMP=0x001000000016a86b
- (_Bool)isEntitledForCapability:(id)arg1;	// IMP=0x001000000016a863
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *processName;
@property(readonly, nonatomic) int processIdentifier;
- (void)performBlockAfterCoalescing:(CDUnknownBlockType)arg1;	// IMP=0x001000000016a757
@property(readonly, nonatomic) id objectForBlock;
- (void)performBlock:(CDUnknownBlockType)arg1 coalescedByIdentifier:(id)arg2;	// IMP=0x001000000016a4ab
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016a43d
@property(readonly, nonatomic) NSString *propertiesDescription;
- (id)description;	// IMP=0x001000000016a2dc
- (id)initWithObject:(id)arg1 queue:(id)arg2;	// IMP=0x001000000016a1ed
@property(readonly, nonatomic) _Bool hasVoIPNetworkExtensionEntitlement;

@end
