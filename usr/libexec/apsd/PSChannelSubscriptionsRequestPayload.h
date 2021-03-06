//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface PSChannelSubscriptionsRequestPayload : PBCodable
{
    unsigned long long _sequenceNumber;	// 8 = 0x8
    NSMutableArray *_appChannelSubscriptions;	// 16 = 0x10
    int _subscriptionsType;	// 24 = 0x18
    int _version;	// 28 = 0x1c
    struct {
        unsigned int sequenceNumber:1;
        unsigned int subscriptionsType:1;
        unsigned int version:1;
    } _has;	// 32 = 0x20
}

+ (Class)appChannelSubscriptionsType;	// IMP=0x0010000000043a51
+ (id)createPayloadForSubscriptionChannels:(id)arg1 unsubscriptionChannels:(id)arg2 subscriptionType:(int)arg3;	// IMP=0x0010000000018e75
- (void).cxx_destruct;	// IMP=0x0020000000044c5d
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSMutableArray *appChannelSubscriptions; // @synthesize appChannelSubscriptions=_appChannelSubscriptions;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000044a5d
- (unsigned long long)hash;	// IMP=0x00100000000449cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000448b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000044676
- (MISSING_TYPE *)copyTo: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000044558
- (void)writeTo:(id)arg1;	// IMP=0x00100000000443a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004439c
- (id)dictionaryRepresentation;	// IMP=0x0010000000043c76
- (id)description;	// IMP=0x0010000000043bc7
@property(nonatomic) _Bool hasSequenceNumber;
- (int)StringAsSubscriptionsType:(id)arg1;	// IMP=0x0010000000043b1f
- (id)subscriptionsTypeAsString:(int)arg1;	// IMP=0x0010000000043aca
@property(nonatomic) _Bool hasSubscriptionsType;
@property(nonatomic) int subscriptionsType; // @synthesize subscriptionsType=_subscriptionsType;
- (id)appChannelSubscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000043a34
- (unsigned long long)appChannelSubscriptionsCount;	// IMP=0x0010000000043a17
- (void)addAppChannelSubscriptions:(id)arg1;	// IMP=0x00100000000439ad
- (void)clearAppChannelSubscriptions;	// IMP=0x0010000000043990
- (int)StringAsVersion:(id)arg1;	// IMP=0x001000000004396e
- (id)versionAsString:(int)arg1;	// IMP=0x0010000000043929
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

