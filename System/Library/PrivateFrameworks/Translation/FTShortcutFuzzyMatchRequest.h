//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTShortcutFuzzyMatchRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ShortcutFuzzyMatchRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011c2d1
- (id)flatbuffData;	// IMP=0x000000000011c159
- (Offset_b392b7fa)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011b9a4
@property(readonly, nonatomic) NSString *context;
@property(readonly, nonatomic) NSString *device_type;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *interaction_id;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *request_id;
- (void)shortcuts_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011b5a3
- (unsigned long long)shortcuts_count;	// IMP=0x000000000011b4fe
- (id)shortcuts_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011b405
@property(readonly, nonatomic) NSArray *shortcuts;
@property(readonly, nonatomic) FTShortcutFuzzyMatchRequest_StringTokenPair *utterance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011b20a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011b056
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest *)arg2;	// IMP=0x000000000011b040
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011b025
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011b00d

@end

