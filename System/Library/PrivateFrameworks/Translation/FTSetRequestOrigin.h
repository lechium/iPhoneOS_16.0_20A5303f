//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSetRequestOrigin : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SetRequestOrigin *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e59d8
- (id)flatbuffData;	// IMP=0x00000000000e5860
- (Offset_d926c39e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e57b3
@property(readonly, nonatomic) _Bool enable_geo_location_features;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e571b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e5567
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin *)arg2;	// IMP=0x00000000000e5551
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e5536
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e551e

@end
