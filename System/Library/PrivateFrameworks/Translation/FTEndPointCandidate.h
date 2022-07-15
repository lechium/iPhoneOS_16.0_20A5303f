//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTEndPointCandidate : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct EndPointCandidate *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e54f6
- (id)flatbuffData;	// IMP=0x00000000000e537e
- (Offset_d4bcbfdd)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e516e
@property(readonly, nonatomic) int processed_audio_duration_ms;
@property(readonly, nonatomic) int end_point_likelihood;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4fc5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e4e11
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2;	// IMP=0x00000000000e4dfb
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e4de0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e4dc8

@end
