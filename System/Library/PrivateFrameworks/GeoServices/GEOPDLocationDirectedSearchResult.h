//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_disambiguationLabels;	// 24 = 0x18
    GEOMapRegion *_displayMapRegion;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayMapRegion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000560f5a
- (unsigned long long)hash;	// IMP=0x0000000000560f03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000560e21
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000560b3b
- (void)writeTo:(id)arg1;	// IMP=0x000000000056088b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056087c
- (id)jsonRepresentation;	// IMP=0x00000000005604fb
- (id)dictionaryRepresentation;	// IMP=0x00000000005600bc
- (id)description;	// IMP=0x000000000056000d
- (id)initWithData:(id)arg1;	// IMP=0x000000000055f4d5
- (id)init;	// IMP=0x000000000055f479

@end

