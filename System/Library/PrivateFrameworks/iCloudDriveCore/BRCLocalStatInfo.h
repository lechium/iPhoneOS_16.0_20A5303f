//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCStatInfo.h"

@class BRFieldStructureSignature, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocalStatInfo : BRCStatInfo
{
    unsigned long long _localChangeCount;	// 120 = 0x78
    NSString *_oldVersionIdentifier;	// 128 = 0x80
    NSNumber *_stagedFileID;	// 136 = 0x88
    unsigned int _stagedGenerationID;	// 144 = 0x90
    NSString *_bouncedLogicalName;	// 152 = 0x98
    unsigned char _itemScope;	// 160 = 0xa0
    NSNumber *_processingStamp;	// 168 = 0xa8
    NSNumber *_documentID;	// 176 = 0xb0
    NSString *_physicalName;	// 184 = 0xb8
    NSNumber *_tmpBouncedNo;	// 192 = 0xc0
}

+ (id)_finderTagsFromImportObject:(id)arg1;	// IMP=0x0060000000147352
+ (BOOL)modeFromImportObject:(id)arg1 isPackageFault:(_Bool)arg2;	// IMP=0x00600000001472bc
- (void).cxx_destruct;	// IMP=0x00000000000a1ea9
@property(readonly, nonatomic) NSString *oldVersionIdentifier; // @synthesize oldVersionIdentifier=_oldVersionIdentifier;
@property(readonly, nonatomic) unsigned long long localChangeCount; // @synthesize localChangeCount=_localChangeCount;
@property(retain, nonatomic) NSString *rawBouncedLogicalName; // @synthesize rawBouncedLogicalName=_bouncedLogicalName;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(readonly, nonatomic) NSNumber *processingStamp; // @synthesize processingStamp=_processingStamp;
@property(readonly, nonatomic) NSNumber *tmpBouncedNo; // @synthesize tmpBouncedNo=_tmpBouncedNo;
@property(readonly, nonatomic) NSString *physicalName; // @synthesize physicalName=_physicalName;
@property(readonly, nonatomic) unsigned int stagedGenerationID; // @synthesize stagedGenerationID=_stagedGenerationID;
@property(readonly, nonatomic) NSNumber *stagedFileID; // @synthesize stagedFileID=_stagedFileID;
@property(readonly, nonatomic) NSNumber *documentID; // @synthesize documentID=_documentID;
- (void)_updateStatAliasMeta:(id)arg1;	// IMP=0x00000000000a1c02
- (void)_updateStatMetaFromServer:(id)arg1;	// IMP=0x00000000000a18f0
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;	// IMP=0x00000000000a1863
- (void)_clearGenerationID;	// IMP=0x00000000000a178a
- (void)_clearFileID;	// IMP=0x00000000000a16b1
- (void)_markLiveFromStageAsType:(BOOL)arg1;	// IMP=0x00000000000a1316
- (void)_markLiveFromStageAsFault:(_Bool)arg1;	// IMP=0x00000000000a1266
- (void)_updateStatMeta:(id)arg1;	// IMP=0x00000000000a10d9
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;	// IMP=0x00000000000a1043
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 appLibrary:(id)arg2;	// IMP=0x00000000000a103d
- (void)_markFound;	// IMP=0x00000000000a0f80
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg1;	// IMP=0x00000000000a0f3e
- (void)_markDead;	// IMP=0x00000000000a0df4
- (void)updateAsAppLibraryRoot:(id)arg1;	// IMP=0x00000000000a0d1b
- (void)_markAlmostDead;	// IMP=0x00000000000a0be4
- (void)_markReserved;	// IMP=0x00000000000a0ab5
- (void)updateFilenameFromPath:(id)arg1;	// IMP=0x00000000000a07db
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;	// IMP=0x00000000000a03ca
- (void)_clearBouncedName;	// IMP=0x00000000000a03a9
- (void)_bouncePhysicalNameToRepresentableName;	// IMP=0x00000000000a02f6
- (void)_migrateTmpBouncedNameToLocalName;	// IMP=0x00000000000a0235
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)arg1;	// IMP=0x00000000000a015d
- (void)_moveItemAsideWithUUIDString;	// IMP=0x000000000009ffb8
- (void)_markClearedFromStage;	// IMP=0x000000000009ff81
- (void)_setCKInfo:(id)arg1;	// IMP=0x000000000009ff6a
- (void)_setItemScope:(unsigned char)arg1;	// IMP=0x000000000009ff5a
- (void)_setParentID:(id)arg1;	// IMP=0x000000000009ff43
- (void)setFilename:(id)arg1 forcePhysicalName:(id)arg2 forceBouncedLogicalName:(id)arg3 serverName:(id)arg4;	// IMP=0x000000000009fc33
- (void)setFilename:(id)arg1;	// IMP=0x000000000009fc19
@property(readonly, nonatomic) NSString *filename;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009fb17
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2 isDirectory:(_Bool)arg3;	// IMP=0x000000000009fa70
- (id)description;	// IMP=0x000000000009fa5a
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;	// IMP=0x000000000009f6fe
@property(readonly, nonatomic) NSNumber *lostStamp;
@property(readonly, nonatomic) NSNumber *stagedFileIDForDB;
@property(readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
- (id)logicalName;	// IMP=0x000000000009f50c
- (void)bumpLocalChangeCount;	// IMP=0x0000000000147996
- (void)clearCKInfo;	// IMP=0x0000000000147949
- (void)updateFromImportObject:(id)arg1 onlyContentDependentProperties:(_Bool)arg2;	// IMP=0x0000000000147636
- (id)initWithImportObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000146f28
- (void)updateWithFileSystemFlags:(unsigned long long)arg1 ignoreExecutable:(_Bool)arg2;	// IMP=0x0000000000146ee6
@property(readonly, nonatomic) BRFieldStructureSignature *versionSignature;
- (id)initWithLocalStatInfo:(id)arg1;	// IMP=0x0000000000146dc5
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;	// IMP=0x0000000000146c07
- (void)_markChildPropagationComplete;	// IMP=0x000000000016c0e9
- (void)_markNeedsPropertiesPropagatedToChildren;	// IMP=0x000000000016c081

@end

