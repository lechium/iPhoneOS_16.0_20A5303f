//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64Value32PairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003fb5da
- (unsigned long long)hash;	// IMP=0x00000000003fb5bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fb523
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fb386
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fb256
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fb047
- (id)jsonRepresentation;	// IMP=0x00000000003fb038
- (id)dictionaryRepresentation;	// IMP=0x00000000003fadc9
- (id)description;	// IMP=0x00000000003fad1a

@end

