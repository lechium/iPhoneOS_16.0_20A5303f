//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSPersistentSubscription : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;	// IMP=0x006000000001155f
- (_Bool)validateBillingIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000013163
- (_Bool)validateTierIdentifiers:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001307c
- (_Bool)validateSubscriberIdentifierHash:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000013060
- (_Bool)validateExpirationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000013044
- (_Bool)validateModificationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000012fe1
- (_Bool)validateCreationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000012f7e
- (_Bool)validateAccessLevel:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000012f62
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000012e08
- (void)awakeFromFetch;	// IMP=0x0000000000012d36
- (void)awakeFromInsert;	// IMP=0x0000000000012c51
@property(copy, nonatomic) NSArray *tierIdentifiers; // @dynamic tierIdentifiers;
@property(copy, nonatomic) NSString *billingIdentifier; // @dynamic billingIdentifier;
@property(copy, nonatomic) NSString *subscriberIdentifierHash; // @dynamic subscriberIdentifierHash;
@property(copy, nonatomic) NSDate *mostRecentSaveDate; // @dynamic mostRecentSaveDate;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSNumber *accessLevel; // @dynamic accessLevel;
@property(copy, nonatomic) NSString *providedSubscriptionInfo; // @dynamic providedSubscriptionInfo;
- (void)_deriveValuesFromProvidedInfo:(id)arg1;	// IMP=0x0000000000011b7d
- (void)_updateDerivedSubscriptionInfo;	// IMP=0x000000000001165e
- (_Bool)_validateNullableValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000113a3
- (void)_setNullResettableValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000112be

// Remaining properties
@property(copy, nonatomic) NSString *derivedSubscriptionInfo; // @dynamic derivedSubscriptionInfo;
@property(copy, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(copy, nonatomic) NSNumber *sourceKind; // @dynamic sourceKind;

@end
