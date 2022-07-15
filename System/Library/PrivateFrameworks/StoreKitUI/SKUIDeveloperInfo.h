//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfo : NSObject
{
    NSArray *_addressLines;	// 8 = 0x8
    NSString *_administrativeArea;	// 16 = 0x10
    NSString *_businessRegistrationIdentifier;	// 24 = 0x18
    NSString *_country;	// 32 = 0x20
    NSString *_ecommerceRegistrationIdentifier;	// 40 = 0x28
    NSString *_emailAddress;	// 48 = 0x30
    NSString *_isoCountryCode;	// 56 = 0x38
    NSString *_locality;	// 64 = 0x40
    NSString *_phoneNumber;	// 72 = 0x48
    NSString *_tradeName;	// 80 = 0x50
    NSString *_tradeRepresentativeName;	// 88 = 0x58
    NSString *_postalCode;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002e19a4
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *tradeRepresentativeName; // @synthesize tradeRepresentativeName=_tradeRepresentativeName;
@property(copy, nonatomic) NSString *tradeName; // @synthesize tradeName=_tradeName;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *ECommerceRegistrationIdentifier; // @synthesize ECommerceRegistrationIdentifier=_ecommerceRegistrationIdentifier;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *businessRegistrationIdentifier; // @synthesize businessRegistrationIdentifier=_businessRegistrationIdentifier;
@property(copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(copy, nonatomic) NSArray *addressLines; // @synthesize addressLines=_addressLines;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e1762
- (id)formattedAddressString;	// IMP=0x00000000002e1614
- (id)initWithDeveloperDictionary:(id)arg1;	// IMP=0x00000000002e0e2a

@end
