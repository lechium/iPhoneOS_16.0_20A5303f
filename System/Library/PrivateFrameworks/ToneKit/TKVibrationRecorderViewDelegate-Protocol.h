//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/NSObject-Protocol.h>

@class TKVibrationRecorderView;

@protocol TKVibrationRecorderViewDelegate <NSObject>
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (_Bool)vibrationRecorderViewDidEnterRecordingMode:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
@end

