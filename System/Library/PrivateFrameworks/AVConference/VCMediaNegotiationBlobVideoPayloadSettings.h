//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable
{
    NSString *_featureString;	// 8 = 0x8
    unsigned int _parameterSet;	// 16 = 0x10
    unsigned int _payload;	// 20 = 0x14
    NSMutableArray *_videoRuleCollections;	// 24 = 0x18
}

+ (Class)videoRuleCollectionsType;	// IMP=0x001000000029a2ce
@property(nonatomic) unsigned int parameterSet; // @synthesize parameterSet=_parameterSet;
@property(retain, nonatomic) NSString *featureString; // @synthesize featureString=_featureString;
@property(retain, nonatomic) NSMutableArray *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(nonatomic) unsigned int payload; // @synthesize payload=_payload;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029aead
- (unsigned long long)hash;	// IMP=0x000000000029ae2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029ad73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029ab79
- (void)copyTo:(id)arg1;	// IMP=0x000000000029aaa4
- (void)writeTo:(id)arg1;	// IMP=0x000000000029a955
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029a948
- (id)dictionaryRepresentation;	// IMP=0x000000000029a379
- (id)description;	// IMP=0x000000000029a2df
- (id)videoRuleCollectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029a2b1
- (unsigned long long)videoRuleCollectionsCount;	// IMP=0x000000000029a294
- (void)addVideoRuleCollections:(id)arg1;	// IMP=0x000000000029a247
- (void)clearVideoRuleCollections;	// IMP=0x000000000029a22a
- (void)dealloc;	// IMP=0x000000000029a1b0

@end

