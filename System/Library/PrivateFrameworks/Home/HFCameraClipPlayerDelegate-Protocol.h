//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class NSError;
@protocol HFCameraClipPlaying;

@protocol HFCameraClipPlayerDelegate <NSObject>

@optional
- (void)clipPlayerDidPlayToEndTime:(id <HFCameraClipPlaying>)arg1;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateMuted:(_Bool)arg2;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateError:(NSError *)arg2 isFatal:(_Bool)arg3;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateTimeControlStatus:(long long)arg2;
@end
