//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _ADPBDeviceStringKeyValueDictionary : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairsType;	// IMP=0x002000000029c2f4
+ (id)_ad_keyValueDictionaryWithDictionary:(id)arg1;	// IMP=0x001000000029ff76
- (void).cxx_destruct;	// IMP=0x001000000029cd89
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000029cc2f
- (unsigned long long)hash;	// IMP=0x001000000029cc12
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000029cb78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000029c9b5
- (void)copyTo:(id)arg1;	// IMP=0x001000000029c8ee
- (void)writeTo:(id)arg1;	// IMP=0x001000000029c7be
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000029c7b1
- (id)dictionaryRepresentation;	// IMP=0x001000000029c3b4
- (id)description;	// IMP=0x001000000029c305
- (id)pairsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000029c2d7
- (unsigned long long)pairsCount;	// IMP=0x001000000029c2ba
- (void)addPairs:(id)arg1;	// IMP=0x001000000029c250
- (void)clearPairs;	// IMP=0x001000000029c233
- (id)_ad_dictionaryRepresentation;	// IMP=0x00100000002a01b7

@end
