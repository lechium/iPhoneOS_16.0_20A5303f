//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

@interface SKProduct : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (id)productsFromXPCEncodingsArray:(id)arg1;	// IMP=0x00400000000484a9
+ (id)productsFromDictionaries:(id)arg1;	// IMP=0x0010000000047496
- (void).cxx_destruct;	// IMP=0x0020000000048f40
- (id)copyXPCEncoding;	// IMP=0x0010000000048c44
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0010000000048ba8
- (id)initMinusLocaleWithXPCEncoding:(id)arg1;	// IMP=0x0010000000048708
- (void)_setDiscounts:(id)arg1;	// IMP=0x0010000000048478
- (void)_setSubscriptionPeriod:(id)arg1;	// IMP=0x0010000000048429
- (void)_setSubscriptionGroupIdentifier:(id)arg1;	// IMP=0x00100000000483c8
- (void)_setProductIdentifier:(id)arg1;	// IMP=0x0010000000048367
- (void)_setPriceLocale:(id)arg1;	// IMP=0x00100000000482ee
- (void)_setPrice:(id)arg1;	// IMP=0x001000000004829f
- (void)_setLocalizedTitle:(id)arg1;	// IMP=0x001000000004823e
- (void)_setLocalizedDescription:(id)arg1;	// IMP=0x00100000000481dd
@property(copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
- (void)_setLocale:(id)arg1;	// IMP=0x001000000004811b
- (void)_setIntroductoryPrice:(id)arg1;	// IMP=0x00100000000480cc
- (void)_setDownloadable:(_Bool)arg1;	// IMP=0x00100000000480bf
- (void)_setDownloadContentLengths:(id)arg1;	// IMP=0x001000000004805e
- (void)_setContentVersion:(id)arg1;	// IMP=0x0010000000047ffd
@property(readonly, nonatomic) NSArray *discounts;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property(readonly, nonatomic) NSString *subscriptionGroupIdentifier;
@property(readonly, nonatomic) NSString *productIdentifier;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) SKProductDiscount *introductoryPrice;
- (_Bool)downloadable;	// IMP=0x0010000000047f3c
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic) NSString *downloadContentVersion;
@property(readonly, nonatomic) NSArray *downloadContentLengths;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) NSArray *contentLengths;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000047df5
- (id)initMinusLocaleWithDictionary:(id)arg1;	// IMP=0x00100000000477de
- (id)init;	// IMP=0x0010000000047440

@end

