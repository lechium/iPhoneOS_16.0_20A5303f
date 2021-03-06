//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationPartialRecognitionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationPartialRecognitionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011801f
- (id)flatbuffData;	// IMP=0x0000000000117ea7
- (Offset_232cf698)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000117bb6
@property(readonly, nonatomic) _Bool is_stable_result;
@property(readonly, nonatomic) int confidence;
@property(readonly, nonatomic) NSString *recognition_text;
@property(readonly, nonatomic) NSString *source_locale;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000117949
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000117795
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse *)arg2;	// IMP=0x000000000011777f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000117764
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011774c

@end

