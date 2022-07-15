//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPStateChange : PBCodable
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    NSString *_objectId;	// 24 = 0x18
    NSMutableArray *_stateChangePayloads;	// 32 = 0x20
    NSString *_targetClassId;	// 40 = 0x28
    NSString *_targetEntityName;	// 48 = 0x30
    NSString *_targetObjectId;	// 56 = 0x38
    NSString *_targetOwnerPersonId;	// 64 = 0x40
}

+ (Class)stateChangePayloadsType;	// IMP=0x002000000019a29c
- (void).cxx_destruct;	// IMP=0x002000000019b6cd
@property(retain, nonatomic) NSMutableArray *stateChangePayloads; // @synthesize stateChangePayloads=_stateChangePayloads;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *targetOwnerPersonId; // @synthesize targetOwnerPersonId=_targetOwnerPersonId;
@property(retain, nonatomic) NSString *targetClassId; // @synthesize targetClassId=_targetClassId;
@property(retain, nonatomic) NSString *targetEntityName; // @synthesize targetEntityName=_targetEntityName;
@property(retain, nonatomic) NSString *targetObjectId; // @synthesize targetObjectId=_targetObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019b33a
- (unsigned long long)hash;	// IMP=0x001000000019b245
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019b049
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019ad85
- (void)copyTo:(id)arg1;	// IMP=0x001000000019abdb
- (void)writeTo:(id)arg1;	// IMP=0x001000000019a9e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019a9d4
- (id)dictionaryRepresentation;	// IMP=0x001000000019a35c
- (id)description;	// IMP=0x001000000019a2ad
- (id)stateChangePayloadsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019a27f
- (unsigned long long)stateChangePayloadsCount;	// IMP=0x001000000019a262
- (void)addStateChangePayloads:(id)arg1;	// IMP=0x001000000019a1f8
- (void)clearStateChangePayloads;	// IMP=0x001000000019a1db
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasTargetOwnerPersonId;
@property(readonly, nonatomic) _Bool hasTargetClassId;
@property(readonly, nonatomic) _Bool hasTargetEntityName;
@property(readonly, nonatomic) _Bool hasTargetObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
