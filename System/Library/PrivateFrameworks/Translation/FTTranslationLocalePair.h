//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationLocalePair : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationLocalePair *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000114248
- (id)flatbuffData;	// IMP=0x00000000001140d0
- (Offset_800c69e0)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000113f9d
@property(readonly, nonatomic) NSString *target_locale;
@property(readonly, nonatomic) NSString *source_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113ed4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationLocalePair *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000113d20
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationLocalePair *)arg2;	// IMP=0x0000000000113d0a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000113cef
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000113cd7

@end
