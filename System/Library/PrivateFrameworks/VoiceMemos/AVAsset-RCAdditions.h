//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetTrack, NSDictionary, NSURL;

@interface AVAsset (RCAdditions)
+ (_Bool)rc_updateMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000057b23
+ (_Bool)rc_updateMetadataInFile:(id)arg1 withRecordingMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000057a97
- (id)rc_playbackFormat;	// IMP=0x0010000000057c32
- (id)rc_audioTracks;	// IMP=0x0010000000057c16
@property(readonly, nonatomic) double rc_durationInSeconds;
@property(readonly, nonatomic) NSDictionary *rc_recordingMetadata;
@property(readonly, nonatomic) AVAssetTrack *rc_audioTrack;
@property(retain, nonatomic, setter=rc_setComposedAVURL:) NSURL *rc_composedAVURL;
@end

