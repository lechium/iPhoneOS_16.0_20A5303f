//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchGeoParsingResult, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryGeoTagMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _geoRewriteTypes;	// 16 = 0x10
    CDStruct_95bda58d _tagSources;	// 40 = 0x28
    GEOPDSearchGeoParsingResult *_geoParsingResult;	// 64 = 0x40
    NSMutableArray *_geoTypeMaps;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_geoRewriteTypes:1;
        unsigned int read_tagSources:1;
        unsigned int read_geoParsingResult:1;
        unsigned int read_geoTypeMaps:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x0000000000af6b13
- (unsigned long long)hash;	// IMP=0x0000000000af6a89
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af6975
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af6683
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af633a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af632b
- (id)jsonRepresentation;	// IMP=0x0000000000af5e3e
- (id)dictionaryRepresentation;	// IMP=0x0000000000af5820
- (id)description;	// IMP=0x0000000000af5771
- (void)dealloc;	// IMP=0x0000000000af4bd0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af4b74
- (id)init;	// IMP=0x0000000000af4b18

@end
