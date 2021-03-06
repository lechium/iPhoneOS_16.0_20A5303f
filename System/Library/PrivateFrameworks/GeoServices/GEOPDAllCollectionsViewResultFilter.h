//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDAllCollectionsViewResultFilterTypeKeyword, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResultFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddress;	// 24 = 0x18
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeyword;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _filterType;	// 52 = 0x34
    CDStruct_85060554 _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004dab3d
- (unsigned long long)hash;	// IMP=0x00000000004daab2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004da99f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004da7b3
- (void)writeTo:(id)arg1;	// IMP=0x00000000004da5ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004da5db
- (id)jsonRepresentation;	// IMP=0x00000000004d9b8d
- (id)dictionaryRepresentation;	// IMP=0x00000000004d9889
- (id)description;	// IMP=0x00000000004d97da
- (id)initWithData:(id)arg1;	// IMP=0x00000000004d8db6
- (id)init;	// IMP=0x00000000004d8d5a

@end

