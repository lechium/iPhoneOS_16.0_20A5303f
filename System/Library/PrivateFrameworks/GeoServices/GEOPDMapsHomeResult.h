//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsHomeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_mapsHomeSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005627f3
- (unsigned long long)hash;	// IMP=0x00000000005627d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056273c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056257c
- (void)writeTo:(id)arg1;	// IMP=0x000000000056241d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056240e
- (id)jsonRepresentation;	// IMP=0x0000000000561ef1
- (id)dictionaryRepresentation;	// IMP=0x0000000000561b4e
- (id)description;	// IMP=0x0000000000561a9f

@end

