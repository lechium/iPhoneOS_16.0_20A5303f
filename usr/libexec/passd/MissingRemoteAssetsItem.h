//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MissingRemoteAssetsItem
{
}

+ (id)_propertySettersForItem;	// IMP=0x00400000000689ae
+ (id)_predicateForUniqueID:(id)arg1;	// IMP=0x001000000006898b
+ (id)_predicateForMaximumRetriesCount:(unsigned long long)arg1;	// IMP=0x0010000000068918
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000688e9
+ (id)databaseTable;	// IMP=0x00100000000688dc
+ (void)removeMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0010000000068764
+ (void)incrementDownloadRetriesCountForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0010000000068694
+ (id)itemsInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x0010000000068481
+ (unsigned long long)itemsCountInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x00100000000683fb
+ (id)insertOrReplaceMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0010000000068385
- (id)initMissingRemoteAssetsItemWithUniqueID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00400000000687fd

@end

