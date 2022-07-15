//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b651c
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b646f
- (unsigned long long)hash;	// IMP=0x00100000000b6422
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b635a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b62bc
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b625f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b6252
- (id)dictionaryRepresentation;	// IMP=0x00100000000b61cf
- (id)description;	// IMP=0x00100000000b6120
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x001000000001a7c5
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x001000000001a635

@end
