//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AutocompleteContext, CollectionsDataProvider, FeatureDiscoveryDataProvider, HomePhotoLookupDataProvider, HomeResultDataProvider, HomeSection, MarkedLocationDataProvider, NSArray, NSHashTable, NSMutableDictionary, NSObject, NSString, NSTimer, RecentsDataFilter, RecentsDataProvider, SharedTripsDataProvider, SuggestionsDataProvider, SuggestionsItemSource, UITableViewDiffableDataSource;
@protocol DeleteDelegate><MapsSuggestionsDeleteActionDelegate, HomeActionDelegate, HomeUpdateDelegate, OS_dispatch_queue, ParkedCarActionDelegate, PlaceCardActionDelegate, ShareDelegate, TransitPayActionDelegate, UGCPOIEnrichmentActionDelegate;

@interface HomeCellProvider
{
    FeatureDiscoveryDataProvider *_featureDiscoveryDataProvider;	// 8 = 0x8
    SuggestionsDataProvider *_suggestionsDataProvider;	// 16 = 0x10
    SharedTripsDataProvider *_sharedTripsDataProvider;	// 24 = 0x18
    HomePhotoLookupDataProvider *_photoLookupDataProvider;	// 32 = 0x20
    HomeResultDataProvider *_resultDataProvider;	// 40 = 0x28
    CollectionsDataProvider *_collectionsDataProvider;	// 48 = 0x30
    MarkedLocationDataProvider *_markedLocationDataProvider;	// 56 = 0x38
    RecentsDataProvider *_recentsDataProvider;	// 64 = 0x40
    RecentsDataFilter *_recentsDataFilter;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_recentsDataFilterQueue;	// 80 = 0x50
    NSArray *_homeSections;	// 88 = 0x58
    HomeSection *_suggestionsSection;	// 96 = 0x60
    HomeSection *_shortcutsSection;	// 104 = 0x68
    HomeSection *_curatedCollectionsSection;	// 112 = 0x70
    HomeSection *_collectionsSection;	// 120 = 0x78
    HomeSection *_recentsSection;	// 128 = 0x80
    HomeSection *_featureDiscoverySection;	// 136 = 0x88
    NSArray *_filteredRecents;	// 144 = 0x90
    AutocompleteContext *_analyticsContext;	// 152 = 0x98
    NSMutableDictionary *_pendingDeletions;	// 160 = 0xa0
    _Bool _needsResetFavoritesScrollOffset;	// 168 = 0xa8
    _Bool _needsResetCuratedCollectionsScrollOffset;	// 169 = 0xa9
    NSTimer *_initialSuggestionsTimer;	// 176 = 0xb0
    UITableViewDiffableDataSource *_diffableDataSource;	// 184 = 0xb8
    NSHashTable *_orthogonalSectionCells;	// 192 = 0xc0
    _Bool _appliedInitialUpdate;	// 200 = 0xc8
    _Bool _appliedActiveUpdate;	// 201 = 0xc9
    _Bool _needsUpdate;	// 202 = 0xca
    _Bool _animateNextUpdate;	// 203 = 0xcb
    NSArray *_keyCommands;	// 208 = 0xd0
    long long _viewMode;	// 216 = 0xd8
    id <HomeActionDelegate> _homeActionDelegate;	// 224 = 0xe0
    id <HomeUpdateDelegate> _homeUpdateDelegate;	// 232 = 0xe8
    id <ShareDelegate> _shareDelegate;	// 240 = 0xf0
    id <DeleteDelegate><MapsSuggestionsDeleteActionDelegate> _deleteDelegate;	// 248 = 0xf8
    id <PlaceCardActionDelegate> _placeCardActionDelegate;	// 256 = 0x100
    id <ParkedCarActionDelegate> _parkedCarActionDelegate;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0020000000616236
@property(nonatomic) __weak id <ParkedCarActionDelegate> parkedCarActionDelegate; // @synthesize parkedCarActionDelegate=_parkedCarActionDelegate;
@property(nonatomic) __weak id <PlaceCardActionDelegate> placeCardActionDelegate; // @synthesize placeCardActionDelegate=_placeCardActionDelegate;
@property(nonatomic) __weak id <DeleteDelegate><MapsSuggestionsDeleteActionDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) __weak id <HomeUpdateDelegate> homeUpdateDelegate; // @synthesize homeUpdateDelegate=_homeUpdateDelegate;
@property(nonatomic) __weak id <HomeActionDelegate> homeActionDelegate; // @synthesize homeActionDelegate=_homeActionDelegate;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
- (void)handleHomeSectionKeyCommand:(id)arg1;	// IMP=0x0010000000616045
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000615f4f
- (void)exploreGuidesButtonTapped;	// IMP=0x0010000000615f36
- (void)collectionsCarouselDidScrollBackward;	// IMP=0x0010000000615f1d
- (void)collectionsCarouselDidScrollForward;	// IMP=0x0010000000615f04
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x0010000000615eeb
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x0010000000615e57
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x0010000000615de2
- (void)proactiveCallToActionButtonViewTapped:(id)arg1;	// IMP=0x0010000000615a00
- (void)shortcutsRowTableViewCell:(id)arg1 openShortcut:(id)arg2;	// IMP=0x001000000061598b
- (void)shortcutsRowTableViewCellAddNewShortcut:(id)arg1;	// IMP=0x0010000000615938
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000061584b
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00100000006152a5
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00100000006151ab
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000615127
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000614f83
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000614f3d
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000614f2b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000614975
- (_Bool)_isTableViewHidden:(id)arg1;	// IMP=0x0010000000614899
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000614858
- (void)_processPendingDeletions;	// IMP=0x001000000061429f
- (void)_endDeletion:(id)arg1;	// IMP=0x001000000061412a
- (void)_beginDeletion:(id)arg1;	// IMP=0x001000000061330a
- (void)editLocationAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006130dc
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000612a38
- (void)deleteRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000612881
- (void)_deleteSharedTripWithSummary:(id)arg1 atIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000612565
- (void)_deleteCollection:(id)arg1 atIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000006121ec
- (id)editLocationContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000611f93
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000611e61
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000611d24
- (void)homeActionFooterViewDidTapTermsAndConditions:(id)arg1;	// IMP=0x0010000000611ce7
- (void)homeActionFooterViewDidTapReportAProblem:(id)arg1;	// IMP=0x0010000000611c97
- (void)homeActionFooterViewDidTapMarkMyLocation:(id)arg1;	// IMP=0x0010000000611c47
- (void)homeActionFooterViewDidTapShareMyLocation:(id)arg1;	// IMP=0x0010000000611bf7
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00100000006118ab
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00100000006117e5
- (void)_sectionHeaderButtonTappedWithHomeSection:(id)arg1;	// IMP=0x001000000061172b
- (void)_configureHeaderView:(id)arg1 inSection:(long long)arg2;	// IMP=0x0010000000611337
- (void)_configureVisibleHeaders;	// IMP=0x00100000006110f2
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000610f63
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000610d1b
- (void)_updateOrthogonalSectionCells;	// IMP=0x0010000000610beb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x001000000060f834
- (id)_snapshotWithOldHomeSections:(id)arg1 outDifference:(id *)arg2;	// IMP=0x001000000060f1cc
- (void)_captureCuratedCollectionAction:(int)arg1 withCollectionHandler:(id)arg2 verticalIndex:(unsigned long long)arg3;	// IMP=0x001000000060f11e
- (void)_captureHeaderActionWithHomeSection:(id)arg1;	// IMP=0x001000000060f0e0
- (void)_captureSuggestionDeleteActionWithEntry:(id)arg1 behaviour:(long long)arg2;	// IMP=0x001000000060ef7d
- (void)_captureDeleteActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000060ee2c
- (void)_captureShareActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000060ecd7
- (void)_captureTapActionWithObject:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000060e674
- (int)targetForDragAnalytics;	// IMP=0x001000000060e669
- (void)sendNoTypingACAnalyticsForSelectedAtIndexPath:(id)arg1;	// IMP=0x001000000060e4c7
- (id)objectsForAnalytics;	// IMP=0x001000000060e287
- (void)_updateRestaurantReservationAnalytics;	// IMP=0x001000000060df5f
- (void)_addAnalyticsInfo;	// IMP=0x001000000060dcb5
- (id)analyticsContext;	// IMP=0x001000000060dca0
- (void)_applySnapshotUpdateAndAnimateCells:(_Bool)arg1 animateTableView:(_Bool)arg2;	// IMP=0x001000000060d647
- (void)updateIfNeeded;	// IMP=0x001000000060d593
- (_Bool)_needsSnapshotUpdate;	// IMP=0x001000000060d53d
- (void)_setNeedsSnapshotUpdateAnimated:(_Bool)arg1;	// IMP=0x001000000060d241
- (void)_resetSnapshotUpdateState;	// IMP=0x001000000060d225
- (void)_initialSuggestionsTimerDidFire;	// IMP=0x001000000060d1d0
- (void)_updateInitialSuggestionsTimer;	// IMP=0x001000000060d132
- (_Bool)_isLoading;	// IMP=0x001000000060d0ca
- (id)_loadingDataProviders;	// IMP=0x001000000060d038
- (_Bool)_shouldShowHeaderForSection:(id)arg1;	// IMP=0x001000000060cfed
- (_Bool)_isEmptySection:(id)arg1;	// IMP=0x001000000060cf6b
- (id)_allObjects;	// IMP=0x001000000060ce45
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000060cd83
- (id)_objectsInSectionAtIndexPath:(id)arg1;	// IMP=0x001000000060ccbd
- (id)_homeSectionAtIndexPath:(id)arg1;	// IMP=0x001000000060cc89
- (id)_homeSectionWithType:(long long)arg1;	// IMP=0x001000000060cc01
- (long long)_dynamicIndexOfHomeSection:(id)arg1;	// IMP=0x001000000060ca23
- (id)_homeSectionAtDynamicIndex:(long long)arg1;	// IMP=0x001000000060c89d
- (id)_homeSectionAtStaticIndex:(long long)arg1;	// IMP=0x001000000060c839
- (_Bool)_shouldDisplayObject:(id)arg1;	// IMP=0x001000000060c712
- (void)_buildSections;	// IMP=0x001000000060b851
- (void)_getRecentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000060b3fb
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x001000000060b154
- (id)newTraits;	// IMP=0x001000000060b0c0
- (id)_suggestionCellModelForMapsSuggestionsEntry:(id)arg1;	// IMP=0x001000000060b02b
- (_Bool)_shouldShowEntryOfTypeVehicleSetup:(id)arg1;	// IMP=0x001000000060a816
- (id)_allDataProviders;	// IMP=0x001000000060a6c5
- (void)_createDataProviders;	// IMP=0x001000000060a39f
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate;
@property(nonatomic) __weak id <UGCPOIEnrichmentActionDelegate> poiEnrichmentActionDelegate;
- (void)resetScrollOffset;	// IMP=0x001000000060a128
@property(readonly, nonatomic) SuggestionsItemSource *suggestionsItemSource;
- (void)_fetchMissingImages;	// IMP=0x0010000000609ef3
- (void)setActive:(_Bool)arg1;	// IMP=0x0010000000609bc3
- (id)initWithTableView:(id)arg1 viewMode:(long long)arg2;	// IMP=0x0010000000609695
@property(readonly, nonatomic) double contentHeight;

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

