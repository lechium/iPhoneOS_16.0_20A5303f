//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTUserAcousticProfile, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTUpdatedAcousticProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct UpdatedAcousticProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c146f
- (id)flatbuffData;	// IMP=0x00000000000c12f7
- (Offset_0fed96ae)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c10e5
@property(readonly, nonatomic) FTUserAcousticProfile *updated_acoustic_profile;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0ec1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UpdatedAcousticProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c0d0d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UpdatedAcousticProfile *)arg2;	// IMP=0x00000000000c0cf7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0cdc
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c0cc4

@end
