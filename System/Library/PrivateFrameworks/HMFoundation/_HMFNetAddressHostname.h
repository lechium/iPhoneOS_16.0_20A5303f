//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMFNetAddressHostname
{
    NSString *_hostname;	// 24 = 0x18
}

+ (id)normalizedHostname:(id)arg1;	// IMP=0x0060000000042a40
- (void).cxx_destruct;	// IMP=0x0000000000042d94
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (id)addressString;	// IMP=0x0000000000042d71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042c9d
- (unsigned long long)hash;	// IMP=0x0000000000042c59
- (id)initWithHostname:(id)arg1;	// IMP=0x0000000000042af4
- (id)init;	// IMP=0x0000000000042998

@end
