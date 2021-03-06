//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface DirectionsPlanTransitPreferences : PBCodable
{
    _Bool _avoidBusRoutes;	// 8 = 0x8
    _Bool _avoidFerryRoutes;	// 9 = 0x9
    _Bool _avoidMetroLightRailRoutes;	// 10 = 0xa
    _Bool _avoidRailRoutes;	// 11 = 0xb
    struct {
        unsigned int avoidBusRoutes:1;
        unsigned int avoidFerryRoutes:1;
        unsigned int avoidMetroLightRailRoutes:1;
        unsigned int avoidRailRoutes:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool avoidFerryRoutes; // @synthesize avoidFerryRoutes=_avoidFerryRoutes;
@property(nonatomic) _Bool avoidRailRoutes; // @synthesize avoidRailRoutes=_avoidRailRoutes;
@property(nonatomic) _Bool avoidMetroLightRailRoutes; // @synthesize avoidMetroLightRailRoutes=_avoidMetroLightRailRoutes;
@property(nonatomic) _Bool avoidBusRoutes; // @synthesize avoidBusRoutes=_avoidBusRoutes;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000007d0419
- (unsigned long long)hash;	// IMP=0x00100000007d039a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007d026b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007d01bc
- (void)copyTo:(id)arg1;	// IMP=0x00100000007d0130
- (void)writeTo:(id)arg1;	// IMP=0x00100000007d007d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000007d0070
- (id)dictionaryRepresentation;	// IMP=0x00100000007cfb17
- (id)description;	// IMP=0x00100000007cfa68
@property(nonatomic) _Bool hasAvoidFerryRoutes;
@property(nonatomic) _Bool hasAvoidRailRoutes;
@property(nonatomic) _Bool hasAvoidMetroLightRailRoutes;
@property(nonatomic) _Bool hasAvoidBusRoutes;
- (long long)avoidedTransitModes;	// IMP=0x001000000041d608
- (id)initWithGEOTransitOptions:(id)arg1;	// IMP=0x001000000041d4e0

@end

