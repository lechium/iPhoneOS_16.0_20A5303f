//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueDoublePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004072cf
- (unsigned long long)hash;	// IMP=0x00000000004072b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000407218
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040707b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000406f4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000406d3a
- (id)jsonRepresentation;	// IMP=0x0000000000406d2b
- (id)dictionaryRepresentation;	// IMP=0x0000000000406abc
- (id)description;	// IMP=0x0000000000406a0d

@end

