//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCPingMessage : PBCodable
{
    NSString *_uuid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e3be2
- (unsigned long long)hash;	// IMP=0x00100000000e3bab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e3b11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e3a99
- (void)writeTo:(id)arg1;	// IMP=0x00100000000e3a75
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000e3900
- (id)dictionaryRepresentation;	// IMP=0x00100000000e38a4
- (id)description;	// IMP=0x00100000000e37f5

@end

