//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012fe3e
- (id)copyXPCEncoding;	// IMP=0x001000000012fd6f
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x001000000012fadb
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000012f701
- (void)_setType:(unsigned long long)arg1;	// IMP=0x001000000012f6f3
- (void)_setIdentifier:(id)arg1;	// IMP=0x001000000012f6c2
- (void)_setSubscriptionPeriod:(id)arg1;	// IMP=0x001000000012f691
- (void)_setPriceLocale:(id)arg1;	// IMP=0x001000000012f660
- (void)_setPrice:(id)arg1;	// IMP=0x001000000012f62f
- (void)_setPaymentMode:(unsigned long long)arg1;	// IMP=0x001000000012f621
- (void)_setNumberOfPeriods:(unsigned long long)arg1;	// IMP=0x001000000012f613
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long paymentMode;
@property(readonly, nonatomic) unsigned long long numberOfPeriods;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
// Error: Property attributes should begin with the type ('T') attribute, property name: priceLocale
// Property attributes: (null)

@property(readonly, nonatomic) NSDecimalNumber *price;
- (id)init;	// IMP=0x001000000012f54b

@end
