//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEventFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeEventCategoryId;	// 16 = 0x10
    struct {
        unsigned int has_includeEventCategoryId:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000cd329d
- (unsigned long long)hash;	// IMP=0x0000000000cd3272
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd31d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd3150
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd30ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd30de
- (id)jsonRepresentation;	// IMP=0x0000000000cd2fcc
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd2df8
- (id)description;	// IMP=0x0000000000cd2d49

@end

