//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSuggestionsTouristInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _isTourist;	// 16 = 0x10
    struct {
        unsigned int has_isTourist:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f07cf0
- (unsigned long long)hash;	// IMP=0x0000000000f07bdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f07b45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f07ac1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f07a5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f07a4e
- (id)jsonRepresentation;	// IMP=0x0000000000f0793c
- (id)dictionaryRepresentation;	// IMP=0x0000000000f07767
- (id)description;	// IMP=0x0000000000f076b8

@end
