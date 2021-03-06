//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00100000000e9b0b
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00100000000e9a16
+ (id)desiredKeysWithMask:(unsigned short)arg1;	// IMP=0x00100000000f3be8
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000f382e
+ (id)rootDirectoryRecordForZoneID:(id)arg1;	// IMP=0x00100000000f367b
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;	// IMP=0x00100000000f4171
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;	// IMP=0x00100000000f4ef7
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(_Bool)arg3;	// IMP=0x00100000000f1c58
- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;	// IMP=0x00100000000f1b26
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;	// IMP=0x00100000000f187f
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;	// IMP=0x00100000000f1084
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;	// IMP=0x00100000000f02e8
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;	// IMP=0x00100000000f0032
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;	// IMP=0x00100000000f001d
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000f0005
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000eff63
- (void)serializeSystemFields:(id)arg1;	// IMP=0x00100000000efe1b
- (_Bool)locateSideCarServerZone:(id *)arg1 shareRecordName:(id *)arg2 withSession:(id)arg3;	// IMP=0x00100000000efbfb
- (_Bool)_locateSideCarServerZone:(id *)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;	// IMP=0x00100000000ef926
- (_Bool)deserializeSideCarInfo:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000ef5c3
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000edddb
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000edc82
- (_Bool)deserializeStatInfo:(id *)arg1 serverMetrics:(id *)arg2 itemID:(id)arg3 session:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000eb967
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000eb955
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000eb674
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000eb630
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ea553
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000e9e70
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;	// IMP=0x00100000000e9c17
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000e9981
- (void)sanitizeShortTokenFields;	// IMP=0x00100000000f4130
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000f35e6
- (id)brc_lastEditorDeviceName;	// IMP=0x00100000000f33b6
- (_Bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;	// IMP=0x00100000000f3333
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id *)arg2;	// IMP=0x00100000000f2e93
- (_Bool)brc_safeToGetURL;	// IMP=0x00100000000f2d56
- (id)brc_updateDroppedReason;	// IMP=0x00100000000f2cff
- (id)brc_oplockMergeEtag;	// IMP=0x00100000000f2ca8
- (_Bool)brc_isInterestingRecordForSave;	// IMP=0x00100000000f2c0b
- (_Bool)brc_isInterestingRecordForSyncDown;	// IMP=0x00100000000f29e9
- (id)brc_containerMetadataIconPaths;	// IMP=0x00100000000f4822
- (id)brc_containerMetadataIconNames;	// IMP=0x00100000000f4623
@property(readonly, nonatomic) NSData *brc_containerMetadataPropertiesData;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;	// IMP=0x00100000000f4f27
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;	// IMP=0x00100000000f53fb
- (id)brc_sharedLinkDisplayName;	// IMP=0x00100000000f53e9
- (id)brc_sharedRootDisplayName;	// IMP=0x00100000000f511f
- (id)brc_sharedRootExtension;	// IMP=0x00100000000f4fca
- (_Bool)isFolderShare;	// IMP=0x00100000000f4f72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

