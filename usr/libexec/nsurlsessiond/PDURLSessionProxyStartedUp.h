//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDURLSessionProxyStartedUp : PBCodable
{
    NSString *_launchUUID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000003271f
@property(retain, nonatomic) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000032687
- (unsigned long long)hash;	// IMP=0x001000000003263b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000032576
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000324e6
- (void)copyTo:(id)arg1;	// IMP=0x0010000000032483
- (void)writeTo:(id)arg1;	// IMP=0x001000000003241f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003221d
- (id)dictionaryRepresentation;	// IMP=0x001000000003215f
- (id)description;	// IMP=0x00100000000320b0
@property(readonly, nonatomic) _Bool hasLaunchUUID;
@property(nonatomic) _Bool hasVersion;

@end

