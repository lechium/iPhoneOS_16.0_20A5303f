//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitAttributionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d18b8e
- (unsigned long long)hash;	// IMP=0x0000000000d18b86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d18b41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d18ae6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d18ac9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d18aba
- (id)jsonRepresentation;	// IMP=0x0000000000d189a8
- (id)dictionaryRepresentation;	// IMP=0x0000000000d1883d
- (id)description;	// IMP=0x0000000000d1878e

@end
