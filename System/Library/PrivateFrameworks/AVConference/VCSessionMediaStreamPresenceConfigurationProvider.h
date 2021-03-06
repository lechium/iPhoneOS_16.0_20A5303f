//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject
{
    NSDictionary *_configuration;	// 8 = 0x8
    NSSet *_streamInputConfigurations;	// 16 = 0x10
    NSSet *_streamGroupConfigurations;	// 24 = 0x18
}

+ (unsigned int)readUint32WithPList:(id)arg1 key:(id)arg2 defaultValue:(unsigned int)arg3;	// IMP=0x0060000000097a40
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)arg1 streamIndex:(int)arg2;	// IMP=0x006000000009790c
+ (id)publicSessionConfigurationForType:(unsigned int)arg1;	// IMP=0x006000000009730e
+ (id)loadSessionConfigurationWithResourceName:(id)arg1;	// IMP=0x00600000000970d6
+ (id)replaceTag:(id)arg1;	// IMP=0x006000000009700c
+ (id)ftxtGroupDisabled;	// IMP=0x0060000000096fca
+ (id)moCapGroupDisabled;	// IMP=0x0060000000096f7a
+ (id)dataGroupDisabled;	// IMP=0x0060000000096f2c
+ (id)screenStreamBaseTierFramerate;	// IMP=0x0060000000096f1f
+ (id)sessionConfigurationForType:(unsigned int)arg1;	// IMP=0x0060000000096bf6
+ (id)resourceNameForConfigurationType:(unsigned int)arg1;	// IMP=0x0060000000096bd2
@property(readonly, nonatomic) NSSet *streamGroupConfigurations; // @synthesize streamGroupConfigurations=_streamGroupConfigurations;
@property(readonly, nonatomic) NSSet *streamInputConfigurations; // @synthesize streamInputConfigurations=_streamInputConfigurations;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2;	// IMP=0x00000000000a0a37
- (id)newStreamGroupConfigurationWithPList:(id)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x00000000000a043b
- (_Bool)setupAudioStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 supportedAudioRules:(id)arg3 streamIDGenerator:(id)arg4;	// IMP=0x00000000000a00bb
- (id)newAudioStreamGroupStreamConfigWithPList:(id)arg1 supportedAudioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5 groupID:(unsigned int)arg6;	// IMP=0x000000000009ee49
- (_Bool)setupAudioRulesWithPList:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009dae5
- (_Bool)setupAudioRedWithPlist:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009d319
- (_Bool)setupRedFactorsWithPList:(id)arg1 audioStreamConfig:(id)arg2;	// IMP=0x000000000009d077
- (id)newAudioMultiwayConfigWithPList:(id)arg1 audioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5;	// IMP=0x000000000009c9c0
- (_Bool)addPayload:(int)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009c865
- (_Bool)setupVideoStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x000000000009c4c2
- (unsigned short)setParentStreamID:(unsigned short)arg1 videoConfig:(id)arg2;	// IMP=0x000000000009c46f
- (struct CGSize)computeEncoderResolution:(unsigned long long)arg1;	// IMP=0x000000000009c1ee
- (id)newVideoStreamGroupStreamConfigWithPList:(id)arg1 streamIDGenerator:(id)arg2 ssrc:(unsigned int)arg3 groupID:(unsigned int)arg4 shouldSkip:(_Bool *)arg5;	// IMP=0x000000000009a2c4
- (long long)getVideoCodecFromStreamCodecPList:(id)arg1;	// IMP=0x000000000009a09a
- (id)getVideoCodecConfigFromStreamConfigPList:(id)arg1;	// IMP=0x0000000000099d6e
- (_Bool)checkEncoderSupportForCodecType:(long long)arg1;	// IMP=0x0000000000099b70
- (_Bool)checkEncoderSupportForConfig:(id)arg1;	// IMP=0x000000000009973d
- (void)updateStreamConfig:(id)arg1 forPayload:(int)arg2 networkPayload:(unsigned int)arg3 groupID:(unsigned int)arg4;	// IMP=0x0000000000099486
- (id)newVideoMultiwayConfigWithPList:(id)arg1 codecType:(long long)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4;	// IMP=0x0000000000098781
- (id)newDataStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x00000000000984fb
- (id)newVideoStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x000000000009805f
- (id)newStreamInputConfigurations;	// IMP=0x0000000000097aef
- (void)dealloc;	// IMP=0x0000000000096eab
- (id)initWithConfigurationType:(unsigned int)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x0000000000096cdf

@end

