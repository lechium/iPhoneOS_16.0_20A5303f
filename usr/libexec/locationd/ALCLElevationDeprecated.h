//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    unsigned int _elevationDescended;	// 12 = 0xc
    int _gradeType;	// 16 = 0x10
    float _verticalSpeed;	// 20 = 0x14
    struct {
        unsigned int elevationDescended:1;
        unsigned int gradeType:1;
        unsigned int verticalSpeed:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float verticalSpeed; // @synthesize verticalSpeed=_verticalSpeed;
@property(nonatomic) unsigned int elevationDescended; // @synthesize elevationDescended=_elevationDescended;
@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000005d84e7
- (unsigned long long)hash;	// IMP=0x00100000005d838a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005d82cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005d8228
- (void)copyTo:(id)arg1;	// IMP=0x00100000005d81bf
- (void)writeTo:(id)arg1;	// IMP=0x00100000005d811d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005d8110
- (id)dictionaryRepresentation;	// IMP=0x00100000005d7c40
- (id)description;	// IMP=0x00100000005d7bc9
@property(nonatomic) _Bool hasVerticalSpeed;
- (int)StringAsGradeType:(id)arg1;	// IMP=0x00100000005d7af6
- (id)gradeTypeAsString:(int)arg1;	// IMP=0x00100000005d7abd
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) _Bool hasElevationDescended;

@end
