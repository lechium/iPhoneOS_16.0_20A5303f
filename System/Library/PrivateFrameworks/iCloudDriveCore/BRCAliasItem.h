//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;	// IMP=0x00600000000e7f75
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;	// IMP=0x00600000000e7e12
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000199937
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000199887
- (id)targetDocument;	// IMP=0x00000000001997e0
- (void)targetMovedToThisAppLibrary;	// IMP=0x000000000019969b
- (void)targetMovedToTrashOrDeleted;	// IMP=0x0000000000199556
- (void)_removeAliasAndMarkDead;	// IMP=0x0000000000199514
- (_Bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(_Bool)arg2;	// IMP=0x000000000019950c
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;	// IMP=0x0000000000199506
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;	// IMP=0x0000000000199465
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;	// IMP=0x00000000001993f7
- (void)markNeedsUploadOrSyncingUp;	// IMP=0x00000000001993e3
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x0000000000198ed7
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x0000000000198965
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019895d
- (void)learnTarget:(id)arg1;	// IMP=0x0000000000198782
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
@property(readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (_Bool)isBRAlias;	// IMP=0x0000000000198603
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;	// IMP=0x00000000000e8217

// Remaining properties
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end
