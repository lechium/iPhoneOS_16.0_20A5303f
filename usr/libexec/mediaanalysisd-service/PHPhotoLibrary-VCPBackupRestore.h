//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (VCPBackupRestore)
- (id)vcp_mediaAnalysisBackupFilepath;	// IMP=0x0010000000051d48
- (id)vcp_mediaAnalysisBackupDirectory;	// IMP=0x0010000000051ce8
- (_Bool)vcp_openAndWaitWithUpgrade:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000c3b52
- (int)_bumpFaceProcessingVersionIfNeededWithError:(id *)arg1;	// IMP=0x00000000000c3a41
- (int)vcp_bumpFaceProcessingToVersion:(int)arg1 withError:(id *)arg2;	// IMP=0x00100000000c3833
- (int)_cacheCurrentFaceProgress;	// IMP=0x00100000000c3711
- (int)_resetChangeTokenAndProcessingStatusForFaceProcessing;	// IMP=0x00100000000c34df
@end

