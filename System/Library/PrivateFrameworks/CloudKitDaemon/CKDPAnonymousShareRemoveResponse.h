//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAnonymousShareRemoveResponse : PBCodable
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000191741
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001916f8
- (unsigned long long)hash;	// IMP=0x00000000001916db
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000191641
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001915c9
- (void)copyTo:(id)arg1;	// IMP=0x000000000019159f
- (void)writeTo:(id)arg1;	// IMP=0x000000000019157b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019156e
- (id)dictionaryRepresentation;	// IMP=0x00000000001913a2
- (id)description;	// IMP=0x00000000001912f3
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

