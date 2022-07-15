//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000db39e
- (id)flatbuffData;	// IMP=0x00000000000db226
- (Offset_b4e49498)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000dae1c
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dac55
- (unsigned long long)raw_nbest_choices_count;	// IMP=0x00000000000dabb0
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000daab7
@property(readonly, nonatomic) NSArray *raw_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *raw_sausage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000da8bc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000da708
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2;	// IMP=0x00000000000da6f2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000da6d7
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000da6bf

@end
