//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieMusicResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002639be
- (void).cxx_destruct;	// IMP=0x00000000001ab623
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ab56b
- (unsigned long long)hash;	// IMP=0x00000000001ab454
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ab3a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ab31b
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ab2bd
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ab25c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ab24f
- (id)dictionaryRepresentation;	// IMP=0x00000000001aaf4b
- (id)description;	// IMP=0x00000000001aae9c
- (id)exportToLegacyDictionary;	// IMP=0x0000000000263b42

@end

