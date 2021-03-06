//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpan : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Span *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d9a09
- (id)flatbuffData;	// IMP=0x00000000000d9891
- (Offset_fbc62bac)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d9768
@property(readonly, nonatomic) NSString *meta_info;
@property(readonly, nonatomic) _Bool do_not_translate;
@property(readonly, nonatomic) int end_index;
@property(readonly, nonatomic) int start_index;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d9677
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Span *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d94c3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Span *)arg2;	// IMP=0x00000000000d94ad
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d9492
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d947a

@end

