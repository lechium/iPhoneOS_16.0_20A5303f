//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ff632
- (unsigned long long)hash;	// IMP=0x00000000003ff615
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ff57b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ff3de
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ff2ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ff09f
- (id)jsonRepresentation;	// IMP=0x00000000003ff090
- (id)dictionaryRepresentation;	// IMP=0x00000000003fee21
- (id)description;	// IMP=0x00000000003fed72

@end

