//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UICollectionViewDiffableDataSource, VUILibraryMediaCollectionViewModel, VUIMediaCollection, VUIMediaEntitiesDataSource, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaCollectionViewController
{
    _Bool _canShowMultipleSeasons;	// 8 = 0x8
    _Bool _seasonsFetchHasCompleted;	// 9 = 0x9
    _Bool _episodesFetchHasCompleted;	// 10 = 0xa
    VUIMediaCollection *_mediaCollection;	// 16 = 0x10
    VUIViewControllerContentPresenter *_contentPresenter;	// 24 = 0x18
    NSArray *_seasons;	// 32 = 0x20
    NSArray *_episodes;	// 40 = 0x28
    NSArray *_episodeGroups;	// 48 = 0x30
    VUILibraryMediaCollectionViewModel *_mediaCollectionViewModel;	// 56 = 0x38
    NSString *_showTitle;	// 64 = 0x40
    VUIMediaEntitiesDataSource *_seasonsDataSource;	// 72 = 0x48
    VUIMediaEntitiesDataSource *_episodesDataSource;	// 80 = 0x50
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002b356b
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) _Bool episodesFetchHasCompleted; // @synthesize episodesFetchHasCompleted=_episodesFetchHasCompleted;
@property(nonatomic) _Bool seasonsFetchHasCompleted; // @synthesize seasonsFetchHasCompleted=_seasonsFetchHasCompleted;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *episodesDataSource; // @synthesize episodesDataSource=_episodesDataSource;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // @synthesize seasonsDataSource=_seasonsDataSource;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel; // @synthesize mediaCollectionViewModel=_mediaCollectionViewModel;
@property(retain, nonatomic) NSArray *episodeGroups; // @synthesize episodeGroups=_episodeGroups;
@property(retain, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) VUIMediaCollection *mediaCollection; // @synthesize mediaCollection=_mediaCollection;
@property(nonatomic) _Bool canShowMultipleSeasons; // @synthesize canShowMultipleSeasons=_canShowMultipleSeasons;
- (_Bool)_allFetchesHaveCompleted;	// IMP=0x00000000002b3360
- (void)addDownloadButtonToProductLockupView:(id)arg1 forSeason:(id)arg2;	// IMP=0x00000000002b3117
- (id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2;	// IMP=0x00000000002b30ab
- (void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2;	// IMP=0x00000000002b3030
- (void)_updateProductLockupViewWithSeasonIdentifier:(id)arg1;	// IMP=0x00000000002b2f28
- (id)_productLockupViewWithSeason:(id)arg1;	// IMP=0x00000000002b2e8d
- (void)_updateMediaCollectionViewModelForSeasons;	// IMP=0x00000000002b2984
- (void)_buildMediaCollectionViewModel;	// IMP=0x00000000002b2944
- (_Bool)_usingEpisodesGroupFetch;	// IMP=0x00000000002b28d2
- (id)_episodesBySeasonIdentifier;	// IMP=0x00000000002b26e4
- (void)_updateDeletedContentErrorMessage;	// IMP=0x00000000002b24ff
- (void)_updateAfterContentWasManuallyDeleted:(_Bool)arg1;	// IMP=0x00000000002b2442
- (void)_updateEpisodeShelvesWithLatestEpisodes;	// IMP=0x00000000002b20de
- (id)_seasonViewModelByIdentifier:(id)arg1;	// IMP=0x00000000002b1ee5
- (id)_seasonViewModelIdentifiers;	// IMP=0x00000000002b1cf2
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x00000000002b1bae
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;	// IMP=0x00000000002b146f
- (void)titleButtonPressedForStoreId:(id)arg1;	// IMP=0x00000000002b13b7
- (void)libraryEpisodesShelfViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;	// IMP=0x00000000002b1328
- (void)contentDescriptionExpanded;	// IMP=0x00000000002b12be
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002b11b6
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x00000000002b0b4d
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000002b0aab
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000002b0aa2
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000002b05e7
- (void)start;	// IMP=0x00000000002b0459
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x00000000002b039c
- (void)viewDidLoad;	// IMP=0x00000000002b02ac
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002b01e3
- (void)loadView;	// IMP=0x00000000002b0172
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002b0125
- (id)initWithTitle:(id)arg1 withSeasonsDataSource:(id)arg2 withEpisodesDataSource:(id)arg3;	// IMP=0x00000000002b0023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

