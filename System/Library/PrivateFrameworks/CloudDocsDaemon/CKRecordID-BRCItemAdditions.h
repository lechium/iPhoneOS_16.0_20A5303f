//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00100000000f5e62
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00100000000f5d98
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;	// IMP=0x00100000002dff75
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;	// IMP=0x00100000000f6e63
- (BOOL)brc_itemType;	// IMP=0x00100000000f6d31
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000000f6d1f
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f6aab
- (id)brc_itemIDWithSession:(id)arg1;	// IMP=0x00100000000f6986
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000000f61e2
- (_Bool)brc_isZoneRootRecordID;	// IMP=0x00100000000f6139
- (id)brc_appLibraryDocumentsZoneName;	// IMP=0x00100000000f6083
- (_Bool)brc_isAppLibraryDocumentsRecordID;	// IMP=0x00100000000f6038
- (id)brc_appLibraryRootZoneName;	// IMP=0x00100000000f5f82
- (_Bool)brc_isAppLibraryRootRecordID;	// IMP=0x00100000000f5f37
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000f5d2b
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;	// IMP=0x00100000002e0335
- (id)brc_shareItemID;	// IMP=0x00100000002dff1e
- (id)brc_shareZoneName;	// IMP=0x00100000002dfece
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;	// IMP=0x00100000002dfe4c
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;	// IMP=0x00100000002dfd96
- (id)initShareIDWithShareableItem:(id)arg1;	// IMP=0x00100000002dfcde
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000002dfbf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

