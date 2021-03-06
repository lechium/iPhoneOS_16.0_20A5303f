//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapItem.h>

@class NSArray, NSString, NSUUID, PersonalizedCompoundItem;

@interface MKMapItem (PersonalizedCompoundItem)
+ (id)_maps_markerImageForMapItem:(id)arg1 scale:(double)arg2 size:(unsigned long long)arg3 useMarkerFallback:(_Bool)arg4;	// IMP=0x001000000076b908
+ (id)searchResultsForMapItems:(id)arg1 options:(id)arg2;	// IMP=0x00100000008cad7d
+ (id)searchResultsForMapItems:(id)arg1;	// IMP=0x00100000008cad62
+ (id)carMapItemFromDestination:(id)arg1;	// IMP=0x0010000000b09b4d
@property(nonatomic) __weak PersonalizedCompoundItem *personalizedCompoundItem;
- (void)updateModel:(id)arg1;	// IMP=0x0010000000382245
- (id)_car_addressFormattedAsStreetOnly;	// IMP=0x00100000003860b2
- (id)_maps_externalDeviceDictionaryRepresentation;	// IMP=0x00100000004318f0
- (id)notificationDisplayName;	// IMP=0x001000000043c089
- (_Bool)_maps_isIncompleteVenueSearchResult;	// IMP=0x00100000004eef31
- (_Bool)_maps_isVenueOrBuilding;	// IMP=0x00100000004eef0a
@property(readonly, nonatomic) NSArray *venueAreaIdentifiers;
- (id)_maps_stateAndCountry;	// IMP=0x0010000000532a7d
- (id)_maps_placeAreaNameWithDefaultName:(id)arg1;	// IMP=0x00100000005328bc
- (id)_maps_placeTitleWithDefaultTitle:(id)arg1;	// IMP=0x0010000000532771
- (_Bool)_maps_isLargeAreaPlace;	// IMP=0x0010000000532718
- (id)_maps_distanceStringFromDetourInformation;	// IMP=0x001000000072e031
- (id)_maps_detourTextForIdiom:(long long)arg1;	// IMP=0x001000000072dead
@property(readonly, nonatomic) NSUUID *locationOfInterestIdentifier;
- (id)_maps_defaultFavoritesTitle;	// IMP=0x001000000076c214
- (_Bool)_maps_canRenameFavorite;	// IMP=0x001000000076c175
- (_Bool)_maps_canAddToFavorites;	// IMP=0x001000000076c104
- (_Bool)_maps_isParkedCar;	// IMP=0x001000000076c015
- (_Bool)_maps_isSchool;	// IMP=0x001000000076be90
- (_Bool)_maps_isWork;	// IMP=0x001000000076bd0b
- (_Bool)_maps_isHome;	// IMP=0x000000000076bb86
- (_Bool)_maps_isHomeWorkOrSchool;	// IMP=0x001000000076bb39
- (id)_maps_styleAttributesForMapItem;	// IMP=0x001000000076ba7d
- (id)_maps_intentsRestaurant;	// IMP=0x00100000007e793d
@property(readonly, nonatomic) _Bool needsAdditionalNavData;
@property(readonly, nonatomic) struct CLLocationCoordinate2D closeUpViewCoordinate;
- (id)_maps_diffableDataSourceIdentifier;	// IMP=0x0010000000b19519
- (id)_flyoverAnnouncementMessageWithDefaultTitle:(id)arg1;	// IMP=0x0010000000b51cb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

