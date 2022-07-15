//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (BRCPathAdditions)
+ (id)br_currentHomeDir;	// IMP=0x0080000000021002
+ (id)_br_containerPathForDataSeparatedPersona;	// IMP=0x0080000000020d7b
+ (id)br_corruptedDBInfoPath;	// IMP=0x0080000000020d1d
+ (id)br_personaGroupDir;	// IMP=0x0080000000020a71
+ (id)br_currentSupportDir;	// IMP=0x00800000000207b5
+ (id)br_currentPersonaIDWithIsDataSeparated:(_Bool *)arg1;	// IMP=0x0080000000020719
+ (id)br_pathForDirectory:(unsigned long long)arg1;	// IMP=0x00800000000204c5
+ (id)br_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;	// IMP=0x008000000001f941
+ (id)br_emptyFilenameAlternativeName;	// IMP=0x008000000001f895
+ (id)br_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;	// IMP=0x008000000001f74c
+ (id)br_pathWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x008000000001f6d2
- (id)br_pathRelativeToDirectory:(unsigned long long)arg1;	// IMP=0x00100000000206b3
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1;	// IMP=0x00100000000204b1
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;	// IMP=0x001000000002029b
- (_Bool)br_isSideFaultName;	// IMP=0x001000000002028b
- (_Bool)br_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;	// IMP=0x001000000002026e
- (long long)br_compareToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;	// IMP=0x0010000000020258
- (id)br_representableDirectoryName;	// IMP=0x001000000002023d
- (id)br_sideFaultName;	// IMP=0x001000000002021f
- (id)_br_nameWithAddedExtension:(id)arg1 makeDotFile:(_Bool)arg2;	// IMP=0x001000000002008c
- (id)br_sideFaultPath;	// IMP=0x001000000001ffe5
- (id)br_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;	// IMP=0x001000000001ff57
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;	// IMP=0x001000000001fdd5
- (_Bool)br_nameIsRepresentableOnHFS;	// IMP=0x001000000001f91d
- (id)br_realpath;	// IMP=0x001000000001f3fa
- (id)br_realpathKeepingLastSymlink;	// IMP=0x001000000001f1ff
- (const char *)br_fileSystemRepresentation;	// IMP=0x001000000001f1b8
- (_Bool)br_isAbsolutePath;	// IMP=0x001000000001f179
- (id)br_pathRelativeToPath:(id)arg1;	// IMP=0x001000000001f037
- (id)removingROSPPrefix;	// IMP=0x001000000001efce
- (id)br_pathRelativeToPackageRoot;	// IMP=0x001000000001ef5f
- (id)br_pathOfPackageRoot;	// IMP=0x001000000001ef2f
- (_Bool)br_isPackageRoot;	// IMP=0x001000000001eed7
- (_Bool)br_isInPackage;	// IMP=0x001000000001e77e
- (_Bool)br_isExcludedWithMaximumDepth:(unsigned int)arg1;	// IMP=0x001000000001e2ea
- (_Bool)br_isExcludedButPreservedAtLogOutWithFilenames:(id)arg1 extensions:(id)arg2;	// IMP=0x001000000001e00e
- (_Bool)br_isDocumentTooLargeForUpload:(_Bool)arg1 maxUploadDocumentSize:(long long)arg2;	// IMP=0x001000000001db23
- (id)br_displayFilenameWithExtensionHidden:(_Bool)arg1;	// IMP=0x001000000001daa6
- (id)brc_stringByDeletingPathExtension;	// IMP=0x001000000001d9fd
- (id)br_pathExtension;	// IMP=0x001000000001d93f
- (id)br_decodeIndexStringToIndexSet;	// IMP=0x0010000000045007
- (id)br_libnotifyPerUserNotificationName;	// IMP=0x0010000000044fcf
- (id)br_stringByBackslashEscapingCharactersInString:(id)arg1;	// IMP=0x0010000000044e1c
@end
