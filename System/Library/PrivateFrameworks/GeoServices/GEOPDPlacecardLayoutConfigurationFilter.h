//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardLayoutConfigurationFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ccd14a
- (unsigned long long)hash;	// IMP=0x0000000000ccd142
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ccd0fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ccd0a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ccd085
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ccd076
- (id)jsonRepresentation;	// IMP=0x0000000000cccf64
- (id)dictionaryRepresentation;	// IMP=0x0000000000cccdf9
- (id)description;	// IMP=0x0000000000cccd4a

@end

