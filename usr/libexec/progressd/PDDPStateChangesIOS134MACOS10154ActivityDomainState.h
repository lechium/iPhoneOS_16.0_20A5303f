//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPStateChangesIOS134MACOS10154ActivityDomainState : PBCodable
{
    int _domain;	// 8 = 0x8
    int _flags;	// 12 = 0xc
    int _state;	// 16 = 0x10
    CDStruct_06c35b4c _has;	// 20 = 0x14
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0020000000162b0b
- (unsigned long long)hash;	// IMP=0x0010000000162aa8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001629d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016293f
- (void)copyTo:(id)arg1;	// IMP=0x00100000001628cc
- (void)writeTo:(id)arg1;	// IMP=0x001000000016283c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000016282f
- (id)dictionaryRepresentation;	// IMP=0x00100000001622a9
- (id)description;	// IMP=0x00100000001621fa
- (int)StringAsFlags:(id)arg1;	// IMP=0x0010000000162044
- (id)flagsAsString:(int)arg1;	// IMP=0x0010000000161f26
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (int)StringAsState:(id)arg1;	// IMP=0x0010000000161dcf
- (id)stateAsString:(int)arg1;	// IMP=0x0010000000161d86
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsDomain:(id)arg1;	// IMP=0x0010000000161c2d
- (id)domainAsString:(int)arg1;	// IMP=0x0010000000161be4
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end
