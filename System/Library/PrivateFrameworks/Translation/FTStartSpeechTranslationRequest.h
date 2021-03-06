//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartSpeechRequest, FTTranslationRequest, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTStartSpeechTranslationRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartSpeechTranslationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000115d6b
- (id)flatbuffData;	// IMP=0x0000000000115bf3
- (Offset_a851d00e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001150cf
@property(readonly, nonatomic) _Bool streaming_mode;
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) _Bool restricted_mode;
- (void)text_to_speech_requests_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000114e19
- (unsigned long long)text_to_speech_requests_count;	// IMP=0x0000000000114d74
- (id)text_to_speech_requests_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000114c7b
@property(readonly, nonatomic) NSArray *text_to_speech_requests;
@property(readonly, nonatomic) FTTranslationRequest *translation_request;
@property(readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
- (void)translation_locale_pairs_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001147f3
- (unsigned long long)translation_locale_pairs_count;	// IMP=0x000000000011474e
- (id)translation_locale_pairs_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000114655
@property(readonly, nonatomic) NSArray *translation_locale_pairs;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011446d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001142b9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest *)arg2;	// IMP=0x00000000001142a3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000114288
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000114270

@end

