//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PushProvisioningSharingMetadata
{
}

+ (id)_propertySettersForProvisioningSharingMetadata;	// IMP=0x004000000017aff7
+ (id)databaseTable;	// IMP=0x001000000017afea
+ (id)_predicateForProvisioningSharingStatus:(unsigned long long)arg1;	// IMP=0x001000000017af77
+ (id)_predicateForProvisioningSharingIdentifier:(id)arg1;	// IMP=0x001000000017af54
+ (void)deleteAllProvisioningTargetsInDatabase:(id)arg1;	// IMP=0x001000000017ac62
+ (void)deleteSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017ab17
+ (id)insertOrUpdateSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017a8e0
+ (id)pushProvisioningSharingMetadataForProvisioningSharingIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017a854
+ (id)pushProvisioningSharingMetadataForStatus:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017a6a1
+ (id)pushProvisioningSharingMetadataInDatabase:(id)arg1;	// IMP=0x001000000017a4f0
- (id)sharingMetaData;	// IMP=0x004000000017ae1c
- (void)_updateProvisioningSharingMetadata:(id)arg1;	// IMP=0x001000000017acfc
- (id)initWithSharingMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000017a323

@end

