//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate, PDDPStatus;

@interface PDDPHandout : PBCodable
{
    unsigned long long _flags;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    NSMutableArray *_classIds;	// 24 = 0x18
    PDDPDate *_dateCreated;	// 32 = 0x20
    PDDPDate *_dateDue;	// 40 = 0x28
    PDDPDate *_dateLastModified;	// 48 = 0x30
    PDDPDate *_dateLastReviewed;	// 56 = 0x38
    PDDPDate *_dateOfPublication;	// 64 = 0x40
    NSString *_instructions;	// 72 = 0x48
    NSString *_objectId;	// 80 = 0x50
    int _publishingState;	// 88 = 0x58
    PDDPStatus *_status;	// 96 = 0x60
    NSString *_title;	// 104 = 0x68
    _Bool _isReviewed;	// 112 = 0x70
    struct {
        unsigned int flags:1;
        unsigned int publishingState:1;
        unsigned int isReviewed:1;
    } _has;	// 116 = 0x74
}

+ (Class)classIdsType;	// IMP=0x00200000000a7f2c
- (void).cxx_destruct;	// IMP=0x00200000000a9c1f
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) PDDPDate *dateLastReviewed; // @synthesize dateLastReviewed=_dateLastReviewed;
@property(nonatomic) _Bool isReviewed; // @synthesize isReviewed=_isReviewed;
@property(retain, nonatomic) PDDPDate *dateOfPublication; // @synthesize dateOfPublication=_dateOfPublication;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateDue; // @synthesize dateDue=_dateDue;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a96de
- (unsigned long long)hash;	// IMP=0x00100000000a9529
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a91ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a8e4f
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a8bef
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a8939
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a892c
- (id)dictionaryRepresentation;	// IMP=0x00100000000a7fec
- (id)description;	// IMP=0x00100000000a7f3d
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a7f0f
- (unsigned long long)classIdsCount;	// IMP=0x00100000000a7ef2
- (void)addClassIds:(id)arg1;	// IMP=0x00100000000a7e88
- (void)clearClassIds;	// IMP=0x00100000000a7e6b
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasStatus;
- (int)StringAsPublishingState:(id)arg1;	// IMP=0x00100000000a7cbd
- (id)publishingStateAsString:(int)arg1;	// IMP=0x00100000000a7c74
@property(nonatomic) _Bool hasPublishingState;
@property(nonatomic) int publishingState; // @synthesize publishingState=_publishingState;
@property(readonly, nonatomic) _Bool hasDateLastReviewed;
@property(nonatomic) _Bool hasIsReviewed;
@property(readonly, nonatomic) _Bool hasDateOfPublication;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateDue;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasInstructions;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
