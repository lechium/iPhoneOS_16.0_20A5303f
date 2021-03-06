//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue, NSString, VSPrivacyFacade, VSRemoteNotifier, VSUserAccountPersistentContainer, VSUserAccountUpdateManager;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VSUserAccountRegistry : NSObject
{
    NSOperationQueue *_privateQueue;	// 8 = 0x8
    VSRemoteNotifier *_remoteNotifier;	// 16 = 0x10
    VSUserAccountPersistentContainer *_container;	// 24 = 0x18
    VSUserAccountUpdateManager *_updateManager;	// 32 = 0x20
    VSPrivacyFacade *_privacyFacade;	// 40 = 0x28
    NSDate *_lastUpdateTime;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000033c2d
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(retain, nonatomic) VSUserAccountUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(retain, nonatomic) VSUserAccountPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void)updateManager:(id)arg1 didFinishWithUpdatedUserAccounts:(id)arg2;	// IMP=0x0000000000033b40
- (void)updateManager:(id)arg1 didFailToUpdateUserAccounts:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000033ac6
- (void)updateManager:(id)arg1 didUpdateUserAccounts:(id)arg2;	// IMP=0x00000000000338ba
- (id)_predicateForQueryRequestWithOptions:(long long)arg1;	// IMP=0x000000000003348e
- (_Bool)_isValidForUpdateQueryForCurrentTask:(id)arg1;	// IMP=0x0000000000033318
- (_Bool)_isValidForUpdateQueryForCurrentTask;	// IMP=0x00000000000332ca
- (id)_securityTaskForCurrentConnection;	// IMP=0x0000000000033256
- (id)_userAccountForPersistentUserAccount:(id)arg1;	// IMP=0x0000000000032f64
- (id)_legacySubscriptionForUserAccount:(id)arg1;	// IMP=0x0000000000032cb5
- (id)_userAccountForLegacySubscription:(id)arg1;	// IMP=0x0000000000032a99
- (void)_populatePersistentUserAccount:(id)arg1 withUserAccount:(id)arg2;	// IMP=0x00000000000327cf
- (long long)_deviceGenreFromDeviceType:(unsigned long long)arg1;	// IMP=0x00000000000327bd
- (void)_queryPersistentUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000032273
- (void)_queryUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031e83
- (void)_deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000316ce
- (void)_insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003136c
- (void)resetTimer;	// IMP=0x00000000000309ea
- (void)_update;	// IMP=0x000000000003067b
- (void)removeSubscriptions:(id)arg1;	// IMP=0x0000000000030314
- (void)registerSubscription:(id)arg1;	// IMP=0x00000000000302c6
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ffae
- (void)insertLegacySubscription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ff33
- (void)deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fd93
- (void)updateUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f269
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f1eb
- (id)init;	// IMP=0x000000000002efd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

