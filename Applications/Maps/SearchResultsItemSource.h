//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SearchResultsItemSource
{
    NSArray *_allItems;	// 8 = 0x8
    NSMapTable *_allSearchResults;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lockQueue;	// 24 = 0x18
    _Bool _shouldHideSearchResults;	// 32 = 0x20
    NSArray *_searchResults;	// 40 = 0x28
    unsigned long long _mode;	// 48 = 0x30
    long long _preferredDisplayedSearchResultType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000008bc57e
@property(nonatomic) long long preferredDisplayedSearchResultType; // @synthesize preferredDisplayedSearchResultType=_preferredDisplayedSearchResultType;
@property(nonatomic) _Bool shouldHideSearchResults; // @synthesize shouldHideSearchResults=_shouldHideSearchResults;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (id)description;	// IMP=0x00100000008bc48f
- (id)keysForSearchResult:(id)arg1;	// IMP=0x00100000008bc0ab
- (void)_updateSearchResults:(id)arg1;	// IMP=0x00100000008bbb7a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000008bb752
- (id)allItems;	// IMP=0x00100000008bb62c
- (void)dealloc;	// IMP=0x00100000008bb4cf
- (id)init;	// IMP=0x00100000008bb446

@end
