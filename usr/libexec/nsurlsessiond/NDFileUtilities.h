//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NDFileUtilities : NSObject
{
}

+ (_Bool)itemShouldBePurged:(id)arg1;	// IMP=0x004000000003a3f9
+ (void)markItemAsPurged:(id)arg1;	// IMP=0x001000000003a3ad
+ (id)fetchStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a327
+ (void)removeStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a2c5
+ (void)updateStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a22f
+ (void)setDaemonWorkState:(_Bool)arg1;	// IMP=0x001000000003a09f
+ (id)defaultDownloadDirectoryForBundleID:(id)arg1;	// IMP=0x001000000003a001
+ (id)defaultDownloadDirectoryContainer;	// IMP=0x0010000000039d9d
+ (void)createDirectoryAtURL:(id)arg1;	// IMP=0x0010000000039c1f
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0010000000039aa1
+ (_Bool)createDataVaultDirectoryAtPath:(id)arg1;	// IMP=0x00100000000395f2
+ (void)removeItemAtURL:(id)arg1;	// IMP=0x001000000003947a
+ (void)removeItemAtPath:(id)arg1;	// IMP=0x0010000000039302
+ (id)nsurlsessiondLaunchdPath;	// IMP=0x0010000000039290
+ (id)sessionPath:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000391c1
+ (id)bundleManagerPath:(id)arg1;	// IMP=0x00100000000390f8
+ (id)nsurlsessiondPath;	// IMP=0x001000000003904a

@end
