//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoDaemonStartedUp : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000b869
- (unsigned long long)hash;	// IMP=0x001000000000b83f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000b7ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000b74b
- (void)copyTo:(id)arg1;	// IMP=0x001000000000b727
- (void)writeTo:(id)arg1;	// IMP=0x001000000000b6fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000b6ef
- (id)dictionaryRepresentation;	// IMP=0x001000000000b476
- (id)description;	// IMP=0x001000000000b3c7
@property(nonatomic) _Bool hasVersion;

@end
