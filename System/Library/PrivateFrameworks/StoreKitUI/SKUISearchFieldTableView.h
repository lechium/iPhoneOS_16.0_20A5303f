//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class SKUITrendingSearchPage, SKUITrendingSearchPageView, SKUITrendingSearchProvider;
@protocol SKUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISearchFieldTableView : UITableView
{
    SKUITrendingSearchPage *_page;	// 8 = 0x8
    SKUITrendingSearchPageView *_pageView;	// 16 = 0x10
    _Bool _trendingSearchesVisible;	// 24 = 0x18
    SKUITrendingSearchProvider *_trendingSearchProvider;	// 32 = 0x20
    id <SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000208ad9
@property(nonatomic) _Bool trendingSearchesVisible; // @synthesize trendingSearchesVisible=_trendingSearchesVisible;
@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider; // @synthesize trendingSearchProvider=_trendingSearchProvider;
- (void)_reloadView;	// IMP=0x00000000002088f8
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000002088a2
- (void)_reloadData;	// IMP=0x00000000002086ca
- (void)layoutSubviews;	// IMP=0x000000000020863a

@end
