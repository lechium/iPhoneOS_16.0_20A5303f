//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTStreamingTranslationStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StreamingTranslationStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017403c
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017400e
- (void).cxx_destruct;	// IMP=0x0000000000174303
- (id)flatbuffData;	// IMP=0x000000000017418b
- (Offset_8c5a2d43)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000174096
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTTranslationResponse *contentAsFTTranslationResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000173ea7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000173cd9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingResponse *)arg2;	// IMP=0x0000000000173cc3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000173ca8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000173c90

@end

