//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface LogTransactions : PBCodable
{
    NSMutableArray *_transactionIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0010000000294fec
- (unsigned long long)hash;	// IMP=0x0010000000294fcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000294f35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000294d98
- (void)writeTo:(id)arg1;	// IMP=0x0010000000294c68
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000294aeb
- (id)dictionaryRepresentation;	// IMP=0x0010000000294a8f
- (id)description;	// IMP=0x00100000002949e0
- (id)formattedText;	// IMP=0x0010000000150537

@end
