//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OctaneInterface : NSObject
{
}

+ (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x004000000006e157
+ (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x001000000006e0af
+ (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x001000000006dffc
+ (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x001000000006df60
+ (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x001000000006def7
+ (id)registerForEventOfType:(long long)arg1 filterData:(id)arg2;	// IMP=0x001000000006de78
+ (id)completePriceIncreaseRequestWithResponse:(_Bool)arg1 context:(id)arg2;	// IMP=0x001000000006ddb9
+ (id)startPriceIncreaseNeedingConsent:(_Bool)arg1 context:(id)arg2;	// IMP=0x001000000006dcf9
+ (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006dc78
+ (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000006dbbb
+ (id)resolveIssueWithContext:(id)arg1;	// IMP=0x001000000006db02
+ (id)refundTransactionWithContext:(id)arg1;	// IMP=0x001000000006da49
+ (id)messageOfTypeForBundleID:(id)arg1 messageReason:(id)arg2;	// IMP=0x001000000006d9ae
+ (id)messageForBundleID:(id)arg1;	// IMP=0x001000000006d935
+ (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x001000000006d895
+ (id)getStorefrontWithContext:(id)arg1;	// IMP=0x001000000006d7f5
+ (id)expireOrRenewSubscriptionWithProductID:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x001000000006d72c
+ (id)deleteTransactionWithContext:(id)arg1;	// IMP=0x001000000006d673
+ (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x001000000006d5d3
+ (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x001000000006d514
+ (id)clearOverridesWithContext:(id)arg1;	// IMP=0x001000000006d474
+ (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x001000000006d3b5
+ (id)cancelTransactionWithContext:(id)arg1;	// IMP=0x001000000006d2fc
+ (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000006d23f
+ (long long)activePort;	// IMP=0x001000000006d1f3
+ (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x001000000006d0d6

@end

