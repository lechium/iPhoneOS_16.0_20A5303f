//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRap : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _placecardRapButtonType;	// 16 = 0x10
    struct {
        unsigned int has_placecardRapButtonType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000001107cee
- (unsigned long long)hash;	// IMP=0x0000000001107cc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001107c31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001107bb1
- (void)writeTo:(id)arg1;	// IMP=0x0000000001107b4f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001107b40
- (id)jsonRepresentation;	// IMP=0x0000000001107461
- (id)dictionaryRepresentation;	// IMP=0x0000000001107272
- (id)description;	// IMP=0x00000000011071c3

@end
