//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiIconCategoryFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _excludeCategoryFilters;	// 24 = 0x18
    CDStruct_9f2792e4 _includeCategoryFilters;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_excludeCategoryFilters:1;
        unsigned int read_includeCategoryFilters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000e333a7
- (unsigned long long)hash;	// IMP=0x0000000000e33262
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e331b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3303e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e32e67
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e32e58
- (id)jsonRepresentation;	// IMP=0x0000000000e32352
- (id)dictionaryRepresentation;	// IMP=0x0000000000e32137
- (id)description;	// IMP=0x0000000000e32088
- (void)dealloc;	// IMP=0x0000000000e31458
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e313fc
- (id)init;	// IMP=0x0000000000e313a0

@end
