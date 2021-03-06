//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionsDataProvider, CurrentLocationDataProvider, DistanceUnitDataProvider, HomeSearchResultsFilterItem, NSArray, NSString, SearchResultsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineSearchResultsSectionController
{
    SearchResultsDataProvider *_searchResultsDataProvider;	// 8 = 0x8
    CurrentLocationDataProvider *_currentLocationDataProvider;	// 16 = 0x10
    CollectionsDataProvider *_collectionsDataProvider;	// 24 = 0x18
    DistanceUnitDataProvider *_distanceUnitDataProvider;	// 32 = 0x20
    HomeSearchResultsFilterItem *_searchResultsFilterItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d65dd
- (void)didTapOnReportAnIssue;	// IMP=0x00100000000d64cf
- (void)relatedSearchSuggestionOutlineCellDidTapActionButtonWithSuggestion:(id)arg1;	// IMP=0x00100000000d64b2
- (void)venuesDropDownOutlineCell:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x00100000000d640f
- (void)didTapOnCuratedGuides:(id)arg1;	// IMP=0x00100000000d637f
- (void)didTapOnCuratedGuide:(id)arg1;	// IMP=0x00100000000d62ef
- (void)didTapOnUserGeneratedGuide:(id)arg1;	// IMP=0x00100000000d625f
- (void)didTapOnPlaceContextWithViewModel:(id)arg1 parentView:(id)arg2;	// IMP=0x00100000000d61cf
- (void)searchResultsFilterItem:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x00100000000d6111
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)_childItemsInVenueSearchResult:(id)arg1;	// IMP=0x00100000000d5edc
- (_Bool)_isItemVenue:(id)arg1;	// IMP=0x00100000000d5e57
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;	// IMP=0x00100000000d5e3a
- (void)presentVenueWithVenueCardItem:(id)arg1;	// IMP=0x00100000000d5caa
- (void)expandElementAtIdentifierPath:(id)arg1;	// IMP=0x00100000000d5be2
- (id)_searchResultContainingIdentifierPath:(id)arg1;	// IMP=0x00100000000d5a56
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x00100000000d5a4e
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000d4a8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

