//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ICAppleMusicAPITokenCollection, ICAppleMusicAPITokenError;

@interface ICAppleMusicAPITokenResponse : PBCodable
{
    ICAppleMusicAPITokenError *_error;	// 8 = 0x8
    ICAppleMusicAPITokenCollection *_tokenCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0010000000089158
@property(retain, nonatomic) ICAppleMusicAPITokenError *error; // @synthesize error=_error;
@property(retain, nonatomic) ICAppleMusicAPITokenCollection *tokenCollection; // @synthesize tokenCollection=_tokenCollection;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000089077
- (unsigned long long)hash;	// IMP=0x001000000008902a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000088f62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000088ec4
- (void)writeTo:(id)arg1;	// IMP=0x0010000000088e67
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000088c6c
- (id)dictionaryRepresentation;	// IMP=0x0010000000088b97
- (id)description;	// IMP=0x0010000000088ae8
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTokenCollection;
- (id)privacyConsciousDescription;	// IMP=0x00100000000945b8
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x0010000000094496

@end
