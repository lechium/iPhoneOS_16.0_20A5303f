//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetsDataSourceManager.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager
{
    NSDictionary *__replacementAssetsByUUID;	// 8 = 0x8
    PUAssetsDataSourceManager *__originalDataSourceManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c715e
@property(retain, nonatomic, setter=_setOriginalDataSourceManager:) PUAssetsDataSourceManager *_originalDataSourceManager; // @synthesize _originalDataSourceManager=__originalDataSourceManager;
@property(copy, nonatomic, setter=_setReplacementAssetsByUUID:) NSDictionary *_replacementAssetsByUUID; // @synthesize _replacementAssetsByUUID=__replacementAssetsByUUID;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;	// IMP=0x00000000000c7031
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;	// IMP=0x00000000000c701f
- (void)_updateDataSource;	// IMP=0x00000000000c6f13
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6e3b
- (void)detachFromOriginalDataSourceManager;	// IMP=0x00000000000c6ddf
- (id)initWithOriginalDataSourceManager:(id)arg1;	// IMP=0x00000000000c6d0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

