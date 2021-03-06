//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartTextToSpeechStreamingRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechStreamingStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechStreamingStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x00100000001746d7
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x00100000001746a9
- (void).cxx_destruct;	// IMP=0x000000000017499e
- (id)flatbuffData;	// IMP=0x0000000000174826
- (Offset_d397d874)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000174731
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174542
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000174374
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingRequest *)arg2;	// IMP=0x000000000017435e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000174343
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017432b

@end

