//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ce4cac
- (unsigned long long)hash;	// IMP=0x0000000000ce4ca4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce4c5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce4c04
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce4be7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce4bd8
- (id)jsonRepresentation;	// IMP=0x0000000000ce4ac6
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce495b
- (id)description;	// IMP=0x0000000000ce48ac

@end
