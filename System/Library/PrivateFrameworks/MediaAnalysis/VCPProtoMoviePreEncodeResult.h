//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoMoviePreEncodeResult : PBCodable
{
    NSData *_statisticsBlob;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000010d62d
- (void).cxx_destruct;	// IMP=0x00000000001ce2b0
@property(retain, nonatomic) NSData *statisticsBlob; // @synthesize statisticsBlob=_statisticsBlob;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ce267
- (unsigned long long)hash;	// IMP=0x00000000001ce24a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ce1b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ce138
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ce115
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ce0f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ce0eb
- (id)dictionaryRepresentation;	// IMP=0x00000000001cdf1d
- (id)description;	// IMP=0x00000000001cde6e
- (id)exportToLegacyDictionary;	// IMP=0x000000000010d708

@end
