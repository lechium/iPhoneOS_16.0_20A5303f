//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDBusinessHours, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHoursData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDBusinessHours *_businessHours;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b8c092
- (unsigned long long)hash;	// IMP=0x0000000000b8c075
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8bfdb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8bf50
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8bef5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8bee6
- (id)jsonRepresentation;	// IMP=0x0000000000b8bb6c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8b96c
- (id)description;	// IMP=0x0000000000b8b8bd

@end

