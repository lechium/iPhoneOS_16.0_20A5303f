//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppInstallEntity
{
    _Bool _isAutomatic;	// 8 = 0x8
    _Bool _isUpdate;	// 9 = 0x9
    _Bool _isRestore;	// 10 = 0xa
    unsigned long long _coordinatorIntent;	// 16 = 0x10
}

+ (Class)memoryEntityClass;	// IMP=0x004000000011004f
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x001000000010fed8
+ (id)databaseTable;	// IMP=0x001000000010fecb
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x001000000010fadf
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x001000000010fa6f
- (_Bool)deleteFromDatabase;	// IMP=0x002000000010ea34

@end
