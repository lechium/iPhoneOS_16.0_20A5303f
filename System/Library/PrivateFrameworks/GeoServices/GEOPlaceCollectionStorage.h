//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAttribution, GEOPDPlaceCollection, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceCollectionStorage : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAttribution *_attribution;	// 24 = 0x18
    GEOPDPlaceCollection *_placeCollection;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attribution:1;
        unsigned int read_placeCollection:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000010c0347
- (unsigned long long)hash;	// IMP=0x00000000010c02f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010c020e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010c005b
- (void)writeTo:(id)arg1;	// IMP=0x00000000010bfe64
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010bfe57
- (id)jsonRepresentation;	// IMP=0x00000000010bfae4
- (id)dictionaryRepresentation;	// IMP=0x00000000010bf73b
- (id)description;	// IMP=0x00000000010bf68c
- (id)initWithData:(id)arg1;	// IMP=0x00000000010beff1
- (id)init;	// IMP=0x00000000010bef95

@end

