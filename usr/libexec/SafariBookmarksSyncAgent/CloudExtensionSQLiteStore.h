//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, NSString;
@protocol CloudExtensionSQLiteStoreDelegate;

@interface CloudExtensionSQLiteStore
{
    CKRecordZoneID *_cloudExtensionsRecordZoneID;	// 8 = 0x8
    id <CloudExtensionSQLiteStoreDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000083e6d
@property(nonatomic) __weak id <CloudExtensionSQLiteStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_saveExtensionState:(id)arg1;	// IMP=0x001000000008383f
- (id)_cloudExtensionStateFromRow:(id)arg1 deviceUUIDString:(id)arg2;	// IMP=0x0010000000083423
- (int)_loadExtensionStatesForDevice:(id)arg1;	// IMP=0x0010000000083073
- (int)_saveDevice:(id)arg1;	// IMP=0x0010000000082c7d
- (id)_loadDeviceWithUUIDString:(id)arg1;	// IMP=0x00100000000827f7
- (id)_loadDevices;	// IMP=0x001000000008215f
- (void)_vacuumFailedWithError:(int)arg1;	// IMP=0x0000000000082040
- (void)_failedToDeleteMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000081ef0
- (void)_failedToInsertMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000081da0
- (void)_failedToUpdateMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000081c50
- (void)_failedToSetSchemaVersion:(int)arg1 withError:(int)arg2;	// IMP=0x0010000000081b1f
- (void)_databaseWillBeRecreated;	// IMP=0x0010000000081ad4
- (void)_databaseAtURL:(id)arg1 failedToDeleteWithError:(id)arg2;	// IMP=0x00100000000819af
- (void)_databaseWillBeDeleted;	// IMP=0x0010000000081964
- (void)_databaseWillBeClosed;	// IMP=0x0010000000081934
- (void)_databaseAtURL:(id)arg1 hasIncorrectSchemaVersion:(int)arg2;	// IMP=0x00100000000818ca
- (void)_failedToEnableSecureDeleteWithError:(int)arg1;	// IMP=0x00100000000817ab
- (void)_failedToEnableForeignKeysWithError:(int)arg1;	// IMP=0x001000000008168c
- (void)_failedToEnableWALWithError:(id)arg1;	// IMP=0x00100000000815c0
- (void)_failedToExcludeDatabaseFromBackupWithError:(id)arg1;	// IMP=0x00100000000814f4
- (void)_databaseAtURL:(id)arg1 failedToOpenWithError:(id)arg2;	// IMP=0x00100000000813cf
- (void)_databaseWillBeOpened;	// IMP=0x001000000008139f
- (int)_resetDatabaseSchema;	// IMP=0x001000000008112c
- (int)_createFreshDatabaseSchema;	// IMP=0x0010000000080d6e
- (int)_currentSchemaVersion;	// IMP=0x0010000000080d63
- (void)database:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x0010000000080cb1
- (void)saveCloudExtensionDevices:(id)arg1 extensionStates:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000080843
- (void)deleteRecordsWithPrimaryKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000080373
- (void)loadCloudExtensionDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080068
- (void)loadCloudExtensionDeviceWithUUIDString:(id)arg1 includeCloudExtensionStates:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007fe3d
- (id)initWithDatabaseURL:(id)arg1 cloudExtensionsRecordZoneID:(id)arg2;	// IMP=0x001000000007fd97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

