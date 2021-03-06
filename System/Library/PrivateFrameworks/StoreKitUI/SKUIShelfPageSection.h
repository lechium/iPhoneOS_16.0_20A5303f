//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSArray, NSString, SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementSlideshowController;
@protocol SKUIScrollViewDelegateObserver;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
    SKUIShelfPageSectionConfiguration *_configuration;	// 16 = 0x10
    long long _lastNeedsMoreCount;	// 24 = 0x18
    SKUIShelfViewElement *_shelfViewElement;	// 32 = 0x20
    SKUIViewElementSlideshowController *_slideshowController;	// 40 = 0x28
    NSArray *_viewElements;	// 48 = 0x30
    id <SKUIScrollViewDelegateObserver> _scrollViewDelegateObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b3c73
@property(nonatomic) __weak id <SKUIScrollViewDelegateObserver> scrollViewDelegateObserver; // @synthesize scrollViewDelegateObserver=_scrollViewDelegateObserver;
@property(readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadViewElementProperties;	// IMP=0x00000000000b3a7b
- (void)_performDefaultSelectActionForEffectiveViewElement:(id)arg1;	// IMP=0x00000000000b38de
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;	// IMP=0x00000000000b385a
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000b37c2
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000b3753
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000000000b36e4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000b3617
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000b35a8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000b34e1
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000b3436
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b3375
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x00000000000b3264
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b2f24
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x00000000000b2e3e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000b2dfa
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b2cc2
- (void)viewElementSlideshowWillDismiss:(id)arg1;	// IMP=0x00000000000b2c5b
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;	// IMP=0x00000000000b2c3b
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000b29c3
- (void)_setContext:(id)arg1;	// IMP=0x00000000000b294d
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000b2714
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000b240d
- (void)setTopSection:(_Bool)arg1;	// IMP=0x00000000000b23b7
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000000b230c
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;	// IMP=0x00000000000b2196
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000000000b2026
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000000b1efe
- (long long)numberOfCells;	// IMP=0x00000000000b1ee1
- (void)invalidateCachedLayoutInformation;	// IMP=0x00000000000b1e58
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1aee
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000000b1a1f
- (void)deselectItemsAnimated:(_Bool)arg1;	// IMP=0x00000000000b187d
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000b1785
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000b168d
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000000b161b
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000b1587
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000b1559
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000000b14c3
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000000b1428
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000b11aa
- (void)dealloc;	// IMP=0x00000000000b1115
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000b101e
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000b100a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIShelfPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

