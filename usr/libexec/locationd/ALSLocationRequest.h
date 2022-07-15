//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ALSMeta, NSMutableArray, NSString;

@interface ALSLocationRequest : PBRequest
{
    CDStruct_95bda58d _surroundingWifiBands;	// 8 = 0x8
    NSString *_appBundleId;	// 32 = 0x20
    NSMutableArray *_cdmaCellTowers;	// 40 = 0x28
    NSMutableArray *_cdmaEvdoTowers;	// 48 = 0x30
    NSMutableArray *_cellTowers;	// 56 = 0x38
    NSMutableArray *_lteCellTowers;	// 64 = 0x40
    ALSMeta *_meta;	// 72 = 0x48
    NSMutableArray *_nr5GCellTowers;	// 80 = 0x50
    int _numberOfSurroundingCdmaCells;	// 88 = 0x58
    int _numberOfSurroundingCdmaEvdoCells;	// 92 = 0x5c
    int _numberOfSurroundingCells;	// 96 = 0x60
    int _numberOfSurroundingLteCells;	// 100 = 0x64
    int _numberOfSurroundingNr5GCells;	// 104 = 0x68
    int _numberOfSurroundingScdmaCells;	// 108 = 0x6c
    int _numberOfSurroundingWifis;	// 112 = 0x70
    NSMutableArray *_scdmaCellTowers;	// 120 = 0x78
    int _wifiAltitudeScale;	// 128 = 0x80
    NSMutableArray *_wirelessAPs;	// 136 = 0x88
    struct {
        unsigned int numberOfSurroundingCdmaCells:1;
        unsigned int numberOfSurroundingCdmaEvdoCells:1;
        unsigned int numberOfSurroundingCells:1;
        unsigned int numberOfSurroundingLteCells:1;
        unsigned int numberOfSurroundingNr5GCells:1;
        unsigned int numberOfSurroundingScdmaCells:1;
        unsigned int numberOfSurroundingWifis:1;
        unsigned int wifiAltitudeScale:1;
    } _has;	// 144 = 0x90
}

+ (Class)nr5GCellTowerType;	// IMP=0x00200000007474f8
+ (Class)scdmaCellTowerType;	// IMP=0x00100000007473f8
+ (Class)lteCellTowerType;	// IMP=0x00100000007472f8
+ (Class)cdmaEvdoTowerType;	// IMP=0x00100000007471b5
+ (Class)cdmaCellTowerType;	// IMP=0x0010000000747100
+ (Class)wirelessAPType;	// IMP=0x0010000000746fa0
+ (Class)cellTowerType;	// IMP=0x0010000000746eeb
@property(retain, nonatomic) ALSMeta *meta; // @synthesize meta=_meta;
@property(nonatomic) int numberOfSurroundingNr5GCells; // @synthesize numberOfSurroundingNr5GCells=_numberOfSurroundingNr5GCells;
@property(retain, nonatomic) NSMutableArray *nr5GCellTowers; // @synthesize nr5GCellTowers=_nr5GCellTowers;
@property(nonatomic) int numberOfSurroundingScdmaCells; // @synthesize numberOfSurroundingScdmaCells=_numberOfSurroundingScdmaCells;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(nonatomic) int numberOfSurroundingLteCells; // @synthesize numberOfSurroundingLteCells=_numberOfSurroundingLteCells;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(nonatomic) int numberOfSurroundingCdmaEvdoCells; // @synthesize numberOfSurroundingCdmaEvdoCells=_numberOfSurroundingCdmaEvdoCells;
@property(nonatomic) int numberOfSurroundingCdmaCells; // @synthesize numberOfSurroundingCdmaCells=_numberOfSurroundingCdmaCells;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) int numberOfSurroundingCells; // @synthesize numberOfSurroundingCells=_numberOfSurroundingCells;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000074ae7f
- (unsigned long long)hash;	// IMP=0x001000000074ac10
- (_Bool);	// IMP=0x001000000074a874
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000749ed8
- (void)copyTo:(id)arg1;	// IMP=0x0010000000749993
- (Class)responseClass;	// IMP=0x0010000000749982
- (unsigned int)requestTypeCode;	// IMP=0x0010000000749977
- (void)writeTo:(id)arg1;	// IMP=0x001000000074924d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000749240
- (id)dictionaryRepresentation;	// IMP=0x0010000000747859
- (id)description;	// IMP=0x00100000007477e2
@property(readonly, nonatomic) _Bool hasMeta;
- (int)StringAsWifiAltitudeScale:(id)arg1;	// IMP=0x0010000000747781
- (id)wifiAltitudeScaleAsString:(int)arg1;	// IMP=0x0010000000747741
@property(nonatomic) _Bool hasWifiAltitudeScale;
@property(nonatomic) int wifiAltitudeScale; // @synthesize wifiAltitudeScale=_wifiAltitudeScale;
- (int)StringAsSurroundingWifiBands:(id)arg1;	// IMP=0x001000000074768a
- (id)surroundingWifiBandsAsString:(int)arg1;	// IMP=0x001000000074764a
- (void)setSurroundingWifiBands:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000747633
- (int)surroundingWifiBandsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000074759b
- (void)addSurroundingWifiBands:(int)arg1;	// IMP=0x0010000000747588
- (void)clearSurroundingWifiBands;	// IMP=0x0010000000747577
@property(readonly, nonatomic) int *surroundingWifiBands;
@property(readonly, nonatomic) unsigned long long surroundingWifiBandsCount;
@property(nonatomic) _Bool hasNumberOfSurroundingNr5GCells;
- (id)nr5GCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000007474db
- (unsigned long long)nr5GCellTowersCount;	// IMP=0x00100000007474be
- (void)addNr5GCellTower:(id)arg1;	// IMP=0x0010000000747471
- (void)clearNr5GCellTowers;	// IMP=0x0010000000747454
@property(nonatomic) _Bool hasNumberOfSurroundingScdmaCells;
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000007473db
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x00100000007473be
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x0010000000747371
- (void)clearScdmaCellTowers;	// IMP=0x0010000000747354
@property(nonatomic) _Bool hasNumberOfSurroundingLteCells;
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000007472db
- (unsigned long long)lteCellTowersCount;	// IMP=0x00100000007472be
- (void)addLteCellTower:(id)arg1;	// IMP=0x0010000000747271
- (void)clearLteCellTowers;	// IMP=0x0010000000747254
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaEvdoCells;
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaCells;
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000747198
- (unsigned long long)cdmaEvdoTowersCount;	// IMP=0x001000000074717b
- (void)addCdmaEvdoTower:(id)arg1;	// IMP=0x001000000074712e
- (void)clearCdmaEvdoTowers;	// IMP=0x0010000000747111
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000007470e3
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x00100000007470c6
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x0010000000747079
- (void)clearCdmaCellTowers;	// IMP=0x001000000074705c
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNumberOfSurroundingCells;
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000746f83
- (unsigned long long)wirelessAPsCount;	// IMP=0x0010000000746f66
- (void)addWirelessAP:(id)arg1;	// IMP=0x0010000000746f19
- (void)clearWirelessAPs;	// IMP=0x0010000000746efc
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000746ece
- (unsigned long long)cellTowersCount;	// IMP=0x0010000000746eb1
- (void)addCellTower:(id)arg1;	// IMP=0x0010000000746e64
- (void)clearCellTowers;	// IMP=0x0010000000746e47
- (void)dealloc;	// IMP=0x0010000000746d78

@end
