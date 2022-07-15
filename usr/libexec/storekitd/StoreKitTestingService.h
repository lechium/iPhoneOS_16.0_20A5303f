//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface StoreKitTestingService : NSObject
{
}

+ (id)defaultService;	// IMP=0x002000000002f44a
- (void)_logExitForMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x004000000003302b
- (id)_logAndValidateMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x0010000000032c7f
- (_Bool)_isAppleSignedApp:(id)arg1;	// IMP=0x0010000000032c77
- (_Bool)_connectionHasEntitlement:(id)arg1 entitlementName:(id)arg2;	// IMP=0x0010000000032c0e
- (id)_bundleIDForConnection:(id)arg1;	// IMP=0x0010000000032bf9
- (void)showMessage:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000327ac
- (void)receiveEventOfType:(long long)arg1 eventData:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000032606
- (void)unregisterForEventWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000003221c
- (void)registerForEventOfType:(long long)arg1 forBundleID:(id)arg2 withFilterData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000031b8c
- (void)simulateStoreKitPushWithAction:(id)arg1 forBundleIdentifiers:(id)arg2;	// IMP=0x00100000000317e6
- (void)removeTransactionIdentifiersFromCache:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000031632
- (void)updatePort:(long long)arg1;	// IMP=0x0010000000031597
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000313c1
- (void)transactionDeleted:(unsigned long long)arg1 productID:(id)arg2 forBundleID:(id)arg3;	// IMP=0x00100000000310fe
- (void)revokeEntitlementsForProductIdentifiers:(id)arg1 forBundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030f7d
- (void)refreshQueueForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030d85
- (void)setStorefront:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030c6c
- (void)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000030b4a
- (void)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030a33
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003091b
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003080f
- (void)startObservingTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030632
- (void)saveConfigurationData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003051e
- (void)saveSigningData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003040a
- (void)removeConfigurationForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030319
- (void)performAction:(long long)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000300fe
- (void)invalidateBag;	// IMP=0x0010000000030069
- (void)getTransactionDataForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ff55
- (void)getActivePortWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002fd15
- (void)getStorefrontForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fc01
- (void)forceRenewalOfSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002fae6
- (void)expireSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f9c8
- (void)deleteAllTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f8cc
- (void)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f7c0
- (void)clearOverridesForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f6c4
- (void)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f5b8
- (void)buyProductWithID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f49f

@end
