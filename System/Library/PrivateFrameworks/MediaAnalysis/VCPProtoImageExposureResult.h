//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageExposureResult : PBCodable
{
    float _exposure;	// 8 = 0x8
    float _underExpose;	// 12 = 0xc
    struct {
        unsigned int underExpose:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000772c6
@property(nonatomic) float underExpose; // @synthesize underExpose=_underExpose;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013b198
- (unsigned long long)hash;	// IMP=0x000000000013afa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013aef8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ae81
- (void)copyTo:(id)arg1;	// IMP=0x000000000013ae48
- (void)writeTo:(id)arg1;	// IMP=0x000000000013ade6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013add9
- (id)dictionaryRepresentation;	// IMP=0x000000000013aadb
- (id)description;	// IMP=0x000000000013aa2c
@property(nonatomic) _Bool hasUnderExpose;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000077465

@end
