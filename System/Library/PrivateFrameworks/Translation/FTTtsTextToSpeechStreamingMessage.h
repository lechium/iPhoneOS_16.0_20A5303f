//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTQssAckResponse, FTStartTextToSpeechStreamingRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTTtsTextToSpeechStreamingMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TtsTextToSpeechStreamingMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x00100000000800ca
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000080090
- (void).cxx_destruct;	// IMP=0x00000000000805fb
- (id)flatbuffData;	// IMP=0x0000000000080483
- (Offset_6cadd334)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000801c8
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *session_messageAsFTFinalTextToSpeechStreamingResponse;
@property(readonly, nonatomic) FTPartialTextToSpeechStreamingResponse *session_messageAsFTPartialTextToSpeechStreamingResponse;
@property(readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *session_messageAsFTBeginTextToSpeechStreamingResponse;
@property(readonly, nonatomic) FTQssAckResponse *session_messageAsFTQssAckResponse;
@property(readonly, nonatomic) FTStartTextToSpeechStreamingRequest *session_messageAsFTStartTextToSpeechStreamingRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007fb3d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechStreamingMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000007f96f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechStreamingMessage *)arg2;	// IMP=0x000000000007f959
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000007f93e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000007f926

@end
