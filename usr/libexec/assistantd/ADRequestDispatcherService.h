//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol AFRequestDispatcher;

@interface ADRequestDispatcherService
{
    id <AFRequestDispatcher> _requestDispatcher;	// 8 = 0x8
    NSString *_defaultDictationAssistantId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001b2e57
- (void)postTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3;	// IMP=0x00100000001b2e3a
- (void)postTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 recognitionSausage:(id)arg4;	// IMP=0x00100000001b2e1d
- (void)startTestSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 enableASR:(_Bool)arg3 inputOrigin:(id)arg4 location:(id)arg5 jitContext:(id)arg6 overrideModelPath:(id)arg7;	// IMP=0x00100000001b2e00
- (id)_getDefaultAssistantIdForAssistantId:(id)arg1;	// IMP=0x00100000001b2d4c
- (void)resumeDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2 prefixText:(id)arg3 postfixText:(id)arg4 selectedText:(id)arg5;	// IMP=0x00100000001b2c43
- (void)pauseDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001b2b8d
- (void)endDictationSessionWithAssistantId:(id)arg1;	// IMP=0x00100000001b2a64
- (void)startDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;	// IMP=0x00100000001b291a
- (void)startDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 recognitionOnDevice:(_Bool)arg3 shouldClassifyIntent:(_Bool)arg4 understandingOnDevice:(_Bool)arg5;	// IMP=0x00100000001b26bb
- (void)endSessionWithAssistantId:(id)arg1;	// IMP=0x00100000001b25e2
- (void)startSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(_Bool)arg3 sharedUserId:(id)arg4;	// IMP=0x00100000001b24f3
- (void)startSessionIfNeededForAssistantId:(id)arg1;	// IMP=0x00100000001b22fd
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(_Bool)arg6 isVoiceTriggerEnabled:(_Bool)arg7 isTextToSpeechEnabled:(_Bool)arg8 isTriggerlessFollowup:(_Bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14;	// IMP=0x00100000001b1f3b
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;	// IMP=0x00100000001b1e44
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;	// IMP=0x00100000001b1d8b
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5;	// IMP=0x00100000001b1cb2
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;	// IMP=0x00100000001b1c1d
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5;	// IMP=0x00100000001b1c00
- (void)startLocalRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;	// IMP=0x00100000001b1be3
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 location:(id)arg4 asrOnServer:(_Bool)arg5;	// IMP=0x00100000001b1ad4
- (void)requestFailedWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001b1a21
- (void)requestCompletedWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001b1a04
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b188b
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000001b17ef
- (void)clearDomainObjects;	// IMP=0x00100000001b17e9
- (void)resetExternalResources;	// IMP=0x00100000001b17e3
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000001b17dd
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000001b17c0
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000001b17a3
- (id)domains;	// IMP=0x00100000001b1786
- (id)handle;	// IMP=0x00100000001b177d
- (id)initWithRequestDispatcher:(id)arg1;	// IMP=0x00100000001b16f8
- (id)init;	// IMP=0x00100000001b1677

@end

