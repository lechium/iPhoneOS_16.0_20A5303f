//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d20537
- (unsigned long long)hash;	// IMP=0x0000000000d2052f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d204ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2048f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d20472
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d20463
- (id)jsonRepresentation;	// IMP=0x0000000000d20351
- (id)dictionaryRepresentation;	// IMP=0x0000000000d201e6
- (id)description;	// IMP=0x0000000000d20137

@end
