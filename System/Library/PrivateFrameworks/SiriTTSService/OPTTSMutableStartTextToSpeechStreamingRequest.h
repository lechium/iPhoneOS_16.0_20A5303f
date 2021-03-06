//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, OPTTSTTSRequestFeatureFlags, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestExperiment, OPTTSTextToSpeechRequestMeta;

__attribute__((visibility("hidden")))
@interface OPTTSMutableStartTextToSpeechStreamingRequest
{
}

@property(copy, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property(copy, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property(copy, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property(copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property(nonatomic) long long preferred_voice_type;
@property(copy, nonatomic) NSArray *context_info;
@property(copy, nonatomic) NSString *voice_name;
@property(nonatomic) _Bool enable_word_timing_info;
@property(nonatomic) long long audio_type;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *stream_id;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009882
- (id)init;	// IMP=0x00000000000097f4

@end

