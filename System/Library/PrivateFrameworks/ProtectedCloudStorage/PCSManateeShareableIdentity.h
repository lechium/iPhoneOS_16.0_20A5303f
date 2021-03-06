//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PCSManateePrivateKey;

__attribute__((visibility("hidden")))
@interface PCSManateeShareableIdentity : PBCodable
{
    PCSManateePrivateKey *_encryptionPrivateKey;	// 8 = 0x8
    PCSManateePrivateKey *_signingPrivateKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003e8c
@property(retain, nonatomic) PCSManateePrivateKey *signingPrivateKey; // @synthesize signingPrivateKey=_signingPrivateKey;
@property(retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey; // @synthesize encryptionPrivateKey=_encryptionPrivateKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003dab
- (unsigned long long)hash;	// IMP=0x0000000000003d5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003c96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003bf8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003b95
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003b38
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003b2b
- (id)dictionaryRepresentation;	// IMP=0x0000000000003873
- (id)description;	// IMP=0x00000000000037c4
@property(readonly, nonatomic) _Bool hasSigningPrivateKey;
@property(readonly, nonatomic) _Bool hasEncryptionPrivateKey;

@end

