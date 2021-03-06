//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTServerEndpointFeatures, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationServerEndpointFeatures : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationServerEndpointFeatures *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011afe5
- (id)flatbuffData;	// IMP=0x000000000011ae6d
- (Offset_7dd54419)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011ac80
@property(readonly, nonatomic) FTServerEndpointFeatures *server_endpoint_features;
@property(readonly, nonatomic) NSString *source_locale;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011aa87
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationServerEndpointFeatures *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011a8d3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationServerEndpointFeatures *)arg2;	// IMP=0x000000000011a8bd
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011a8a2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011a88a

@end

