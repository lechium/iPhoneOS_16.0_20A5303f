//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAutoUnlockEscrowSecretInfo : PBCodable
{
    NSString *_pairingID;	// 8 = 0x8
    NSData *_secret;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f810b
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f805e
- (unsigned long long)hash;	// IMP=0x00100000000f8011
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f7f49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f7eab
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f7e48
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f7deb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f7dde
- (id)dictionaryRepresentation;	// IMP=0x00100000000f7bc9
- (id)description;	// IMP=0x00100000000f7b1a
@property(readonly, nonatomic) _Bool hasPairingID;
@property(readonly, nonatomic) _Bool hasSecret;

@end

