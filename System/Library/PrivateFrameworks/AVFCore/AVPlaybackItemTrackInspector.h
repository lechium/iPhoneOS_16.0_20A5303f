//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 32 = 0x20
    int _trackID;	// 40 = 0x28
    unsigned int _mediaType;	// 44 = 0x2c
    AVWeakReference *_weakReferenceToAsset;	// 48 = 0x30
}

- (unsigned long long)hash;	// IMP=0x0000000000119366
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001192c8
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000001192b0
- (struct CGAffineTransform)preferredTransform;	// IMP=0x000000000011926f
- (struct CGSize)dimensions;	// IMP=0x0000000000119253
- (struct CGSize)naturalSize;	// IMP=0x0000000000119237
- (float)peakDataRate;	// IMP=0x000000000011922e
- (float)estimatedDataRate;	// IMP=0x0000000000119209
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000001191ad
- (_Bool)isEnabled;	// IMP=0x000000000011918b
- (id)formatDescriptions;	// IMP=0x000000000011916f
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000001190f8
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x00000000001190e7
- (id)mediaType;	// IMP=0x0000000000119095
- (unsigned int)_figMediaType;	// IMP=0x0000000000119085
- (int)trackID;	// IMP=0x0000000000119075
- (id)asset;	// IMP=0x0000000000119058
- (void)dealloc;	// IMP=0x0000000000119001
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x0000000000118e3c

@end

