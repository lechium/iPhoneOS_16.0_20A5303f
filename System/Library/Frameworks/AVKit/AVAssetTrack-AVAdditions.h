//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAssetTrack.h>

@interface AVAssetTrack (AVAdditions)
- (_Bool)_avkit_frameRateIsValid:(float)arg1;	// IMP=0x009000000008f616
- (CDStruct_1b6d18a9)_avkit_findTimeForFrameUsingFrameRateSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x009000000008f4bc
- (CDStruct_1b6d18a9)_avkit_timeForFrameUsingSampleCursorSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x009000000008f49e
- (CDStruct_1b6d18a9)avkit_timeForFrameSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x009000000008f28f
@end
