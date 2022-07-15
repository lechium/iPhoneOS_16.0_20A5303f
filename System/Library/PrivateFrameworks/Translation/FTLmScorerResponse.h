//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLmScorerResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LmScorerResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eba9b
- (id)flatbuffData;	// IMP=0x00000000000eb923
- (Offset_65d7de67)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000eb3d2
@property(readonly, nonatomic) double ppl;
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb1dd
- (unsigned long long)tokens_count;	// IMP=0x00000000000eb138
- (id)tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000eb03f
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eae8b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000eacd7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse *)arg2;	// IMP=0x00000000000eacc1
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000eaca6
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000eac8e

@end
