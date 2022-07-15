//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationOptions, AFQueue, AFSpeechRequestOptions, NSString;

@interface ADDictationSession : NSObject
{
    AFQueue *_transactionObjects;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    NSString *_languageCode;	// 32 = 0x20
    AFDictationOptions *_options;	// 40 = 0x28
    AFSpeechRequestOptions *_speechRequestOptions;	// 48 = 0x30
    long long _speechRecognitionTransactionState;	// 56 = 0x38
    long long _audioFileIOTransactionState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000d7905
@property(readonly, nonatomic) long long audioFileIOTransactionState; // @synthesize audioFileIOTransactionState=_audioFileIOTransactionState;
@property(readonly, nonatomic) long long speechRecognitionTransactionState; // @synthesize speechRecognitionTransactionState=_speechRecognitionTransactionState;
@property(readonly, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(readonly, nonatomic) AFDictationOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)_setAudioFileIOTransactionState:(long long)arg1;	// IMP=0x00100000000d75b6
- (void)_setSpeechRecognitionTransactionState:(long long)arg1;	// IMP=0x00100000000d72ad
- (void)dealloc;	// IMP=0x00100000000d6fd5
- (id)initWithUUID:(id)arg1 timestamp:(unsigned long long)arg2 languageCode:(id)arg3 options:(id)arg4 speechRequestOptions:(id)arg5;	// IMP=0x00100000000d6eca
- (id)init;	// IMP=0x00100000000d6ebc

@end
