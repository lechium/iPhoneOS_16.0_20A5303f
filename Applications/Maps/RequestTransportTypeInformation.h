//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RequestTransportTypeInformation : NSObject
{
    NSDictionary *_transportTypeInfoProviders;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000597a04
@property(readonly, copy, nonatomic) NSDictionary *transportTypeInfoProviders; // @synthesize transportTypeInfoProviders=_transportTypeInfoProviders;
- (unsigned long long)hash;	// IMP=0x00100000005979b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005978f8
- (id)requestInfoProviderForTransportType:(long long)arg1;	// IMP=0x0010000000597871
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000597609

@end

