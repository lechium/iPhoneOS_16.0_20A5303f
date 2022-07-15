//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTItnRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ItnRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ccb85
- (id)flatbuffData;	// IMP=0x00000000000cca0d
- (Offset_6434fcc0)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cc4ce
- (void)words_list_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc307
- (unsigned long long)words_list_count;	// IMP=0x00000000000cc262
- (id)words_list_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000cc169
@property(readonly, nonatomic) NSArray *words_list;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbf22
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000cbd6e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnRequest *)arg2;	// IMP=0x00000000000cbd58
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cbd3d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000cbd25

@end
