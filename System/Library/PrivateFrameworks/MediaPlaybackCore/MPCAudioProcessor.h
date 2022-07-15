//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine;
@protocol MPCAudioProcessing;

__attribute__((visibility("hidden")))
@interface MPCAudioProcessor : NSObject
{
    struct opaqueMTAudioProcessingTap *_audioProcessingTap;	// 8 = 0x8
    id <MPCAudioProcessing> _selfRef;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001998ec
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) id <MPCAudioProcessing> selfRef; // @synthesize selfRef=_selfRef;
- (void)_destroyAudioTap;	// IMP=0x0000000000199895
- (void)_createAudioTap;	// IMP=0x000000000019980b
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x00000000001997f7
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 trackID:(int)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;	// IMP=0x00000000001997f1
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x00000000001997eb
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;	// IMP=0x00000000001997e5
- (_Bool)shouldAttachAudioTapToItem:(id)arg1;	// IMP=0x00000000001997dd
- (void)configureQueueItem:(id)arg1;	// IMP=0x000000000019974e
- (void)dealloc;	// IMP=0x0000000000199710
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000019969c

@end
