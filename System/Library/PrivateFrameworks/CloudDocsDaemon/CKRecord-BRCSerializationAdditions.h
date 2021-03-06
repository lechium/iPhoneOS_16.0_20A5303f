//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00100000000f7387
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00100000000f7292
+ (id)desiredKeysWithMask:(unsigned short)arg1;	// IMP=0x0010000000101464
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001010aa
+ (id)rootDirectoryRecordForZoneID:(id)arg1;	// IMP=0x0010000000100ef7
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;	// IMP=0x00100000001019ed
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;	// IMP=0x0010000000102773
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(_Bool)arg3;	// IMP=0x00100000000ff4d4
- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;	// IMP=0x00100000000ff3a2
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;	// IMP=0x00100000000ff0fb
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;	// IMP=0x00100000000fe900
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;	// IMP=0x00100000000fdb64
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;	// IMP=0x00100000000fd8ae
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;	// IMP=0x00100000000fd899
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000fd881
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000fd7df
- (void)serializeSystemFields:(id)arg1;	// IMP=0x00100000000fd697
- (_Bool)locateSideCarServerZone:(id *)arg1 shareRecordName:(id *)arg2 withSession:(id)arg3;	// IMP=0x00100000000fd477
- (_Bool)_locateSideCarServerZone:(id *)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;	// IMP=0x00100000000fd1a2
- (_Bool)deserializeSideCarInfo:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000fce3f
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000fb657
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000fb4fe
- (_Bool)deserializeStatInfo:(id *)arg1 serverMetrics:(id *)arg2 itemID:(id)arg3 session:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000f91e3
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000f91d1
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000f8ef0
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000f8eac
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f7dcf
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000f76ec
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;	// IMP=0x00100000000f7493
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000f71fd
- (void)sanitizeShortTokenFields;	// IMP=0x00100000001019ac
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0010000000100e62
- (id)brc_lastEditorDeviceName;	// IMP=0x0010000000100c32
- (_Bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;	// IMP=0x0010000000100baf
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id *)arg2;	// IMP=0x001000000010070f
- (_Bool)brc_safeToGetURL;	// IMP=0x00100000001005d2
- (id)brc_updateDroppedReason;	// IMP=0x001000000010057b
- (id)brc_oplockMergeEtag;	// IMP=0x0010000000100524
- (_Bool)brc_isInterestingRecordForSave;	// IMP=0x0010000000100487
- (_Bool)brc_isInterestingRecordForSyncDown;	// IMP=0x0010000000100265
- (id)brc_containerMetadataIconPaths;	// IMP=0x001000000010209e
- (id)brc_containerMetadataIconNames;	// IMP=0x0010000000101e9f
@property(readonly, nonatomic) NSData *brc_containerMetadataPropertiesData;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;	// IMP=0x00100000001027a3
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;	// IMP=0x0010000000102c77
- (id)brc_sharedLinkDisplayName;	// IMP=0x0010000000102c65
- (id)brc_sharedRootDisplayName;	// IMP=0x001000000010299b
- (id)brc_sharedRootExtension;	// IMP=0x0010000000102846
- (_Bool)isFolderShare;	// IMP=0x00100000001027ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

