//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPMergeableValueIdentifier : PBCodable
{
    CKDPIdentifier *_value;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013b575
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013b494
- (unsigned long long)hash;	// IMP=0x000000000013b447
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013b37f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b2e1
- (void)copyTo:(id)arg1;	// IMP=0x000000000013b27e
- (void)writeTo:(id)arg1;	// IMP=0x000000000013b221
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013b214
- (id)dictionaryRepresentation;	// IMP=0x000000000013af2c
- (id)description;	// IMP=0x000000000013ae7d
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

