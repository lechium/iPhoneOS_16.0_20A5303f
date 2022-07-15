//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioLimitExceeded, FTAudioPacket, FTCheckForSpeechRequest, FTCheckForSpeechResponse, FTClientSetupInfo, FTEndPointCandidate, FTEndPointLikelihood, FTFinalSpeechRecognitionResponse, FTFinishAudio, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTResetServerEndpointer, FTServerEndpointFeatures, FTSetAlternateRecognitionSausage, FTSetEndpointerState, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTStartSpeechRequest, FTUpdateAudioInfo, FTUpdatedAcousticProfile, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableAsrRecognitionMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x0060000000095840
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x006000000009546c
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x0060000000095432
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property(copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property(copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property(copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property(copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property(copy, nonatomic) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property(copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property(copy, nonatomic) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property(copy, nonatomic) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property(copy, nonatomic) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property(copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property(copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property(copy, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property(copy, nonatomic) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property(copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property(copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property(copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property(copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property(copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property(copy, nonatomic) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093b1a
- (id)init;	// IMP=0x0000000000093a8c

@end
