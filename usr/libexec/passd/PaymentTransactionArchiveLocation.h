//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransactionArchiveLocation
{
}

+ (id)_propertySettersForTransactionArchiveLocation;	// IMP=0x004000000030daf6
+ (id)_transactionArchiveLocationsWithQuery:(id)arg1;	// IMP=0x001000000030d5a3
+ (id)transactionArchiveLocationsForArchivePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000030d2d6
+ (void)deleteArchiveLocationsForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000030d185
+ (void)deleteArchiveLocationsForArchivePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000030d0ec
+ (id)_predicateForCloudStoreZonePID:(long long)arg1;	// IMP=0x001000000030d079
+ (id)_predicateForCloudStoreZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000030d00c
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x001000000030cf99
+ (id)_predicateForArchivePID:(long long)arg1;	// IMP=0x001000000030cf26
+ (id)_predicateForLocation:(id)arg1 archivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000030cd91
+ (id)insertOrUpdateTransactionArchiveLocations:(id)arg1 forArchivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000030c951
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000030c922
+ (id)databaseTable;	// IMP=0x001000000030c915
- (id)_commonDictionaryForArchiveLocation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x004000000030d8fa
- (id)cloudStoreZone;	// IMP=0x001000000030d52d
- (id)archiveLocation;	// IMP=0x001000000030d38a
- (void)updateWithTransactionArchiveLocation:(id)arg1;	// IMP=0x001000000030cd37
- (id)initWithTransactionArchiveLocation:(id)arg1 forArchivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000030cc28

@end

