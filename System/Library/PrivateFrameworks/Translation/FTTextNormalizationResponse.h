//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextNormalizationResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextNormalizationResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d2add
- (id)flatbuffData;	// IMP=0x00000000000d2965
- (Offset_2174ecfb)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d2339
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d20e8
- (unsigned long long)tokens_count;	// IMP=0x00000000000d2043
- (id)tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d1f4a
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1d62
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d1bae
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationResponse *)arg2;	// IMP=0x00000000000d1b98
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d1b7d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d1b65

@end
