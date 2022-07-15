//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAStarFuzzyMatchingConfig, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTAStarFuzzyMatchingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AStarFuzzyMatchingRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eda25
- (id)flatbuffData;	// IMP=0x00000000000ed8ad
- (Offset_0c0a1494)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ed64c
@property(readonly, nonatomic) FTAStarFuzzyMatchingConfig *config;
@property(readonly, nonatomic) NSString *target;
@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *matcher_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ed3f4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ed240
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingRequest *)arg2;	// IMP=0x00000000000ed22a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ed20f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ed1f7

@end
