//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_disambiguationLabels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005456c8
- (unsigned long long)hash;	// IMP=0x00000000005456ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000545611
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000545451
- (void)writeTo:(id)arg1;	// IMP=0x00000000005452f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005452e3
- (id)jsonRepresentation;	// IMP=0x0000000000544f6d
- (id)dictionaryRepresentation;	// IMP=0x0000000000544bca
- (id)description;	// IMP=0x0000000000544b1b

@end

