//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, GEOPDVenueDirectoryGroup, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeaturePOI : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDVenueBuilding *_building;	// 24 = 0x18
    GEOPDVenueDirectoryGroup *_directoryGroup;	// 32 = 0x20
    NSMutableArray *_levels;	// 40 = 0x28
    GEOPDVenueContainer *_venueContainer;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_building:1;
        unsigned int read_directoryGroup:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000041093a
- (unsigned long long)hash;	// IMP=0x00000000004108ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000410766
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041033c
- (void)writeTo:(id)arg1;	// IMP=0x000000000040ffcd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040ffbe
- (id)jsonRepresentation;	// IMP=0x000000000040f857
- (id)dictionaryRepresentation;	// IMP=0x000000000040f149
- (id)description;	// IMP=0x000000000040f09a
- (id)initWithData:(id)arg1;	// IMP=0x000000000040e5db
- (id)init;	// IMP=0x000000000040e57f

@end

