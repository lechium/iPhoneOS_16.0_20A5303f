//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable
{
    NSMutableArray *_subscriptions;	// 8 = 0x8
}

+ (Class)subscriptionsType;	// IMP=0x001000000019aca7
- (void).cxx_destruct;	// IMP=0x000000000019b73a
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019b5e0
- (unsigned long long)hash;	// IMP=0x000000000019b5c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019b529
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019b366
- (void)copyTo:(id)arg1;	// IMP=0x000000000019b29f
- (void)writeTo:(id)arg1;	// IMP=0x000000000019b16f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019b162
- (id)dictionaryRepresentation;	// IMP=0x000000000019ad67
- (id)description;	// IMP=0x000000000019acb8
- (id)subscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019ac8a
- (unsigned long long)subscriptionsCount;	// IMP=0x000000000019ac6d
- (void)addSubscriptions:(id)arg1;	// IMP=0x000000000019ac03
- (void)clearSubscriptions;	// IMP=0x000000000019abe6

@end
