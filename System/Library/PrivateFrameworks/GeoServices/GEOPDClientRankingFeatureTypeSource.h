//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeSource : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _serverEntryType;	// 16 = 0x10
    int _suggestionType;	// 20 = 0x14
    struct {
        unsigned int has_serverEntryType:1;
        unsigned int has_suggestionType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000067d9be
- (unsigned long long)hash;	// IMP=0x000000000067d978
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067d8c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067d828
- (void)writeTo:(id)arg1;	// IMP=0x000000000067d79c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000067d78d
- (id)jsonRepresentation;	// IMP=0x000000000067d12e
- (id)dictionaryRepresentation;	// IMP=0x000000000067ceb5
- (id)description;	// IMP=0x000000000067ce06

@end

