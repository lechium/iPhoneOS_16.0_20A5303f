//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBLocationGetPeerLocationRequest : PBRequest
{
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x002000000021a8a1
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a3bca
- (unsigned long long)hash;	// IMP=0x00100000001a3bc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a3b7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a3b44
- (void)copyTo:(id)arg1;	// IMP=0x00100000001a3b3e
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a3b38
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a3b2b
- (id)dictionaryRepresentation;	// IMP=0x00100000001a3a0d
- (id)description;	// IMP=0x00100000001a395e
- (void)_ad_performWithPeerLocationManagerRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f2335

@end

