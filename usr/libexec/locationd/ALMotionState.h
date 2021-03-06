//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALCLNatalieFeatures, ALCMMotionContextMotionState;

@interface ALMotionState : PBCodable
{
    double _timestamp;	// 8 = 0x8
    ALCMMotionContextMotionState *_motion;	// 16 = 0x10
    ALCLNatalieFeatures *_natalieFeatures;	// 24 = 0x18
    _Bool _regularEntry;	// 32 = 0x20
    CDStruct_b5306035 _has;	// 36 = 0x24
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(retain, nonatomic) ALCLNatalieFeatures *natalieFeatures; // @synthesize natalieFeatures=_natalieFeatures;
@property(retain, nonatomic) ALCMMotionContextMotionState *motion; // @synthesize motion=_motion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f22ed
- (unsigned long long)hash;	// IMP=0x00100000000f2172
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f2087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f1fb2
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f1f33
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f1ea5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f1e98
- (id)dictionaryRepresentation;	// IMP=0x00100000000f1a4a
- (id)description;	// IMP=0x00100000000f19d3
@property(readonly, nonatomic) _Bool hasNatalieFeatures;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;	// IMP=0x00100000000f1920

@end

