//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXUpdateAssetTask
{
}

- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4 hasRemainingDownloads:(_Bool)arg5;	// IMP=0x00400000000108ef
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;	// IMP=0x001000000001080b
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000010742
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000010679
- (void)_housekeeping_op3_downloadAssets:(id)arg1;	// IMP=0x001000000000fe67
- (void)_housekeeping_op2_purgeAssets:(id)arg1;	// IMP=0x001000000000f806
- (void)_housekeeping_op1_refreshAssets;	// IMP=0x001000000000f4d6
- (id)_restorationState;	// IMP=0x001000000000f4c4
- (id)initWithPolicy:(id)arg1 context:(id)arg2;	// IMP=0x001000000000f2c3

@end

