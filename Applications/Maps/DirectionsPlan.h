//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class DirectionsPlanTransitPreferences, GEOStorageRouteRequestStorage, NSMutableArray, NSString;

@interface DirectionsPlan : PBCodable
{
    double _arrivalTime;	// 8 = 0x8
    unsigned long long _currentRouteIndex;	// 16 = 0x10
    unsigned long long _currentRouteStep;	// 24 = 0x18
    double _departureTime;	// 32 = 0x20
    double _expiryTime;	// 40 = 0x28
    NSString *_destinationString;	// 48 = 0x30
    int _displayMethod;	// 56 = 0x38
    unsigned int _earlierPagesLoaded;	// 60 = 0x3c
    NSMutableArray *_handlesForSharingETAs;	// 64 = 0x40
    unsigned int _laterPagesLoaded;	// 72 = 0x48
    NSString *_originString;	// 80 = 0x50
    NSMutableArray *_planningWaypoints;	// 88 = 0x58
    GEOStorageRouteRequestStorage *_routeRequestStorage;	// 96 = 0x60
    unsigned int _routesPerEarlierPage;	// 104 = 0x68
    unsigned int _routesPerInitialPage;	// 108 = 0x6c
    unsigned int _routesPerLaterPage;	// 112 = 0x70
    DirectionsPlanTransitPreferences *_transitPreferences;	// 120 = 0x78
    int _transitPrioritization;	// 128 = 0x80
    int _transitSurchargeOption;	// 132 = 0x84
    _Bool _avoidHighways;	// 136 = 0x88
    _Bool _avoidTolls;	// 137 = 0x89
    _Bool _isPlayingTrace;	// 138 = 0x8a
    _Bool _shouldRestoreLowGuidance;	// 139 = 0x8b
    struct {
        unsigned int arrivalTime:1;
        unsigned int currentRouteIndex:1;
        unsigned int currentRouteStep:1;
        unsigned int departureTime:1;
        unsigned int expiryTime:1;
        unsigned int displayMethod:1;
        unsigned int earlierPagesLoaded:1;
        unsigned int laterPagesLoaded:1;
        unsigned int routesPerEarlierPage:1;
        unsigned int routesPerInitialPage:1;
        unsigned int routesPerLaterPage:1;
        unsigned int transitPrioritization:1;
        unsigned int transitSurchargeOption:1;
        unsigned int avoidHighways:1;
        unsigned int avoidTolls:1;
        unsigned int isPlayingTrace:1;
        unsigned int shouldRestoreLowGuidance:1;
    } _has;	// 140 = 0x8c
}

