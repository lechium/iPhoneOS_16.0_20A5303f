//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FeatureApplicationOfferDetails
{
}

+ (id)_propertySettersForFeatureApplicationOfferDetails;	// IMP=0x0040000000069309
+ (id)_predicateForApplicationPID:(long long)arg1;	// IMP=0x0010000000069296
+ (void)updateFeatureApplicationOfferDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000068f49
+ (id)featureApplicationOfferDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000068e9f
+ (void)deleteFeatureApplicationOfferDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000068e06
+ (id)insertFeatureApplicationOfferDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000068d8b
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000068aae
+ (id)databaseTable;	// IMP=0x0010000000068aa1
- (id)featureApplicationOfferDetails;	// IMP=0x004000000006967f
- (void)updateWithFeatureApplicationOfferDetails:(id)arg1;	// IMP=0x0010000000069039
- (id)initWithFeatureApplicationOfferDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000068abb

@end

