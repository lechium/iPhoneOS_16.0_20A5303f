//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputWave : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureInputWave *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ee25
- (id)flatbuffData;	// IMP=0x000000000010ecad
- (Offset_efc89d55)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010eb57
- (void)pcm_data:(CDUnknownBlockType)arg1;	// IMP=0x000000000010eaf7
@property(readonly, nonatomic) NSData *pcm_data;
@property(readonly, nonatomic) int sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010ea86
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010e8d2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2;	// IMP=0x000000000010e8bc
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010e8a1
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010e889

@end

