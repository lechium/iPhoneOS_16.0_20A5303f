//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesResponseSyncObligation : PBCodable
{
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c1f6a
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c1ee8
- (unsigned long long)hash;	// IMP=0x00000000000c1ecb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c1e31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c1db9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c1d8f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c1d6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c1d5e
- (id)dictionaryRepresentation;	// IMP=0x00000000000c1b15
- (id)description;	// IMP=0x00000000000c1a66
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

