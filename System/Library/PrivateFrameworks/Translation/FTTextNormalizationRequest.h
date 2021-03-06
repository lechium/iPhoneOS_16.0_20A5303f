//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextNormalizationRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextNormalizationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d01bd
- (id)flatbuffData;	// IMP=0x00000000000d0045
- (Offset_96bf49bf)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cfe0a
@property(readonly, nonatomic) int nbest_variants_max;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cfc58
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000cfaa4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationRequest *)arg2;	// IMP=0x00000000000cfa8e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cfa73
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cfa5b

@end

