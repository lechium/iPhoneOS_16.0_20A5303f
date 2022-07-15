//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTWebTranslationInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct WebTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000decca
- (id)flatbuffData;	// IMP=0x00000000000deb52
- (Offset_344821e7)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000de712
- (void)spans_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000de54b
- (unsigned long long)spans_count;	// IMP=0x00000000000de4a6
- (id)spans_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000de3ad
@property(readonly, nonatomic) NSArray *spans;
@property(readonly, nonatomic) NSString *text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de224
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WebTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000de070
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WebTranslationInfo *)arg2;	// IMP=0x00000000000de05a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000de03f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000de027

@end
