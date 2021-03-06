//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MKMapItem;
@protocol VenueCategoryContentDownloaderDelegate;

@interface VenueCategoryContentDownloader : NSObject
{
    _Bool _currentSearchShouldFrameMapViewport;	// 8 = 0x8
    id <VenueCategoryContentDownloaderDelegate> _delegate;	// 16 = 0x10
    MKMapItem *_mapItem;	// 24 = 0x18
    GEOSearchCategory *_searchCategory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004fbeb7
@property(nonatomic) _Bool currentSearchShouldFrameMapViewport; // @synthesize currentSearchShouldFrameMapViewport=_currentSearchShouldFrameMapViewport;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <VenueCategoryContentDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchDidReceiveAutoCompleteSubcategories:(id)arg1;	// IMP=0x00100000004fbd9c
- (void)searchDidReceiveResults:(id)arg1;	// IMP=0x00100000004fbd20
- (void)searchDidCancel;	// IMP=0x00100000004fbcd4
- (void)searchDidFail;	// IMP=0x00100000004fbc88
- (void)searchWillStart;	// IMP=0x00100000004fbc3c
- (void)performSearchWithVenueCategoryItem:(id)arg1 actionCoordination:(id)arg2;	// IMP=0x00100000004fbb66
- (void)performSearchWithSearchCategory:(id)arg1 subcategoriesType:(int)arg2 filter:(id)arg3 shouldFrameMapViewport:(_Bool)arg4 actionCoordination:(id)arg5;	// IMP=0x00100000004fb97b
- (void)fetchVenueMapItemWithBusinessID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fb789
- (id)initWithDelegate:(id)arg1 venueAutoCompleteCategoryCardItem:(id)arg2;	// IMP=0x00100000004fb5a9
- (id)initWithDelegate:(id)arg1 venueCategoryCardItem:(id)arg2;	// IMP=0x00100000004fb4c7

@end

