//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class CSVTUIAudioRecorder, NSData, NSError;

@protocol CSVTUIAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;

@optional
- (void)audioRecorderDisconnected:(CSVTUIAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSVTUIAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecord:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDidStartRecord:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(NSError *)arg4;
@end

