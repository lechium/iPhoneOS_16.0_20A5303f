//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTPartialSpeechRecognitionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PartialSpeechRecognitionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b8b31
- (id)flatbuffData;	// IMP=0x00000000000b89b9
- (Offset_d84101b9)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b863e
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) int confidence;
@property(readonly, nonatomic) int audio_duration_ms;
@property(readonly, nonatomic) _Bool is_stable_result;
@property(readonly, nonatomic) NSString *recognition_text;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8347
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialSpeechRecognitionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b8193
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialSpeechRecognitionResponse *)arg2;	// IMP=0x00000000000b817d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b8162
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b814a

@end
