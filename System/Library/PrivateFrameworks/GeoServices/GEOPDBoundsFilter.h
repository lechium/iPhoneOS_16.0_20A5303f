//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b82132
- (unsigned long long)hash;	// IMP=0x0000000000b8212a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b820e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8208a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8206d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8205e
- (id)jsonRepresentation;	// IMP=0x0000000000b81da0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b81c35
- (id)description;	// IMP=0x0000000000b81b86

@end

