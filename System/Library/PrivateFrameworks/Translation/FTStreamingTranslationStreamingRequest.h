//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStreamingTranslationRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTStreamingTranslationStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StreamingTranslationStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x00100000001739a1
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000173973
- (void).cxx_destruct;	// IMP=0x0000000000173c68
- (id)flatbuffData;	// IMP=0x0000000000173af0
- (Offset_bce37aaf)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001739fb
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStreamingTranslationRequest *contentAsFTStreamingTranslationRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017380c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017363e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationStreamingRequest *)arg2;	// IMP=0x0000000000173628
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017360d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001735f5

@end

