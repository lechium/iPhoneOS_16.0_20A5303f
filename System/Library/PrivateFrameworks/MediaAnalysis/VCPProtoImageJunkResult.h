//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageJunkResult : PBCodable
{
    float _confidence;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000cedc7
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000241184
- (unsigned long long)hash;	// IMP=0x0000000000241094
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000241027
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000240fd2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000240fbb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000240f9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000240f90
- (id)dictionaryRepresentation;	// IMP=0x0000000000240d6b
- (id)description;	// IMP=0x0000000000240cbc
- (id)exportToLegacyDictionary;	// IMP=0x00000000000ceeaf

@end
