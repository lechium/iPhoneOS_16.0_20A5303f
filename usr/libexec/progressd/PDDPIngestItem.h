//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray, NSString, PDDPProgressEntity;

@interface PDDPIngestItem : PBCodable
{
    int _action;	// 8 = 0x8
    NSMutableArray *_handoutAuthorizedMetaInfos;	// 16 = 0x10
    NSString *_objectId;	// 24 = 0x18
    PDDPProgressEntity *_progressEntity;	// 32 = 0x20
    int _syncType;	// 40 = 0x28
    struct {
        unsigned int action:1;
        unsigned int syncType:1;
    } _has;	// 44 = 0x2c
}

+ (Class)handoutAuthorizedMetaInfoType;	// IMP=0x00200000000773ee
- (void).cxx_destruct;	// IMP=0x00200000000785b0
@property(retain, nonatomic) NSMutableArray *handoutAuthorizedMetaInfos; // @synthesize handoutAuthorizedMetaInfos=_handoutAuthorizedMetaInfos;
@property(retain, nonatomic) PDDPProgressEntity *progressEntity; // @synthesize progressEntity=_progressEntity;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000078355
- (unsigned long long)hash;	// IMP=0x0010000000078296
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007813c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000077ee0
- (MISSING_TYPE *)copyTo: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000077d9b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000077bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000077be0
- (id)dictionaryRepresentation;	// IMP=0x00100000000774ae
- (id)description;	// IMP=0x00100000000773ff
- (id)handoutAuthorizedMetaInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000773d1
- (unsigned long long)handoutAuthorizedMetaInfosCount;	// IMP=0x00100000000773b4
- (void)addHandoutAuthorizedMetaInfo:(id)arg1;	// IMP=0x001000000007734a
- (void)clearHandoutAuthorizedMetaInfos;	// IMP=0x001000000007732d
- (int)StringAsSyncType:(id)arg1;	// IMP=0x0010000000077262
- (id)syncTypeAsString:(int)arg1;	// IMP=0x0010000000077219
@property(nonatomic) _Bool hasSyncType;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(readonly, nonatomic) _Bool hasProgressEntity;
@property(readonly, nonatomic) _Bool hasObjectId;
- (int)StringAsAction:(id)arg1;	// IMP=0x00100000000770f5
- (id)actionAsString:(int)arg1;	// IMP=0x00100000000770ac
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;

@end

