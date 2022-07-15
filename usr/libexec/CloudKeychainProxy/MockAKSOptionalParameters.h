//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MockAKSOptionalParameters : PBCodable
{
    NSData *_accessGroups;	// 8 = 0x8
    NSData *_acmHandle;	// 16 = 0x10
    NSData *_externalData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000e9f1
@property(retain, nonatomic) NSData *acmHandle; // @synthesize acmHandle=_acmHandle;
@property(retain, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(retain, nonatomic) NSData *accessGroups; // @synthesize accessGroups=_accessGroups;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000e8ff
- (unsigned long long)hash;	// IMP=0x001000000000e892
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000e79a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000e6d6
- (void)copyTo:(id)arg1;	// IMP=0x001000000000e653
- (void)writeTo:(id)arg1;	// IMP=0x001000000000e5d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000e46d
- (id)dictionaryRepresentation;	// IMP=0x001000000000e3c3
- (id)description;	// IMP=0x001000000000e314
@property(readonly, nonatomic) _Bool hasAcmHandle;
@property(readonly, nonatomic) _Bool hasExternalData;
@property(readonly, nonatomic) _Bool hasAccessGroups;

@end
