//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoClassification : PBCodable
{
    float _confidence;	// 8 = 0x8
    unsigned int _identifier;	// 12 = 0xc
}

@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000020a57b
- (unsigned long long)hash;	// IMP=0x000000000020a470
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020a3de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020a37c
- (void)copyTo:(id)arg1;	// IMP=0x000000000020a358
- (void)writeTo:(id)arg1;	// IMP=0x000000000020a2f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000020a2ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000209fe1
- (id)description;	// IMP=0x0000000000209f32

@end
