//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier;

@interface CKDPUniqueFieldFailure : PBCodable
{
    CKDPIdentifier *_identifierForConstraintFailure;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000262eeb
@property(retain, nonatomic) CKDPIdentifier *identifierForConstraintFailure; // @synthesize identifierForConstraintFailure=_identifierForConstraintFailure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000262e69
- (unsigned long long)hash;	// IMP=0x0000000000262e4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000262db2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000262d3a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000262d10
- (void)writeTo:(id)arg1;	// IMP=0x0000000000262cec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000262cdf
- (id)dictionaryRepresentation;	// IMP=0x0000000000262a96
- (id)description;	// IMP=0x00000000002629e7
@property(readonly, nonatomic) _Bool hasIdentifierForConstraintFailure;

@end

