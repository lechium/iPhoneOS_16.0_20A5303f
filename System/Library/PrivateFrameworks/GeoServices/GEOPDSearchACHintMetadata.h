//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchACHintMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_addressEntrys;	// 16 = 0x10
    NSMutableArray *_brooklynEntrys;	// 24 = 0x18
    NSMutableArray *_businessEntrys;	// 32 = 0x20
    NSMutableArray *_features;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_addressEntrys:1;
        unsigned int read_brooklynEntrys:1;
        unsigned int read_businessEntrys:1;
        unsigned int read_features:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000ab9e84
- (unsigned long long)hash;	// IMP=0x0000000000ab9df6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ab9cb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ab96df
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ab8e32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ab8e23
- (id)jsonRepresentation;	// IMP=0x0000000000ab86e5
- (id)dictionaryRepresentation;	// IMP=0x0000000000ab7e81
- (id)description;	// IMP=0x0000000000ab7dd2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ab6d88
- (id)init;	// IMP=0x0000000000ab6d2c

@end
