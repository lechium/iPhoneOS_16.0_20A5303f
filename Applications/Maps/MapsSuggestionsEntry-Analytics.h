//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsEntry.h>

@class GEOFeatureStyleAttributes, MKMapItem, NSArray, NSString, UIImage;

@interface MapsSuggestionsEntry (Analytics)
+ (id)iconForSuggestionType:(long long)arg1 suggestionAttributes:(id)arg2 mapItemAttributes:(id)arg3 originBundleID:(id)arg4 screenScale:(double)arg5 showEVChargingIcon:(_Bool)arg6 showOnboardingMultipleVehiclesIcon:(_Bool)arg7 inverted:(_Bool)arg8 isDashboardWidget:(_Bool)arg9 nightMode:(_Bool)arg10;	// IMP=0x001000000083f5a3
+ (id)sharedDefaults;	// IMP=0x0010000000990450
+ (void)removeStaleArchivedDestinations;	// IMP=0x001000000098fafd
+ (id)archivedDestinationForUniqueID:(id)arg1;	// IMP=0x001000000098f861
+ (id)__debug_fakeHomeEntry;	// IMP=0x0010000000afd2a8
@property(readonly, nonatomic) int proactiveItemType;
- (void)updateModel:(id)arg1;	// IMP=0x0010000000383459
@property(readonly) _Bool isHybridEngineType;
@property(readonly) int engineType;
@property(readonly, nonatomic, getter=hasVibrantBackground) _Bool vibrantBackground;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) NSArray *waypoints;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(retain, nonatomic) UIImage *icon;
@property(readonly, nonatomic) MKMapItem *MKMapItem;
- (id)notificationDetailsWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x001000000099032d
- (void)archiveDestination;	// IMP=0x001000000098fefe
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

