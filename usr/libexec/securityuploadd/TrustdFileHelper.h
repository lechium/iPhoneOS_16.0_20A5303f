//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TrustdFileHelper : NSObject
{
}

- (void)fixFiles:(CDUnknownBlockType)arg1;	// IMP=0x004000000000e798
- (void)deleteOldFiles;	// IMP=0x001000000000e6d9
- (void)deleteSupplementalsAssetsDir;	// IMP=0x001000000000e612
- (void)deleteSystemDbFiles:(struct __CFString *)arg1;	// IMP=0x001000000000e50a
- (void)allowTrustdToWriteAnalyticsFiles;	// IMP=0x001000000000e4e3
- (_Bool)allowTrustdToReadFilesForMigration:(id *)arg1;	// IMP=0x001000000000e43a
- (_Bool)changePermissionsOfKeychainDirectoryFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e30b
- (_Bool)fixTrustSettingsPermissions:(id *)arg1;	// IMP=0x001000000000dd57
- (_Bool)fixValidPermissions:(id *)arg1;	// IMP=0x001000000000dbda
- (_Bool)changeOwnerOfValidFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000d9f5

@end
