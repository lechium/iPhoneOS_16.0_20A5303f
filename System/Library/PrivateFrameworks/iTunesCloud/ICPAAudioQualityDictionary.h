//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPAAudioQualityDictionary : PBCodable
{
    long long _bitDepth;	// 8 = 0x8
    long long _bitRate;	// 16 = 0x10
    long long _sampleRate;	// 24 = 0x18
    NSString *_channelLayoutDescription;	// 32 = 0x20
    unsigned int _codec;	// 40 = 0x28
    _Bool _isSpatialized;	// 44 = 0x2c
    struct {
        unsigned int bitDepth:1;
        unsigned int bitRate:1;
        unsigned int sampleRate:1;
        unsigned int codec:1;
        unsigned int isSpatialized:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000213ba
- (unsigned long long)hash;	// IMP=0x00000000000212e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002116e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021064
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020f75
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020f68
- (id)dictionaryRepresentation;	// IMP=0x0000000000020d47
- (id)description;	// IMP=0x0000000000020c98

@end
