//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _partiallyClientize;	// 16 = 0x10
    struct {
        unsigned int has_partiallyClientize:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000cd9dbb
- (unsigned long long)hash;	// IMP=0x0000000000cd9d90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd9cee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd9c6e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd9c0b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd9bfc
- (id)jsonRepresentation;	// IMP=0x0000000000cd9aea
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd9916
- (id)description;	// IMP=0x0000000000cd9867

@end

