//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchPair : PBCodable
{
    int _key;	// 8 = 0x8
    float _val;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x0000000000ae5e7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae5dea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae5d88
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ae5d27
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ae5d18
- (id)jsonRepresentation;	// IMP=0x0000000000ae5756
- (id)dictionaryRepresentation;	// IMP=0x0000000000ae5663
- (id)description;	// IMP=0x0000000000ae55b4

@end

