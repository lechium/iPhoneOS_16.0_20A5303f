//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLPRVehicleType, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLPRVehicleTypeMap : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    GEOLPRVehicleType *_vehicleType;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_key:1;
        unsigned int read_vehicleType:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000011654f9
- (unsigned long long)hash;	// IMP=0x00000000011654a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011653c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000116522b
- (void)writeTo:(id)arg1;	// IMP=0x000000000116507a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000116506b
- (id)jsonRepresentation;	// IMP=0x0000000001164ded
- (id)dictionaryRepresentation;	// IMP=0x0000000001164b6b
- (id)description;	// IMP=0x0000000001164abc
- (id)initWithData:(id)arg1;	// IMP=0x00000000011645b8
- (id)init;	// IMP=0x000000000116455c

@end

