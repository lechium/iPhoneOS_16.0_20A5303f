//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTFinishAudio : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct FinishAudio *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c077d
- (id)flatbuffData;	// IMP=0x00000000000c0605
- (Offset_4c45a82e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bfdeb
- (void)server_feature_latency_distribution_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bfc24
- (unsigned long long)server_feature_latency_distribution_count;	// IMP=0x00000000000bfb7f
- (id)server_feature_latency_distribution_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bfa86
@property(readonly, nonatomic) NSArray *server_feature_latency_distribution;
- (void)features_at_endpoint_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf7e8
- (unsigned long long)features_at_endpoint_count;	// IMP=0x00000000000bf743
- (id)features_at_endpoint_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bf667
@property(readonly, nonatomic) NSArray *features_at_endpoint;
@property(readonly, nonatomic) float total_audio_recorded_seconds;
@property(readonly, nonatomic) int packet_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf4e4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bf330
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio *)arg2;	// IMP=0x00000000000bf31a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bf2ff
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bf2e7

@end
