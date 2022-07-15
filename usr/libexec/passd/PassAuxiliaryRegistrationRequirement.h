//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassAuxiliaryRegistrationRequirement
{
}

+ (id)_propertyValuesFor:(id)arg1;	// IMP=0x004000000016c6d6
+ (id)_predicateForUnregistered;	// IMP=0x001000000016c6af
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000016c68c
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x001000000016c619
+ (_Bool)updateAuxiliaryRegistrationRequirementsForPassPID:(long long)arg1 isRegistered:(_Bool)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016c38a
+ (_Bool)updateAuxiliaryRegistrationRequirement:(id)arg1 passPID:(long long)arg2 isRegistered:(_Bool)arg3 inDatabase:(id)arg4;	// IMP=0x001000000016c12c
+ (void)deleteAuxiliaryRegistrationRequirementsForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000016c093
+ (void)insertOrUpdateAuxiliaryRegistrationRequirements:(id)arg1 passPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016bbc8
+ (id)unregisteredAuxiliaryRegistrationRequirementIdentifiersForPassPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000016b90e
+ (id)databaseTable;	// IMP=0x001000000016b901
- (void)updateWithObject:(id)arg1;	// IMP=0x004000000016b887
- (id)initWithObject:(id)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016b78d

@end
