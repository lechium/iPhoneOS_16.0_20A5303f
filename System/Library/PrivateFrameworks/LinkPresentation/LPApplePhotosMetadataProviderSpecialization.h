//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPApplePhotosMomentMetadata, NSString, PHFetchResult, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface LPApplePhotosMetadataProviderSpecialization
{
    _Bool _cancelled;	// 8 = 0x8
    int _pendingImageRequest;	// 12 = 0xc
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    PHFetchResult *_keyAssetFetch;	// 24 = 0x18
    PHFetchResult *_anyAssetFetch;	// 32 = 0x20
    LPApplePhotosMomentMetadata *_metadata;	// 40 = 0x28
}

+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x0010000000063a9b
+ (unsigned long long)specialization;	// IMP=0x0010000000063a90
- (void).cxx_destruct;	// IMP=0x0000000000064f2c
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x0000000000064d87
- (void)didFetchAsset:(id)arg1;	// IMP=0x00000000000649ba
- (void)completeWithMetadata:(id)arg1;	// IMP=0x00000000000647ef
- (void)fail;	// IMP=0x000000000006471e
- (void)cancel;	// IMP=0x00000000000645e0
- (void)start;	// IMP=0x0000000000063beb
- (void)dealloc;	// IMP=0x0000000000063b5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
