//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, CNContact, GEOMapItemCorrectedLocationAttributes, MKMapItem, MapsLocationOfInterest, NSString, SearchResult, VKEVChargeStationRouteWaypoint;
@protocol PersonalizedItem, RAPPlace, _MKPlaceItem;

@interface PlaceCardItem : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    _Bool _isDroppedPin;	// 16 = 0x10
    _Bool _isCurrentLocation;	// 17 = 0x11
    _Bool _isIntermediateMapItem;	// 18 = 0x12
    id <PersonalizedItem> _personalizedItem;	// 24 = 0x18
    AddressBookAddress *_address;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;	// 48 = 0x30
    MapsLocationOfInterest *_locationOfInterest;	// 56 = 0x38
    VKEVChargeStationRouteWaypoint *_chargeStationWaypointInfo;	// 64 = 0x40
    struct CGRect _calloutAnchorRect;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingMapItem;	// IMP=0x00400000007d78b9
- (void).cxx_destruct;	// IMP=0x00100000007d8412
@property(nonatomic) struct CGRect calloutAnchorRect; // @synthesize calloutAnchorRect=_calloutAnchorRect;
@property(readonly, nonatomic) VKEVChargeStationRouteWaypoint *chargeStationWaypointInfo; // @synthesize chargeStationWaypointInfo=_chargeStationWaypointInfo;
@property(retain, nonatomic) MapsLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property(readonly, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes; // @synthesize correctedLocationAttributes=_correctedLocationAttributes;
@property(nonatomic) _Bool isIntermediateMapItem; // @synthesize isIntermediateMapItem=_isIntermediateMapItem;
@property(readonly, nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(readonly, nonatomic) _Bool isDroppedPin; // @synthesize isDroppedPin=_isDroppedPin;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) id <PersonalizedItem> personalizedItem; // @synthesize personalizedItem=_personalizedItem;
@property(readonly, nonatomic) NSString *customLabel;
@property(readonly, nonatomic) _Bool shouldShowEditNameAction;
@property(readonly, nonatomic) long long addressType;
@property(readonly, nonatomic) _Bool isHomeWorkSchoolAddress;
@property(readonly, nonatomic) NSString *defaultFavoritesTitle;
@property(readonly, nonatomic) _Bool canAddToFavorites;
@property(readonly, nonatomic) _Bool isMeCard;
@property(readonly, nonatomic) _Bool shouldInsertInHistoryForRAPTrackingOnly;
@property(readonly, nonatomic) _Bool shouldInsertInHistory;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) NSString *title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007d7c93
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) id <RAPPlace> rapPlace;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007d7914
- (id)initWithPersonalizedItem:(id)arg1;	// IMP=0x00100000007d7782
- (id)initWithLocationOfInterest:(id)arg1;	// IMP=0x00100000007d7570
- (id)initWithMapItem:(id)arg1 chargeStationWaypointInfo:(id)arg2;	// IMP=0x00100000007d7511
- (id)initWithMapItem:(id)arg1 address:(id)arg2;	// IMP=0x00100000007d748c
- (id)initWithSearchResult:(id)arg1;	// IMP=0x00100000007d7321
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000007d726d
- (id)init;	// IMP=0x00100000007d725f
- (id)_venueIdentifier;	// IMP=0x001000000041d37c
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

