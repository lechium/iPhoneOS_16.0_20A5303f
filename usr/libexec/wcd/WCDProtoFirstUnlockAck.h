//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoFirstUnlockAck : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _acknowledgedState;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int acknowledgedState:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool acknowledgedState; // @synthesize acknowledgedState=_acknowledgedState;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000029f3a
- (unsigned long long)hash;	// IMP=0x0010000000029ef5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000029e32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000029db5
- (void)copyTo:(id)arg1;	// IMP=0x0010000000029d5b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000029ce9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000029cdc
- (id)dictionaryRepresentation;	// IMP=0x001000000002995d
- (id)description;	// IMP=0x00100000000298ae
@property(nonatomic) _Bool hasAcknowledgedState;
@property(nonatomic) _Bool hasVersion;

@end
