//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAudioChunk, NSError;
@protocol CSAttSiriNode;

@protocol CSAttSiriAudioDataReceiver <NSObject>
- (void)attSiriAudioSrcNodeDidStop:(id <CSAttSiriNode>)arg1;
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id <CSAttSiriNode>)arg1 audioChunk:(CSAudioChunk *)arg2;
- (void)attSiriAudioSrcNodeDidStartRecording:(id <CSAttSiriNode>)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
@end
