//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000006312a
- (void).cxx_destruct;	// IMP=0x0000000000068048
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000067fff
- (unsigned long long)hash;	// IMP=0x0000000000067fe2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000067f48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067ed0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000067ead
- (void)writeTo:(id)arg1;	// IMP=0x0000000000067e90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000067e83
- (id)dictionaryRepresentation;	// IMP=0x0000000000067cb5
- (id)description;	// IMP=0x0000000000067c06
- (id)exportToLegacyDictionary;	// IMP=0x0000000000063205

@end

