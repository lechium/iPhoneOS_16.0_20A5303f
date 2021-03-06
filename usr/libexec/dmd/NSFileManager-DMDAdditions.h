//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (DMDAdditions)
+ (void)dmd_setUserDirSuffix:(char *)arg1;	// IMP=0x0020000000089477
+ (void)dmd_createUserDMDDirectoryDataVault;	// IMP=0x0010000000089251
+ (id)dmd_userEffectivePoliciesDatabaseURL;	// IMP=0x00100000000891c3
+ (id)dmd_userFontDatabaseDirectoryURL;	// IMP=0x0010000000089167
+ (id)dmd_userImageDatabaseDirectoryURL;	// IMP=0x001000000008910b
+ (id)dmd_userConfigurationDatabaseURL;	// IMP=0x00100000000890b2
+ (id)dmd_userConfigurationEngineDirectoryURL;	// IMP=0x0010000000089056
+ (id)dmd_userDMDDirectoryURL;	// IMP=0x0010000000088ffa
+ (id)dmd_userDarwinUserTempDirectoryURL;	// IMP=0x0010000000088d77
+ (id);	// IMP=0x0010000000088ca8
+ (id)dmd_userHomeURL;	// IMP=0x00100000000889e4
+ (id)dmd_systemConfigurationDatabaseURL;	// IMP=0x001000000008898b
+ (id)dmd_systemConfigurationEngineDirectoryURL;	// IMP=0x001000000008892f
+ (id)dmd_systemDMDDirectoryURL;	// IMP=0x00100000000888d3
+ (id)dmd_systemLibraryURL;	// IMP=0x00100000000887ff
+ (id)dmd_legacyUserConfigurationEngineDatabaseURL;	// IMP=0x0010000000089570
@end

