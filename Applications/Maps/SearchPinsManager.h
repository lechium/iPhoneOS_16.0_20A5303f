//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CustomPOIsController, MKMapView, MapCameraController, MapSelectionManager, NSArray, NSHashTable, NSString, PlaceCardLinkedPlacesItemSource, RouteStartEndItemSource, SearchDotPlacesItemSource, SearchPinsManagerShowSearchResultsAnimation, SearchResult, SearchResultsDebugOverlay, SearchResultsItemSource, VKLabelMarker, VenuesManager;
@protocol POIShape, SearchPinsManagerDelegate;

@interface SearchPinsManager : NSObject
{
    SearchResult *_hiddenStartPin;	// 8 = 0x8
    SearchPinsManagerShowSearchResultsAnimation *_showSearchResultsAnimation;	// 16 = 0x10
    VKLabelMarker *_selectedLabelMarker;	// 24 = 0x18
    id <POIShape> _startPOIShape;	// 32 = 0x20
    NSArray *_endPOIShapes;	// 40 = 0x28
    NSHashTable *_poiShapeLoadingObservers;	// 48 = 0x30
    _Bool _useAlternateDirectionsPins;	// 56 = 0x38
    _Bool _hasAutoSelectedResult;	// 57 = 0x39
    SearchResult *_startPin;	// 64 = 0x40
    NSArray *_endPins;	// 72 = 0x48
    SearchResult *_droppedPin;	// 80 = 0x50
    SearchResultsItemSource *_searchResultsItemSource;	// 88 = 0x58
    SearchResultsItemSource *_droppedPinsItemSource;	// 96 = 0x60
    SearchResultsItemSource *_collectionPinsItemSource;	// 104 = 0x68
    SearchResultsItemSource *_singleSearchResultItemSource;	// 112 = 0x70
    id <SearchPinsManagerDelegate> _delegate;	// 120 = 0x78
    RouteStartEndItemSource *_routeStartEndItemSource;	// 128 = 0x80
    PlaceCardLinkedPlacesItemSource *_placeCardLinkedPlacesItemSource;	// 136 = 0x88
    SearchDotPlacesItemSource *_searchDotPlacesItemSource;	// 144 = 0x90
    MapCameraController *_mapCameraController;	// 152 = 0x98
    CustomPOIsController *_customPOIsController;	// 160 = 0xa0
    MapSelectionManager *_mapSelectionManager;	// 168 = 0xa8
    VenuesManager *_venuesManager;	// 176 = 0xb0
    SearchResultsDebugOverlay *_searchResultsDebugOverlay;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000007a93ba
@property(retain, nonatomic) SearchResultsDebugOverlay *searchResultsDebugOverlay; // @synthesize searchResultsDebugOverlay=_searchResultsDebugOverlay;
@property(nonatomic) __weak VenuesManager *venuesManager; // @synthesize venuesManager=_venuesManager;
@property(nonatomic) __weak MapSelectionManager *mapSelectionManager; // @synthesize mapSelectionManager=_mapSelectionManager;
@property(nonatomic) __weak CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(readonly, nonatomic) SearchDotPlacesItemSource *searchDotPlacesItemSource; // @synthesize searchDotPlacesItemSource=_searchDotPlacesItemSource;
@property(readonly, nonatomic) PlaceCardLinkedPlacesItemSource *placeCardLinkedPlacesItemSource; // @synthesize placeCardLinkedPlacesItemSource=_placeCardLinkedPlacesItemSource;
@property(readonly, nonatomic) RouteStartEndItemSource *routeStartEndItemSource; // @synthesize routeStartEndItemSource=_routeStartEndItemSource;
@property(nonatomic) __weak id <SearchPinsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SearchResultsItemSource *singleSearchResultItemSource; // @synthesize singleSearchResultItemSource=_singleSearchResultItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *collectionPinsItemSource; // @synthesize collectionPinsItemSource=_collectionPinsItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *droppedPinsItemSource; // @synthesize droppedPinsItemSource=_droppedPinsItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *searchResultsItemSource; // @synthesize searchResultsItemSource=_searchResultsItemSource;
@property(readonly, nonatomic) _Bool hasAutoSelectedResult; // @synthesize hasAutoSelectedResult=_hasAutoSelectedResult;
@property(readonly, nonatomic) _Bool useAlternateDirectionsPins; // @synthesize useAlternateDirectionsPins=_useAlternateDirectionsPins;
@property(readonly, nonatomic) SearchResult *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(readonly, nonatomic) NSArray *endPins; // @synthesize endPins=_endPins;
@property(readonly, nonatomic) SearchResult *startPin; // @synthesize startPin=_startPin;
- (_Bool)_canDroppedPinBeVisibleInVenue;	// IMP=0x00100000007a8fad
- (void)_updateDroppedPinVisibility;	// IMP=0x00100000007a8ec2
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;	// IMP=0x00100000007a8ea7
- (void)_addLoadedEndPOIShape:(id)arg1;	// IMP=0x00000000007a8e03
- (void)_startLoadingNewEndPOIShapes;	// IMP=0x00100000007a8553
- (void)_startLoadingNewStartPOIShape;	// IMP=0x00100000007a7cec
- (void)_notifyDidLoadStartPOIShape:(id)arg1 endPOIShapes:(id)arg2;	// IMP=0x00100000007a7948
- (void)_setEndPOIShapes:(id)arg1;	// IMP=0x00100000007a778a
- (void)_setStartPOIShape:(id)arg1;	// IMP=0x00100000007a75ec
- (void)removePOIShapeLoadingObserver:(id)arg1;	// IMP=0x00100000007a7496
- (void)addPOIShapeLoadingObserver:(id)arg1;	// IMP=0x00100000007a7340
@property(readonly, nonatomic) NSArray *endPOIShapesIfLoaded;
@property(readonly, nonatomic) id <POIShape> startPOIShapeIfLoaded;
- (void)clearLinkedPlacesAndPolygon;	// IMP=0x00100000007a7249
- (void)showLinkedPlacesAndPolygonForPlaceCardItem:(id)arg1;	// IMP=0x00100000007a7179
- (void)mapSelectionManagerDidDeselectSearchResult:(id)arg1;	// IMP=0x00100000007a70ac
- (void)selectAndShowSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007a6cc9
- (void)dropPinsForSearchResults:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00100000007a6cb2
- (void)dropPinsForSearchResults:(id)arg1 searchDotPlaces:(id)arg2 selectedSearchResult:(id)arg3 animate:(_Bool)arg4 itemSource:(id)arg5;	// IMP=0x00100000007a6916
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(_Bool)arg3;	// IMP=0x00100000007a68eb
- (void)selectLabelMarkerForSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007a66b4
@property(readonly, nonatomic) struct UIEdgeInsets carRecommendedMapPadding;
- (void)_completeShowSearchResultsAnimation;	// IMP=0x00100000007a665b
- (void)_clearShowSearchResultsAnimation;	// IMP=0x00100000007a6465
- (void)mapViewDidBecomeFullyDrawn;	// IMP=0x00100000007a6301
- (void)_animateShowingSearchResults:(id)arg1 selectedSearchResult:(id)arg2 historyItem:(id)arg3 suggestedMapRegion:(id)arg4 minZoom:(id)arg5 maxZoom:(id)arg6 disableAdditionalViewportPadding:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000007a5e53
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 historyItem:(id)arg4 animated:(_Bool)arg5 itemSource:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000007a50c8
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000007a50a0
- (void)setCollectionsPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00100000007a5079
- (void)setSingleSearchPinFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 historyItem:(id)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000007a5051
- (_Bool)_isShowingDirectionsPins;	// IMP=0x00100000007a4fe5
- (void)clearCollectionPins;	// IMP=0x00100000007a4b7b
- (void)clearSingleResultPins;	// IMP=0x00100000007a469f
- (void)clearDroppedPin;	// IMP=0x00100000007a439b
- (void)clearSearchPins;	// IMP=0x00100000007a3fd0
- (void)clearDirectionsPins;	// IMP=0x00100000007a3dfc
- (void)_clearEndPins;	// IMP=0x00100000007a3b39
- (void)_clearStartPin;	// IMP=0x00100000007a398e
@property(nonatomic) _Bool disableStartEndPins;
- (_Bool)canSelectPin:(id)arg1;	// IMP=0x00100000007a384a
- (void)selectDroppedPinIsAnimated:(_Bool)arg1;	// IMP=0x00100000007a3763
- (void)setDroppedPin:(id)arg1 animated:(_Bool)arg2 shouldSelect:(_Bool)arg3;	// IMP=0x00100000007a35ef
- (void)setStartPin:(id)arg1 endPins:(id)arg2 useAlternateDirectionsPins:(_Bool)arg3;	// IMP=0x00100000007a2bd7
- (void)setStartPin:(id)arg1 endPin:(id)arg2 useAlternateDirectionsPins:(_Bool)arg3;	// IMP=0x00100000007a2ac5
- (void)setStartPin:(id)arg1 endPins:(id)arg2;	// IMP=0x00100000007a2ab0
- (void)setStartPin:(id)arg1 endPin:(id)arg2;	// IMP=0x00100000007a2a9b
- (void)setSearchPins:(id)arg1 selectedPin:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000007a26d1
@property(readonly, nonatomic) SearchResult *endPin;
- (id)_setOfPinsForPinType:(unsigned long long)arg1;	// IMP=0x00100000007a257b
- (id)allSearchResults;	// IMP=0x00100000007a2565
@property(readonly, nonatomic) MKMapView *mapView;
- (void)dealloc;	// IMP=0x00100000007a213c
- (id)initWithMapViewCameraController:(id)arg1;	// IMP=0x00100000007a1e6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
