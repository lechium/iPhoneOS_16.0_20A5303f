//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray;

@interface CKDPSubscription : PBCodable
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _mutationTriggers;	// 8 = 0x8
    int _evaluationType;	// 32 = 0x20
    NSMutableArray *_filters;	// 40 = 0x28
    CKDPIdentifier *_identifier;	// 48 = 0x30
    CKDPSubscriptionNotification *_notification;	// 56 = 0x38
    int _owner;	// 64 = 0x40
    NSMutableArray *_recordTypes;	// 72 = 0x48
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 80 = 0x50
    _Bool _fireOnce;	// 88 = 0x58
    struct {
        unsigned int evaluationType:1;
        unsigned int owner:1;
        unsigned int fireOnce:1;
    } _has;	// 92 = 0x5c
}

+ (Class)recordTypesType;	// IMP=0x0010000000220873
+ (Class)filtersType;	// IMP=0x00100000002207a1
- (void).cxx_destruct;	// IMP=0x00000000002228ad
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(nonatomic) _Bool fireOnce; // @synthesize fireOnce=_fireOnce;
@property(retain, nonatomic) NSMutableArray *recordTypes; // @synthesize recordTypes=_recordTypes;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) CKDPSubscriptionNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000222425
- (unsigned long long)hash;	// IMP=0x00000000002222ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002220db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000221cf0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000221a52
- (void)writeTo:(id)arg1;	// IMP=0x000000000022174d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000221740
- (id)dictionaryRepresentation;	// IMP=0x0000000000220993
- (id)description;	// IMP=0x00000000002208e4
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(nonatomic) _Bool hasFireOnce;
- (id)recordTypesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000220856
- (unsigned long long)recordTypesCount;	// IMP=0x0000000000220839
- (void)addRecordTypes:(id)arg1;	// IMP=0x00000000002207cf
- (void)clearRecordTypes;	// IMP=0x00000000002207b2
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000220784
- (unsigned long long)filtersCount;	// IMP=0x0000000000220767
- (void)addFilters:(id)arg1;	// IMP=0x00000000002206fd
- (void)clearFilters;	// IMP=0x00000000002206e0
@property(readonly, nonatomic) _Bool hasNotification;
- (int)StringAsMutationTriggers:(id)arg1;	// IMP=0x000000000022062e
- (id)mutationTriggersAsString:(int)arg1;	// IMP=0x00000000002205e3
- (void)setMutationTriggers:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002205cc
- (int)mutationTriggersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002204ff
- (void)addMutationTriggers:(int)arg1;	// IMP=0x00000000002204ec
- (void)clearMutationTriggers;	// IMP=0x00000000002204db
@property(readonly, nonatomic) int *mutationTriggers;
@property(readonly, nonatomic) unsigned long long mutationTriggersCount;
- (int)StringAsOwner:(id)arg1;	// IMP=0x0000000000220451
- (id)ownerAsString:(int)arg1;	// IMP=0x00000000002203fb
@property(nonatomic) _Bool hasOwner;
@property(nonatomic) int owner; // @synthesize owner=_owner;
- (int)StringAsEvaluationType:(id)arg1;	// IMP=0x00000000002202f3
- (id)evaluationTypeAsString:(int)arg1;	// IMP=0x00000000002202a8
@property(nonatomic) _Bool hasEvaluationType;
@property(nonatomic) int evaluationType; // @synthesize evaluationType=_evaluationType;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x00000000002201ec

@end

