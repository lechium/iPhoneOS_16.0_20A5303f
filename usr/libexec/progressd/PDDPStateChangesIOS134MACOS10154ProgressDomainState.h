//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface PDDPStateChangesIOS134MACOS10154ProgressDomainState : PBCodable
{
    unsigned long long _flags;	// 8 = 0x8
    MISSING_TYPE *_domain;	// 16 = 0x10
    int _state;	// 20 = 0x14
    CDStruct_214543d2 _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000189c28
- (unsigned long long)hash;	// IMP=0x0010000000189bc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000189af5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000189a5d
- (void)copyTo:(id)arg1;	// IMP=0x00100000001899e8
- (void)writeTo:(id)arg1;	// IMP=0x0010000000189957
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000018994a
- (id)dictionaryRepresentation;	// IMP=0x00100000001894bd
- (id)description;	// IMP=0x001000000018940e
@property(nonatomic) _Bool hasFlags;
- (int)StringAsState:(id)arg1;	// IMP=0x0010000000189336
- (id)stateAsString:(int)arg1;	// IMP=0x00100000001892ed
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsDomain:(id)arg1;	// IMP=0x0010000000189194
- (id)domainAsString:(int)arg1;	// IMP=0x001000000018914b
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end

