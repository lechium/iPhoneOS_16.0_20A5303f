//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface SDAutoUnlockDeviceRegistrationRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c2534
- (unsigned long long)hash;	// IMP=0x00100000001c250a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c2478
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c2416
- (void)copyTo:(id)arg1;	// IMP=0x00100000001c23f2
- (void)writeTo:(id)arg1;	// IMP=0x00100000001c23c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001c23ba
- (id)dictionaryRepresentation;	// IMP=0x00100000001c2141
- (id)description;	// IMP=0x00100000001c2092
@property(nonatomic) _Bool hasVersion;

@end

