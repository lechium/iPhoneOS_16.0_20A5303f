//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSArray, NSIndexPath, NSObject, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, SKUIViewElementLayoutContext, UICollectionView;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageSection : SKUIStorePageSection
{
    UICollectionView *_carouselCollectionView;	// 8 = 0x8
    long long _cellCount;	// 16 = 0x10
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cycleTimer;	// 32 = 0x20
    struct CGSize _itemSize;	// 40 = 0x28
    double _itemSpacing;	// 56 = 0x38
    SKUIMissingItemLoader *_missingItemLoader;	// 64 = 0x40
    NSArray *_modelObjects;	// 72 = 0x48
    _Bool _needsHeightCalculation;	// 80 = 0x50
    _Bool _needsReload;	// 81 = 0x51
    double _itemWidth;	// 88 = 0x58
    long long _progressIndicatorCellIndex;	// 96 = 0x60
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;	// 104 = 0x68
    NSIndexPath *_reloadIndexPath;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000efec5
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000efe07
- (void)_startCycleTimerIfNecessary;	// IMP=0x00000000000efc0b
- (void)_reloadViewElementProperties;	// IMP=0x00000000000efa4a
- (void)_reloadLegacySizing;	// IMP=0x00000000000ef96b
- (id)_missingItemLoader;	// IMP=0x00000000000ef8a4
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;	// IMP=0x00000000000ef812
- (double)_legacyItemSpacing;	// IMP=0x00000000000ef6fc
- (struct CGSize)_legacyItemSize;	// IMP=0x00000000000ef564
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;	// IMP=0x00000000000ef471
- (_Bool)_indexPathIsProgressIndicator:(id)arg1;	// IMP=0x00000000000ef431
- (void)_fireCycleTimer;	// IMP=0x00000000000ef317
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000ef1a4
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000ef112
- (long long)_currentPageIndex;	// IMP=0x00000000000ef013
- (Class)_cellClassForViewElement:(id)arg1;	// IMP=0x00000000000eef6e
- (Class)_cellClassForLockup:(id)arg1;	// IMP=0x00000000000eef30
- (id)_carouselCollectionView;	// IMP=0x00000000000eec67
- (void)_cancelCycleTimer;	// IMP=0x00000000000eec2d
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;	// IMP=0x00000000000eeba0
- (double)_actualContentWidth;	// IMP=0x00000000000eeb49
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000eeb0f
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000eea00
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000ee8ef
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000ee7be
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000ee6cc
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ee6b7
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ee6a2
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ee471
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x00000000000ee292
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000ee281
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ee006
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x00000000000edf8d
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000edd61
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000ed78a
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000ece7d
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000000eccfc
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000000eca3a
- (long long)numberOfCells;	// IMP=0x00000000000ec9ee
- (void)invalidateCachedLayoutInformation;	// IMP=0x00000000000ec95b
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000000ec746
- (long long)defaultItemPinningStyle;	// IMP=0x00000000000ec6fd
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ec5e9
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ec4d8
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000ec149
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000ebd70
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000000ebc58
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000000ebab0
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000eb82b
- (void)dealloc;	// IMP=0x00000000000eb799
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000eb74d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUICarouselPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
