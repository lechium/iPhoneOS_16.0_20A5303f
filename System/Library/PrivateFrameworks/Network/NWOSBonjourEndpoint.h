//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NWOSBonjourEndpoint
{
    char *service_name;	// 8 = 0x8
    char *service_type;	// 16 = 0x10
    char *service_domain;	// 24 = 0x18
    char *service_composite;	// 32 = 0x20
}

- (unsigned long long)getHash;	// IMP=0x00000000001b63f0
- (id)copyEndpoint;	// IMP=0x00000000001b63c0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000001b6340
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000001b6240
- (const char *)domainForPolicy;	// IMP=0x00000000001b6220
- (id)copyDictionary;	// IMP=0x00000000001b6170
- (unsigned int)type;	// IMP=0x00000000001b6160
- (void)dealloc;	// IMP=0x00000000001b60b0

@end