+ (Class)handlesForSharingETAType;	// IMP=0x00100000005f5f5e
+ (Class)planningWaypointType;	// IMP=0x00100000005f5e8c
+ (id)_maps_expiryDateForRoute:(id)arg1;	// IMP=0x00100000001d37ce
- (void).cxx_destruct;	// IMP=0x00200000005f9718
@property(retain, nonatomic) NSMutableArray *handlesForSharingETAs; // @synthesize handlesForSharingETAs=_handlesForSharingETAs;
@property(retain, nonatomic) NSMutableArray *planningWaypoints; // @synthesize planningWaypoints=_planningWaypoints;
@property(nonatomic) _Bool avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(nonatomic) _Bool avoidTolls; // @synthesize avoidTolls=_avoidTolls;
@property(nonatomic) _Bool shouldRestoreLowGuidance; // @synthesize shouldRestoreLowGuidance=_shouldRestoreLowGuidance;
@property(nonatomic) _Bool isPlayingTrace; // @synthesize isPlayingTrace=_isPlayingTrace;
@property(nonatomic) double expiryTime; // @synthesize expiryTime=_expiryTime;
@property(nonatomic) int transitSurchargeOption; // @synthesize transitSurchargeOption=_transitSurchargeOption;
@property(nonatomic) unsigned int routesPerLaterPage; // @synthesize routesPerLaterPage=_routesPerLaterPage;
@property(nonatomic) unsigned int routesPerEarlierPage; // @synthesize routesPerEarlierPage=_routesPerEarlierPage;
@property(nonatomic) unsigned int laterPagesLoaded; // @synthesize laterPagesLoaded=_laterPagesLoaded;
@property(nonatomic) unsigned int earlierPagesLoaded; // @synthesize earlierPagesLoaded=_earlierPagesLoaded;
@property(nonatomic) unsigned int routesPerInitialPage; // @synthesize routesPerInitialPage=_routesPerInitialPage;
@property(retain, nonatomic) DirectionsPlanTransitPreferences *transitPreferences; // @synthesize transitPreferences=_transitPreferences;
@property(nonatomic) unsigned long long currentRouteStep; // @synthesize currentRouteStep=_currentRouteStep;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
@property(nonatomic) double arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(nonatomic) double departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) NSString *originString; // @synthesize originString=_originString;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000005f8fba
- (unsigned long long)hash;	// IMP=0x00100000005f8986
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005f847c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005f7e83
- (void)copyTo:(id)arg1;	// IMP=0x00100000005f7aa1
- (void)writeTo:(id)arg1;	// IMP=0x00100000005f75dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005f75d0
- (id)dictionaryRepresentation;	// IMP=0x00100000005f601e
- (id)description;	// IMP=0x00100000005f5f6f
- (id)handlesForSharingETAAtIndex:(unsigned long long)arg1;	// IMP=0x00100000005f5f41
- (unsigned long long)handlesForSharingETAsCount;	// IMP=0x00100000005f5f24
- (void)addHandlesForSharingETA:(id)arg1;	// IMP=0x00100000005f5eba
- (void)clearHandlesForSharingETAs;	// IMP=0x00100000005f5e9d
- (id)planningWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00100000005f5e6f
- (unsigned long long)planningWaypointsCount;	// IMP=0x00100000005f5e52
- (void)addPlanningWaypoint:(id)arg1;	// IMP=0x00100000005f5de8
- (void)clearPlanningWaypoints;	// IMP=0x00100000005f5dcb
@property(nonatomic) _Bool hasAvoidHighways;
@property(nonatomic) _Bool hasAvoidTolls;
@property(nonatomic) _Bool hasShouldRestoreLowGuidance;
@property(nonatomic) _Bool hasIsPlayingTrace;
@property(nonatomic) _Bool hasExpiryTime;
@property(nonatomic) _Bool hasTransitSurchargeOption;
- (int)StringAsTransitPrioritization:(id)arg1;	// IMP=0x00100000005f5b49
- (id)transitPrioritizationAsString:(int)arg1;	// IMP=0x00100000005f5b00
@property(nonatomic) _Bool hasTransitPrioritization;
@property(nonatomic) int transitPrioritization; // @synthesize transitPrioritization=_transitPrioritization;
@property(nonatomic) _Bool hasRoutesPerLaterPage;
@property(nonatomic) _Bool hasRoutesPerEarlierPage;
@property(nonatomic) _Bool hasLaterPagesLoaded;
@property(nonatomic) _Bool hasEarlierPagesLoaded;
@property(nonatomic) _Bool hasRoutesPerInitialPage;
@property(readonly, nonatomic) _Bool hasTransitPreferences;
- (int)StringAsDisplayMethod:(id)arg1;	// IMP=0x00100000005f586b
- (id)displayMethodAsString:(int)arg1;	// IMP=0x00100000005f5822
@property(nonatomic) _Bool hasDisplayMethod;
@property(nonatomic) int displayMethod; // @synthesize displayMethod=_displayMethod;
@property(nonatomic) _Bool hasCurrentRouteStep;
@property(nonatomic) _Bool hasCurrentRouteIndex;
@property(nonatomic) _Bool hasArrivalTime;
@property(nonatomic) _Bool hasDepartureTime;
@property(readonly, nonatomic) _Bool hasDestinationString;
@property(readonly, nonatomic) _Bool hasOriginString;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

