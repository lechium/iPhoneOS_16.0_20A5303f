//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTShortcutFuzzyMatchResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ShortcutFuzzyMatchResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011dd7d
- (id)flatbuffData;	// IMP=0x000000000011dc05
- (Offset_0da38826)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011d6ed
@property(readonly, nonatomic) int return_code;
- (void)shortcut_score_pairs_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011d4fb
- (unsigned long long)shortcut_score_pairs_count;	// IMP=0x000000000011d456
- (id)shortcut_score_pairs_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011d35d
@property(readonly, nonatomic) NSArray *shortcut_score_pairs;
@property(readonly, nonatomic) NSString *utterance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d1d4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011d020
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchResponse *)arg2;	// IMP=0x000000000011d00a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011cfef
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011cfd7

@end
