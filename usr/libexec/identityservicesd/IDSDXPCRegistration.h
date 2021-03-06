//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTAdapter, IDSDAccountController, IDSUserStore, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCRegistration : NSObject
{
    _Bool _onlyAllowReads;	// 8 = 0x8
    IDSUserStore *_userStore;	// 16 = 0x10
    IDSDAccountController *_accountController;	// 24 = 0x18
    IDSCTAdapter *_ctAdapter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000594ad0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSCTAdapter *ctAdapter; // @synthesize ctAdapter=_ctAdapter;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(nonatomic) _Bool onlyAllowReads; // @synthesize onlyAllowReads=_onlyAllowReads;
- (void)constructRAResponseDictionaryForServices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000005948d0
- (void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000594030
- (void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000593790
- (void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000593020
- (void)setSelectedSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000592630
- (void)unselectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000591eb0
- (void)selectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005915b0
- (void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000590e40
- (void)requestSelectedSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000590440
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x00100000005902a0
- (id)initWithQueue:(id)arg1 connection:(id)arg2 userStore:(id)arg3 accountController:(id)arg4 ctAdapter:(id)arg5;	// IMP=0x001000000058fe40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

