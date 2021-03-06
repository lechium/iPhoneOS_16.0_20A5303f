//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioFrame : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioFrame *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000113021
- (id)flatbuffData;	// IMP=0x0000000000112ea9
- (Offset_a1ce9f39)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000112d78
- (void)audio_bytes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000112d18
@property(readonly, nonatomic) NSData *audio_bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112cd2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioFrame *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000112b1e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioFrame *)arg2;	// IMP=0x0000000000112b08
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000112aed
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000112ad5

@end

