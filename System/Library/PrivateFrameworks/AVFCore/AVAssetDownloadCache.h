//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAssetCache.h"

@class AVAssetDownloadCacheInternal;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCache : AVAssetCache
{
    AVAssetDownloadCacheInternal *_internal;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000001231dc
- (_Bool)isPlayableOffline;	// IMP=0x000000000012315f
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000122e85
- (id)URL;	// IMP=0x0000000000122e10
- (id)_asset;	// IMP=0x0000000000122df7
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000000122d54

@end
