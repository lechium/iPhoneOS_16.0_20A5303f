//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPMergeableValueIdentifier, CKDPRecordFieldIdentifier, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable
{
    CKDPRecordFieldIdentifier *_fieldIdentifier;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
    NSMutableArray *_mergeableDeltas;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
}

+ (Class)mergeableDeltasType;	// IMP=0x0010000000101330
- (void).cxx_destruct;	// IMP=0x0000000000102330
@property(retain, nonatomic) NSMutableArray *mergeableDeltas; // @synthesize mergeableDeltas=_mergeableDeltas;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000102071
- (unsigned long long)hash;	// IMP=0x0000000000101fed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000101ec1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000101c95
- (void)copyTo:(id)arg1;	// IMP=0x0000000000101b6b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001019e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001019d8
- (id)dictionaryRepresentation;	// IMP=0x00000000001013f0
- (id)description;	// IMP=0x0000000000101341
- (id)mergeableDeltasAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000101313
- (unsigned long long)mergeableDeltasCount;	// IMP=0x00000000001012f6
- (void)addMergeableDeltas:(id)arg1;	// IMP=0x000000000010128c
- (void)clearMergeableDeltas;	// IMP=0x000000000010126f
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasFieldIdentifier;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

