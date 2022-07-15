//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UICollectionViewLayout, VideosExtrasCarouselCollectionView;
@protocol VideosExtrasCarouselCollectionViewLayout, VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselViewController : UIViewController
{
    _Bool _revealingNavigationBarDuringTransition;	// 8 = 0x8
    id <VideosExtrasCarouselViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <VideosExtrasCarouselViewControllerDelegate> _delegate;	// 24 = 0x18
    VideosExtrasCarouselCollectionView *_carouselCollectionView;	// 32 = 0x20
    UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *_carouselCollectionViewLayout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000184585
@property(nonatomic, getter=isRevealingNavigationBarDuringTransition) _Bool revealingNavigationBarDuringTransition; // @synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition;
@property(retain, nonatomic) UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout; // @synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout;
@property(retain, nonatomic) VideosExtrasCarouselCollectionView *carouselCollectionView; // @synthesize carouselCollectionView=_carouselCollectionView;
@property(nonatomic) __weak id <VideosExtrasCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VideosExtrasCarouselViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_isPhone;	// IMP=0x0000000000184472
- (void)_updateWindowSizeForVisibleCells;	// IMP=0x00000000001842b3
- (void)_updateOpacityOfTextInVisibleCells;	// IMP=0x0000000000183e85
- (long long)_numberOfItems;	// IMP=0x0000000000183e32
- (void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2;	// IMP=0x00000000001837fe
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000183771
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001836e3
@property(nonatomic) unsigned long long indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;	// IMP=0x00000000001835a8
- (void)performZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x000000000018341c
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x0000000000183276
- (void)subviewsDidChangeForCarouselCollectionView:(id)arg1;	// IMP=0x000000000018323f
- (void)_snapTargetContentOffset:(inout struct CGPoint *)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint)arg3;	// IMP=0x0000000000182e75
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;	// IMP=0x0000000000182a30
- (void)_ensureScrollViewSnaps;	// IMP=0x0000000000182829
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000001827e8
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000018266a
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000182633
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000018261e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001824dc
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000182448
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001821bb
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001821a9
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000018219e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000182040
- (void)viewDidLoad;	// IMP=0x0000000000181c5f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000181b7b
- (void)dealloc;	// IMP=0x0000000000181af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
