//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMenuDataSource
{
    _Bool _hasFetchedGenres;	// 8 = 0x8
    _Bool _hasFetchedRecentPurchases;	// 9 = 0x9
    _Bool _hasFetchedMovies;	// 10 = 0xa
    _Bool _hasFetchedShows;	// 11 = 0xb
    _Bool _hasRecentPurchases;	// 12 = 0xc
    _Bool _hasMovies;	// 13 = 0xd
    _Bool _hasShows;	// 14 = 0xe
    NSString *_ownerIdentifier;	// 16 = 0x10
    NSArray *_genres;	// 24 = 0x18
    VUIMediaAPIClient *_mediaClient;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003c114
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(nonatomic) _Bool hasShows; // @synthesize hasShows=_hasShows;
@property(nonatomic) _Bool hasMovies; // @synthesize hasMovies=_hasMovies;
@property(nonatomic) _Bool hasRecentPurchases; // @synthesize hasRecentPurchases=_hasRecentPurchases;
@property(nonatomic) _Bool hasFetchedShows; // @synthesize hasFetchedShows=_hasFetchedShows;
@property(nonatomic) _Bool hasFetchedMovies; // @synthesize hasFetchedMovies=_hasFetchedMovies;
@property(nonatomic) _Bool hasFetchedRecentPurchases; // @synthesize hasFetchedRecentPurchases=_hasFetchedRecentPurchases;
@property(nonatomic) _Bool hasFetchedGenres; // @synthesize hasFetchedGenres=_hasFetchedGenres;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void)_notifyDelegatesFetchDidComplete;	// IMP=0x000000000003be72
- (CDUnknownBlockType)_categoryTypesSortComparator;	// IMP=0x000000000003be50
- (id)_constructGenreMenuItems;	// IMP=0x000000000003bc8d
- (id)_constructMainMenuItems;	// IMP=0x000000000003bb8d
- (id)_constructVUIMenuDataSource;	// IMP=0x000000000003bb06
- (_Bool)_hasCompletedAllFetches;	// IMP=0x000000000003bac7
- (void)_fetchShows;	// IMP=0x000000000003b877
- (void)_fetchMovies;	// IMP=0x000000000003b627
- (void)_fetchRecentPurchases;	// IMP=0x000000000003b3d7
- (void)_fetchGenres;	// IMP=0x000000000003b19e
- (id)getGenreByGenreTitle:(id)arg1;	// IMP=0x000000000003afcb
- (void)startFetch;	// IMP=0x000000000003af83
- (id)initWithValidCategories:(id)arg1;	// IMP=0x000000000003aeb1

@end
