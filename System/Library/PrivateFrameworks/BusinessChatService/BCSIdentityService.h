//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol BCSIDSQueryControllerProtocol, BCSIDSServiceFactoryProtocol, BCSIdentityAccountProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSIdentityService : NSObject
{
    id <BCSIdentityAccountProtocol> _businessChatAccount;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;	// 16 = 0x10
    NSMutableDictionary *_idStatusCompletionBlocks;	// 24 = 0x18
    id <BCSIDSServiceFactoryProtocol> _IDSServiceFactory;	// 32 = 0x20
    id <BCSIDSQueryControllerProtocol> _IDSQueryController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002b3ba
- (void)refreshIDStatusForBizID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ab84
- (id)businessChatAccount;	// IMP=0x000000000002a8b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

