//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FeatureApplicationInvitationDetails
{
}

+ (id)_propertySettersForFeatureApplicationInvitationDetails;	// IMP=0x0040000000089a56
+ (id)_propertyValuesForFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x0010000000089854
+ (id)_predicateForApplicationPID:(id)arg1;	// IMP=0x0010000000089831
+ (void)updateFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000896c2
+ (id)featureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000089618
+ (void)deleteFeatureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000008957f
+ (id)insertFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000894f1
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000089400
+ (id)databaseTable;	// IMP=0x00100000000893f3
- (id)featureApplicationInvitationDetails;	// IMP=0x0040000000089c26
- (void)updateWithFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x00100000000897b7
- (id)initWithFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000008940d

@end
