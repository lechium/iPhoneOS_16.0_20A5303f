//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrandTriggerInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_brandKey;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    unsigned long long _parentMuid;	// 32 = 0x20
    NSMutableArray *_triggers;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_muid:1;
        unsigned int has_parentMuid:1;
        unsigned int read_brandKey:1;
        unsigned int read_triggers:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000012ee914
- (unsigned long long)hash;	// IMP=0x00000000012ee870
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012ee73b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012ee2f8
- (void)writeTo:(id)arg1;	// IMP=0x00000000012ee01d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012ee010
- (id)jsonRepresentation;	// IMP=0x00000000012edda0
- (id)dictionaryRepresentation;	// IMP=0x00000000012ed94d
- (id)description;	// IMP=0x00000000012ed89e
- (id)initWithData:(id)arg1;	// IMP=0x00000000012ed087
- (id)init;	// IMP=0x00000000012ed02b

@end

