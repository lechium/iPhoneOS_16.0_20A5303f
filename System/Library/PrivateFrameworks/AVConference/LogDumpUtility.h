//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject
{
}

+ (void)removeOldFilesInDefaultLogDumpPath;	// IMP=0x00800000003a6f73
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;	// IMP=0x00800000003a645c
+ (id)createFileListSortedByTimestamp:(id)arg1;	// IMP=0x00800000003a600a
+ (id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;	// IMP=0x00800000003a5eb0
+ (_Bool)createDirectory:(id)arg1;	// IMP=0x00800000003a5e93
+ (id)getDefaultLogDumpPath;	// IMP=0x00800000003a5e5a
+ (id)getCachesDirectoryPath;	// IMP=0x00800000003a5e39

@end

