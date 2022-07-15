//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTUserLanguageProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct UserLanguageProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a7d7f
- (id)flatbuffData;	// IMP=0x00000000000a7b9b
- (Offset_ac224c9d)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000a78c1
@property(readonly, nonatomic) NSString *profile_checksum;
@property(readonly, nonatomic) NSString *profile_blob_version;
- (void)profile_blob:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a77a3
@property(readonly, nonatomic) NSData *profile_blob;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a775d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserLanguageProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000a75a9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserLanguageProfile *)arg2;	// IMP=0x00000000000a7593
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000a7578
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000a7560

@end
