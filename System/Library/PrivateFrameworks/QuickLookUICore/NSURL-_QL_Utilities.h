//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (_QL_Utilities)
+ (id)_QLCreateTemporaryDirectoryForOriginalFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000012746
+ (void)_QLTemporaryFileURLWithContentType:(id)arg1 forOriginalFileAtURL:(id)arg2 temporaryFileURL:(id *)arg3 temporaryDirectoryURL:(id *)arg4 fallbackUUID:(id)arg5;	// IMP=0x00800000000123f2
+ (id)_QLTemporaryFileURLWithContentType:(id)arg1 uuid:(id)arg2;	// IMP=0x0080000000012365
+ (id)_QLTemporaryFileURLWithContentType:(id)arg1 filename:(id)arg2;	// IMP=0x0080000000012249
+ (id)_QLCreateTemporaryDirectory:(id *)arg1;	// IMP=0x008000000001203c
- (id)_QLUrlFileSize;	// IMP=0x0010000000011b18
- (id)_QLSingleFileSizeForURL:(id)arg1;	// IMP=0x00100000000119f5
- (_Bool)_QLIsHiddenFile;	// IMP=0x00100000000118c9
- (_Bool)_QLDownloadingStatusIsNotCurrent;	// IMP=0x0010000000011786
- (_Bool)_QLIsPackageURL;	// IMP=0x0010000000011661
@end
