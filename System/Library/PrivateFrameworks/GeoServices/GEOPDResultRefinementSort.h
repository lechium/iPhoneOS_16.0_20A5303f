//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementSort : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSMutableArray *_sorts;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _defaultSelectedElementIndex;	// 52 = 0x34
    unsigned int _selectedElementIndex;	// 56 = 0x38
    struct {
        unsigned int has_defaultSelectedElementIndex:1;
        unsigned int has_selectedElementIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_sorts:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000e628d6
- (unsigned long long)hash;	// IMP=0x0000000000e62832
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e626fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e623c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e620cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e620c0
- (id)jsonRepresentation;	// IMP=0x0000000000e61d3f
- (id)dictionaryRepresentation;	// IMP=0x0000000000e61877
- (id)description;	// IMP=0x0000000000e617c8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e60ad6
- (id)init;	// IMP=0x0000000000e60a7a

@end

