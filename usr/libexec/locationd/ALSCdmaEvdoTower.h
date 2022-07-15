//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation, NSString;

@interface ALSCdmaEvdoTower : PBCodable
{
    int _bandclass;	// 8 = 0x8
    int _channel;	// 12 = 0xc
    ALSLocation *_location;	// 16 = 0x10
    int _pnoffset;	// 24 = 0x18
    NSString *_sectorid;	// 32 = 0x20
    struct {
        unsigned int bandclass:1;
        unsigned int channel:1;
        unsigned int pnoffset:1;
    } _has;	// 40 = 0x28
}

@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int bandclass; // @synthesize bandclass=_bandclass;
@property(retain, nonatomic) NSString *sectorid; // @synthesize sectorid=_sectorid;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000072cd57
- (unsigned long long)hash;	// IMP=0x001000000072cca2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000072cb9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000072caa2
- (void)copyTo:(id)arg1;	// IMP=0x001000000072c9f4
- (void)writeTo:(id)arg1;	// IMP=0x001000000072c931
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000072c924
- (id)dictionaryRepresentation;	// IMP=0x001000000072c3f5
- (id)description;	// IMP=0x001000000072c37e
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasPnoffset;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasBandclass;
@property(readonly, nonatomic) _Bool hasSectorid;
- (void)dealloc;	// IMP=0x001000000072c224

@end
