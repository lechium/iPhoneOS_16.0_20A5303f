//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject
{
    AVAssetTrack *_track;	// 8 = 0x8
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;	// IMP=0x00600000001936a8
- (void).cxx_destruct;	// IMP=0x0000000000193def
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;	// IMP=0x0000000000193dae
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x0000000000193d6d
- (long long)status;	// IMP=0x0000000000193d2c
- (_Bool)validateDecodedFrame:(struct __CVBuffer *)arg1 withSettings:(id)arg2;	// IMP=0x0000000000193b64
- (id)settings;	// IMP=0x000000000019397b
- (id)initWithTrack:(id)arg1;	// IMP=0x00000000001937b5
- (id)init;	// IMP=0x00000000001937a7

@end

