//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006816dd
- (unsigned long long)hash;	// IMP=0x00100000006816b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000681656
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006815f2
- (void)copyTo:(id)arg1;	// IMP=0x00100000006815cc
- (void)writeTo:(id)arg1;	// IMP=0x00100000006815a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000681593
- (id)dictionaryRepresentation;	// IMP=0x0010000000681344
- (id)description;	// IMP=0x00100000006812cd
@property(nonatomic) _Bool hasMac;

@end

