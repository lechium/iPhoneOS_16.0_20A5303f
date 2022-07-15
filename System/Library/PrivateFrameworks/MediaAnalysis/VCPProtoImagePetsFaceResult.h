//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImagePetsFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001af7b2
- (void).cxx_destruct;	// IMP=0x00000000000ad002
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000acf4a
- (unsigned long long)hash;	// IMP=0x00000000000ace36
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000acd87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000accfd
- (void)copyTo:(id)arg1;	// IMP=0x00000000000accc9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000acc63
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000acc56
- (id)dictionaryRepresentation;	// IMP=0x00000000000ac95c
- (id)description;	// IMP=0x00000000000ac8ad
- (id)exportToLegacyDictionary;	// IMP=0x00000000001af95e

@end
