//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CalClassAdditions)
+ (id)mimeTypeForFile:(id)arg1;	// IMP=0x0060000000028d5c
- (id)CalTemporaryDirectoryAppropriateForURL:(id)arg1;	// IMP=0x0010000000029bd3
- (_Bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3;	// IMP=0x0010000000029a73
- (_Bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000299b6
- (_Bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3;	// IMP=0x00100000000299a1
- (_Bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000298eb
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(_Bool)arg2;	// IMP=0x00100000000298d6
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000029408
- (_Bool)makeCompletePath:(id)arg1 mode:(int)arg2;	// IMP=0x001000000002919a
- (id)makeUniqueDirectoryWithPath:(id)arg1;	// IMP=0x0010000000028e51
@end

