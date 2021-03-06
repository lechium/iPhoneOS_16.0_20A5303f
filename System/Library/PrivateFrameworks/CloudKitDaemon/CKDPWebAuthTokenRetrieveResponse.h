//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable
{
    NSString *_containerScopedUserId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015ab04
@property(retain, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015aa57
- (unsigned long long)hash;	// IMP=0x000000000015aa0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015a942
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015a8a4
- (void)copyTo:(id)arg1;	// IMP=0x000000000015a841
- (void)writeTo:(id)arg1;	// IMP=0x000000000015a7e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015a7d7
- (id)dictionaryRepresentation;	// IMP=0x000000000015a5c2
- (id)description;	// IMP=0x000000000015a513
@property(readonly, nonatomic) _Bool hasContainerScopedUserId;
@property(readonly, nonatomic) _Bool hasToken;

@end

