//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDDirectionIntent;

__attribute__((visibility("hidden")))
@interface GEOPDSearchDirectionIntent : PBCodable
{
    GEOPDDirectionIntent *_directionIntent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000aceeef
- (unsigned long long)hash;	// IMP=0x0000000000aceed2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000acee38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000acedc0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aced9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aced8d
- (id)jsonRepresentation;	// IMP=0x0000000000aceb64
- (id)dictionaryRepresentation;	// IMP=0x0000000000acea81
- (id)description;	// IMP=0x0000000000ace9d2

@end
