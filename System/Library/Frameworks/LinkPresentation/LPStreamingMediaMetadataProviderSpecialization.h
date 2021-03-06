//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization
{
    _Bool _cancelled;	// 8 = 0x8
    LPMediaAssetFetcher *_fetcher;	// 16 = 0x10
    AVAssetImageGenerator *_videoImageGenerator;	// 24 = 0x18
    LPLinkMetadata *_metadata;	// 32 = 0x20
}

+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;	// IMP=0x0060000000008cf4
+ (unsigned long long)specialization;	// IMP=0x0060000000008ce9
- (void).cxx_destruct;	// IMP=0x000000000000987e
- (void)done;	// IMP=0x0000000000009827
- (void)fail;	// IMP=0x00000000000097cc
- (void)cancel;	// IMP=0x0000000000009780
- (void)start;	// IMP=0x0000000000008d91

@end

