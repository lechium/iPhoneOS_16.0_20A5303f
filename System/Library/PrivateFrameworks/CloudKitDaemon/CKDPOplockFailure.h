//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPOplockFailure : PBCodable
{
    CKDPRecord *_recordForOplockFailure;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019bee1
@property(retain, nonatomic) CKDPRecord *recordForOplockFailure; // @synthesize recordForOplockFailure=_recordForOplockFailure;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019be5f
- (unsigned long long)hash;	// IMP=0x000000000019be42
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019bda8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019bd30
- (void)copyTo:(id)arg1;	// IMP=0x000000000019bd06
- (void)writeTo:(id)arg1;	// IMP=0x000000000019bce2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019bcd5
- (id)dictionaryRepresentation;	// IMP=0x000000000019ba8c
- (id)description;	// IMP=0x000000000019b9dd
@property(readonly, nonatomic) _Bool hasRecordForOplockFailure;

@end
