//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OctaneInterface : NSObject
{
}

+ (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00400000001dce4b
+ (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00100000001dcda7
+ (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00100000001dccfc
+ (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00100000001dcc64
+ (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x00100000001dcbfb
+ (id)registerForEventOfType:(long long)arg1 filterData:(id)arg2;	// IMP=0x00100000001dcb7c
+ (id)completePriceIncreaseRequestWithResponse:(_Bool)arg1 context:(id)arg2;	// IMP=0x00100000001dcace
+ (id)startPriceIncreaseNeedingConsent:(_Bool)arg1 context:(id)arg2;	// IMP=0x00100000001dca1f
+ (id)messageOfTypeForBundleID:(id)arg1 messageReason:(id)arg2;	// IMP=0x00100000001dc984
+ (id)messageForBundleID:(id)arg1;	// IMP=0x00100000001dc90b
+ (id)generateSKANPostbackSignature:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001dc892
+ (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 andParameters:(id)arg3 withContext:(id)arg4;	// IMP=0x00100000001dc799
+ (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000001dc718
+ (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001dc663
+ (id)resolveIssueWithContext:(id)arg1;	// IMP=0x00100000001dc5bc
+ (id)refundTransactionWithContext:(id)arg1;	// IMP=0x00100000001dc515
+ (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x00100000001dc481
+ (id)getStorefrontWithContext:(id)arg1;	// IMP=0x00100000001dc3ed
+ (id)expireOrRenewSubscriptionWithProductID:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x00100000001dc32c
+ (id)deleteTransactionWithContext:(id)arg1;	// IMP=0x00100000001dc285
+ (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x00100000001dc1f1
+ (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00100000001dc143
+ (id)clearOverridesWithContext:(id)arg1;	// IMP=0x00100000001dc0af
+ (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00100000001dc001
+ (id)cancelTransactionWithContext:(id)arg1;	// IMP=0x00100000001dbf5a
+ (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001dbea5
+ (long long)activePort;	// IMP=0x00100000001dbe59
+ (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x00100000001dbd3c

@end

