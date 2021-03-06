//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontBundleId : PBCodable
{
    unsigned long long _identifier;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    struct {
        unsigned int has_identifier:1;
        unsigned int has_timestamp:1;
    } _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000a11e3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a11d88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a11d07
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a11c94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a11c85
- (id)jsonRepresentation;	// IMP=0x0000000000a11c7b
- (id)dictionaryRepresentation;	// IMP=0x0000000000a11b6e
- (id)description;	// IMP=0x0000000000a11abf

@end

