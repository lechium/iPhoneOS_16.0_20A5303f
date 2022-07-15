//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRIServer)
+ (id)triDiskUsageForDirectory:(id)arg1;	// IMP=0x008000000012d1c3
+ (unsigned long long)triCompressedSizeForFileAtPath:(id)arg1 shouldFault:(_Bool *)arg2;	// IMP=0x008000000012d07f
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x008000000012cd76
+ (id)triTargetPathForSymlink:(id)arg1;	// IMP=0x008000000012cbde
+ (_Bool)triForceRenameWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x008000000012cabc
+ (_Bool)triRenameOrFaultWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x008000000012c9e5
+ (id)triPostOrderDescendantDirectoryPathsAtPath:(id)arg1;	// IMP=0x008000000012c442
- (_Bool)triRemoveCachedANEBinariesForModelsFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012c9dd
- (_Bool)triRemoveNestedEmptyDirectoriesAtPath:(id)arg1;	// IMP=0x001000000012c832
- (_Bool)triForceRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012c374
- (_Bool)triRemoveDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000012c2d1
@end
