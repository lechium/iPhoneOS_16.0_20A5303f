//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSString;

__attribute__((visibility("hidden")))
@interface RECaptureAudioUnit : AUAudioUnit
{
    AVAudioPCMBuffer *_inputBuffer;	// 8 = 0x8
    AUAudioUnitBus *_inputBus;	// 16 = 0x10
    AUAudioUnitBusArray *_inputBusArray;	// 24 = 0x18
    AUAudioUnitBus *_outputBus;	// 32 = 0x20
    AUAudioUnitBusArray *_outputBusArray;	// 40 = 0x28
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;	// 48 = 0x30
    NSString *_captureName;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000035044c
- (void).cxx_destruct;	// IMP=0x00000000003503c8
@property(copy, nonatomic) NSString *captureName; // @synthesize captureName=_captureName;
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x00000000003501fd
- (id)channelCapabilities;	// IMP=0x00000000003501f0
- (id)outputBusses;	// IMP=0x00000000003501db
- (id)inputBusses;	// IMP=0x00000000003501c6
- (void)deallocateRenderResources;	// IMP=0x0000000000350127
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x000000000034ff9b
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000034fd43

@end

