//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDActionLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_appAdamId;	// 24 = 0x18
    NSMutableArray *_links;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appAdamId:1;
        unsigned int read_links:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000b6208d
- (unsigned long long)hash;	// IMP=0x0000000000b62036
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b61f54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b61c6e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b619be
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b619af
- (id)jsonRepresentation;	// IMP=0x0000000000b6162e
- (id)dictionaryRepresentation;	// IMP=0x0000000000b61241
- (id)description;	// IMP=0x0000000000b61192
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b606dc
- (id)init;	// IMP=0x0000000000b60680

@end
