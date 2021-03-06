//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptionResponse : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_subscriptionChannelResponses;	// 16 = 0x10
    NSMutableArray *_unsubscriptionChannelResponses;	// 24 = 0x18
}

+ (Class)unsubscriptionChannelResponseType;	// IMP=0x0020000000070b0b
+ (Class)subscriptionChannelResponseType;	// IMP=0x0010000000070a39
- (void).cxx_destruct;	// IMP=0x0020000000071d0b
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannelResponses; // @synthesize unsubscriptionChannelResponses=_unsubscriptionChannelResponses;
@property(retain, nonatomic) NSMutableArray *subscriptionChannelResponses; // @synthesize subscriptionChannelResponses=_subscriptionChannelResponses;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000071a34
- (unsigned long long)hash;	// IMP=0x00100000000719c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000718cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000715c3
- (void)copyTo:(id)arg1;	// IMP=0x0010000000071440
- (void)writeTo:(id)arg1;	// IMP=0x0010000000071214
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000071207
- (id)dictionaryRepresentation;	// IMP=0x0010000000070bcb
- (id)description;	// IMP=0x0010000000070b1c
- (id)unsubscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000070aee
- (unsigned long long)unsubscriptionChannelResponsesCount;	// IMP=0x0010000000070ad1
- (void)addUnsubscriptionChannelResponse:(id)arg1;	// IMP=0x0010000000070a67
- (void)clearUnsubscriptionChannelResponses;	// IMP=0x0010000000070a4a
- (id)subscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000070a1c
- (unsigned long long)subscriptionChannelResponsesCount;	// IMP=0x00100000000709ff
- (void)addSubscriptionChannelResponse:(id)arg1;	// IMP=0x0010000000070995
- (void)clearSubscriptionChannelResponses;	// IMP=0x0010000000070978
@property(readonly, nonatomic) _Bool hasAppId;

@end

