//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUEditableMediaProvider.h"

@class PUBrowsingViewModel, PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUToggleCTMMediaProvider : PUEditableMediaProvider
{
    PUBrowsingViewModel *_viewModel;	// 8 = 0x8
    PUMediaProvider *_mediaProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038fce5
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)cancelImageRequest:(int)arg1;	// IMP=0x000000000038fc85
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038fbe0
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038fb3b
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038fb1e
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000038f76c
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038f537
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038f221
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038ef5b
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000038ebc0
- (id)_requestOptions;	// IMP=0x000000000038eb88
- (id)_ctmPairedVideoResourceForAsset:(id)arg1;	// IMP=0x000000000038eb6e
- (id)_ctmVideoResourceForAsset:(id)arg1;	// IMP=0x000000000038eb54
- (id)_ctmImageResourceForAsset:(id)arg1;	// IMP=0x000000000038eb3a
- (id)_resourceOfType:(long long)arg1 forAsset:(id)arg2;	// IMP=0x000000000038ea76
- (id)_imageWithSize:(struct CGSize)arg1 string:(id)arg2;	// IMP=0x000000000038e99a
- (_Bool)_shouldToggleCTMForAsset:(id)arg1;	// IMP=0x000000000038e8bc
- (id)initWithViewModel:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x000000000038e81a

@end
