//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSChannelResponse : PBCodable
{
    unsigned long long _channelSubscriptionCheckpoint;	// 8 = 0x8
    NSData *_channelId;	// 16 = 0x10
    int _channelStatus;	// 24 = 0x18
    struct {
        unsigned int channelSubscriptionCheckpoint:1;
        unsigned int channelStatus:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000018e62
@property(nonatomic) unsigned long long channelSubscriptionCheckpoint; // @synthesize channelSubscriptionCheckpoint=_channelSubscriptionCheckpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000018dab
- (unsigned long long)hash;	// IMP=0x0010000000018d3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000018c56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000018ba0
- (void)copyTo:(id)arg1;	// IMP=0x0010000000018b1f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000018a90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000018a83
- (id)dictionaryRepresentation;	// IMP=0x0010000000018691
- (id)description;	// IMP=0x00100000000185e2
@property(nonatomic) _Bool hasChannelSubscriptionCheckpoint;
- (int)StringAsChannelStatus:(id)arg1;	// IMP=0x001000000001853a
- (id)channelStatusAsString:(int)arg1;	// IMP=0x00100000000184e5
@property(nonatomic) _Bool hasChannelStatus;
@property(nonatomic) int channelStatus; // @synthesize channelStatus=_channelStatus;
@property(readonly, nonatomic) _Bool hasChannelId;

@end

