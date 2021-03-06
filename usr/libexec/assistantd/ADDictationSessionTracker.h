//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationSessionTracker : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSMutableDictionary *_activeSessionsByUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013fa4f
- (void)_endAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013f8d2
- (void)_endSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013f76a
- (void)_endSessionTransactionForReason:(id)arg1 session:(id)arg2 isSpeechTransaction:(_Bool)arg3;	// IMP=0x001000000013f638
- (void)_beginAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013f3f5
- (void)_beginSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013f1d1
- (id)_sessionWithUUID:(id)arg1;	// IMP=0x001000000013f1bb
- (id)_startedOrStartingSession;	// IMP=0x001000000013f130
- (void)_removeSession:(id)arg1;	// IMP=0x001000000013efe5
- (void)_addSession:(id)arg1;	// IMP=0x001000000013ee97
- (void)notifyAudioFileIOTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x001000000013eb5b
- (void)notifySpeechRecognitionTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x001000000013e81f
- (void)stopSessionForReason:(id)arg1;	// IMP=0x001000000013e59e
- (id)startSessionForReason:(id)arg1 languageCode:(id)arg2 options:(id)arg3 speechRequestOptions:(id)arg4;	// IMP=0x001000000013e18d
- (id)init;	// IMP=0x001000000013e0b2

@end

