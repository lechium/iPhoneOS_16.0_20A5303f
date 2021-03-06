//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprints : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000357eb5
- (unsigned long long)hash;	// IMP=0x0010000000357e98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000357e34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000357c92
- (void)copyTo:(id)arg1;	// IMP=0x0010000000357bfb
- (void)writeTo:(id)arg1;	// IMP=0x0010000000357af5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000357ae8
- (id)dictionaryRepresentation;	// IMP=0x0010000000357739
- (id)description;	// IMP=0x00100000003576c2
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003576a5
- (unsigned long long)locationFingerprintsCount;	// IMP=0x0010000000357688
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x001000000035763b
- (void)clearLocationFingerprints;	// IMP=0x001000000035761e
- (void)dealloc;	// IMP=0x00100000003575de

@end

