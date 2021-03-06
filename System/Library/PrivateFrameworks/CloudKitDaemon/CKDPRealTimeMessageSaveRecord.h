//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPRealTimeMessageSaveRecord : PBCodable
{
    CKDPRecord *_record;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000100bce
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000100b4c
- (unsigned long long)hash;	// IMP=0x0000000000100b2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000100a95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000100a1d
- (void)copyTo:(id)arg1;	// IMP=0x00000000001009f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001009cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001009c2
- (id)dictionaryRepresentation;	// IMP=0x0000000000100779
- (id)description;	// IMP=0x00000000001006ca
@property(readonly, nonatomic) _Bool hasRecord;

@end

