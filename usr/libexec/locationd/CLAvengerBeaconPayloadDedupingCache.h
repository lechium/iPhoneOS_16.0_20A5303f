//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CLAvengerBeaconPayloadDedupingCache : NSObject
{
    NSMutableArray *_beaconPayloadCache;	// 8 = 0x8
}

@property(retain) NSMutableArray *beaconPayloadCache; // @synthesize beaconPayloadCache=_beaconPayloadCache;
- (void)removeAllObjects;	// IMP=0x001000000086b243
- (void)pruneCacheWithSize:(long long)arg1;	// IMP=0x001000000086b1de
- (void)pruneCache;	// IMP=0x001000000086b0a4
- (void)appendPayload:(id)arg1;	// IMP=0x001000000086b08e
- (_Bool)isNewPayload:(id)arg1;	// IMP=0x001000000086afdd
- (void)dealloc;	// IMP=0x001000000086afa2
- (id)init;	// IMP=0x001000000086af56

@end

