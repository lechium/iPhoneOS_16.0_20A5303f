//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PDDPPerson;

@interface PDDPUserInfo : PBCodable
{
    PDDPPerson *_person;	// 8 = 0x8
    NSMutableArray *_roles;	// 16 = 0x10
}

+ (Class)rolesType;	// IMP=0x00200000000ab0b3
- (void).cxx_destruct;	// IMP=0x00200000000abb35
@property(retain, nonatomic) NSMutableArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) PDDPPerson *person; // @synthesize person=_person;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ab957
- (unsigned long long)hash;	// IMP=0x00100000000ab90a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ab842
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ab669
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ab57f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ab433
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ab426
- (id)dictionaryRepresentation;	// IMP=0x00100000000ab173
- (id)description;	// IMP=0x00100000000ab0c4
- (id)rolesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ab096
- (unsigned long long)rolesCount;	// IMP=0x00100000000ab079
- (void)addRoles:(id)arg1;	// IMP=0x00100000000ab00f
- (void)clearRoles;	// IMP=0x00100000000aaff2
@property(readonly, nonatomic) _Bool hasPerson;

@end
