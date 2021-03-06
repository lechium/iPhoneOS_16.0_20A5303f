//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWOSHostEndpoint
{
    char *hostname;	// 8 = 0x8
    unsigned short port;	// 16 = 0x10
    unsigned short priority;	// 18 = 0x12
    unsigned short weight;	// 20 = 0x14
    NSObject<OS_dispatch_data> *ech_config;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004b2160
- (unsigned long long)getHash;	// IMP=0x00000000004b20b0
- (id)copyEndpoint;	// IMP=0x00000000004b2050
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000004b1fc0
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000004b1ea0
- (void)setEchConfig:(id)arg1;	// IMP=0x00000000004b1e80
- (id)echConfig;	// IMP=0x00000000004b1e60
- (void)setWeight:(unsigned short)arg1;	// IMP=0x00000000004b1e40
- (unsigned short)weight;	// IMP=0x00000000004b1e20
- (void)setPriority:(unsigned short)arg1;	// IMP=0x00000000004b1e00
- (unsigned short)priority;	// IMP=0x00000000004b1de0
- (const char *)hostname;	// IMP=0x00000000004b1dc0
- (unsigned short)port;	// IMP=0x00000000004b1da0
- (const char *)domainForPolicy;	// IMP=0x00000000004b1d80
- (id)copyDictionary;	// IMP=0x00000000004b1cf0
- (unsigned int)type;	// IMP=0x00000000004b1ce0
- (void)dealloc;	// IMP=0x00000000004b1c80

@end

