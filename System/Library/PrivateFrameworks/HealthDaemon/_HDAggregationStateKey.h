//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface _HDAggregationStateKey : NSObject
{
    NSString *_collectorIdentifier;	// 8 = 0x8
    HKDevice *_device;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029d68c
- (unsigned long long)hash;	// IMP=0x000000000029d64d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029d5cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029d5c4

@end

