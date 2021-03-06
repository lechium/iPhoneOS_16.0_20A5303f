//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAliasItem, BRCDocumentItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem
{
    long long _mtime;	// 168 = 0xa8
}

@property(nonatomic) long long mtime; // @synthesize mtime=_mtime;
- (id)collaborationIdentifierIfComputable;	// IMP=0x0000000000280e15
- (id)asShareableItem;	// IMP=0x0000000000280daa
- (_Bool)isShareableItem;	// IMP=0x0000000000280b60
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000280881
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000280700
- (void)prepareForSyncUpInZone:(id)arg1;	// IMP=0x0000000000280666
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2 offline:(_Bool)arg3;	// IMP=0x000000000028032e
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x000000000027f580
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x000000000027ef20
- (_Bool)_recomputeChildItemCount;	// IMP=0x000000000027ee87
- (_Bool)_updateRecursiveProperties;	// IMP=0x000000000027ea21
- (_Bool)_insertRecursiveProperties;	// IMP=0x000000000027e880
- (_Bool)_repopulateRecursivePropertiesIfNecessary;	// IMP=0x000000000027e583
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;	// IMP=0x000000000027e46e
- (id)clientZonesChildrenNeedingSyncUpAreIn;	// IMP=0x000000000027e142
- (id)serverQuotaUsage;	// IMP=0x000000000027e0c8
- (id)childItemCount;	// IMP=0x000000000027e011
- (id)_serverChildItemCount;	// IMP=0x000000000027de25
- (_Bool)hasLiveChildren;	// IMP=0x000000000027dd6b
- (_Bool)hasDeadChildren;	// IMP=0x000000000027dcc3
- (void)transformIntoFSRoot;	// IMP=0x000000000027dca1
- (_Bool)containsPendingDeleteDocuments;	// IMP=0x000000000027dbf9
- (_Bool)containsPendingUploadOrSyncUp;	// IMP=0x000000000027db95
- (_Bool)containsPendingDownload;	// IMP=0x000000000027db31
- (_Bool)containsFault;	// IMP=0x000000000027dacd
- (_Bool)containsDirFault;	// IMP=0x000000000027da54
- (_Bool)containsOverQuotaItems;	// IMP=0x000000000027d9f0
- (_Bool)isSharedToMeOrContainsSharedToMeItem;	// IMP=0x000000000027d8c1
- (_Bool)isSharedByMeOrContainsSharedByMeItem;	// IMP=0x000000000027d792
- (_Bool)possiblyContainsSharedItem;	// IMP=0x000000000027d663
- (void)_learnItemID:(id)arg1 serverItem:(id)arg2;	// IMP=0x000000000027d4fb
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(_Bool)arg2;	// IMP=0x000000000027d477
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x000000000027d3fa
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;	// IMP=0x000000000027d364
- (_Bool)hasShareIDAndIsOwnedByMe;	// IMP=0x000000000027d32d
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
- (unsigned long long)diffAgainstServerItem:(id)arg1;	// IMP=0x000000000027d0e7
- (_Bool)isDirectoryWithPackageName;	// IMP=0x000000000027d030
- (_Bool)isDirectoryFault;	// IMP=0x000000000027cf9f
- (_Bool)isDirectory;	// IMP=0x000000000027cf2d
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;	// IMP=0x000000000000cd22
- (void)markRemovedFromFilesystemForServerEdit:(_Bool)arg1;	// IMP=0x000000000000c993
- (void)_markLostDirectoryAsAlmostDead;	// IMP=0x000000000000c901
- (_Bool)_markChildrenLostForDeadParent;	// IMP=0x000000000000c894
- (_Bool)markChildrenLost;	// IMP=0x000000000000c7f5
- (_Bool)hasPendingLostChildren;	// IMP=0x000000000000c74d
- (_Bool)hasLostChildren;	// IMP=0x000000000000c6a5
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x000000000000c625
- (_Bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x000000000000c599
- (_Bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;	// IMP=0x000000000000c209
- (id)folderRootStructureRecord;	// IMP=0x00000000000f5c16

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property(readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;

@end

