//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSConfigItem : NSObject
{
    long long _buckets;	// 8 = 0x8
    long long _shards;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    NSNumber *_itemTTL;	// 32 = 0x20
    NSURL *_filterMegaShardURL;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000046ddb
+ (id)keysRequestedForCloudKitFetch;	// IMP=0x00100000000433f2
- (void).cxx_destruct;	// IMP=0x0000000000046e0b
@property(readonly, nonatomic) NSURL *filterMegaShardURL; // @synthesize filterMegaShardURL=_filterMegaShardURL;
@property(readonly, nonatomic) NSNumber *itemTTL; // @synthesize itemTTL=_itemTTL;
@property(readonly, nonatomic) long long buckets; // @synthesize buckets=_buckets;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046c9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046b11
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long filterShardCount;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;	// IMP=0x00000000000468bc
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;	// IMP=0x0000000000046896
- (id)_extractItemTTLFromConfigRecord:(id)arg1;	// IMP=0x0000000000043b8b
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000043883
- (id)initWithJSONObj:(id)arg1;	// IMP=0x000000000004347a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

