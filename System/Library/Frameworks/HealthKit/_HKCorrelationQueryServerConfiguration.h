//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDictionary *_filterDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001e2c65
- (void).cxx_destruct;	// IMP=0x00000000001e2e18
@property(copy, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e2d79
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e2c6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e2c0f

@end
