//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIToolbar.h>

@class NSIndexPath, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, _UIBackdropView;
@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewScrubber : UIToolbar
{
    _Bool __ignoreScrollViewDidScrollUpdate;	// 8 = 0x8
    _Bool __performingInteractiveUpdate;	// 9 = 0x9
    id <PUReviewScrubberDataSource> _dataSource;	// 16 = 0x10
    id <PUReviewScrubberDelegate> _scrubberDelegate;	// 24 = 0x18
    NSIndexPath *_selectedIndexPath;	// 32 = 0x20
    Class _scrubberCellClass;	// 40 = 0x28
    _UIBackdropView *__backdropView;	// 48 = 0x30
    UIImageView *__shadowView;	// 56 = 0x38
    UIImageView *__arrowImageView;	// 64 = 0x40
    PUHorizontalCollectionViewLayout *__collectionViewLayout;	// 72 = 0x48
    UICollectionView *__collectionView;	// 80 = 0x50
    NSString *_cellReuseIdentifier;	// 88 = 0x58
    UITapGestureRecognizer *__tapGestureRecognizer;	// 96 = 0x60
    UIImpactFeedbackGenerator *__impactFeedbackBehavior;	// 104 = 0x68
    NSIndexPath *__indexPathForPreviousFeedbackQuery;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000405ff5
@property(retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery; // @synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *_impactFeedbackBehavior; // @synthesize _impactFeedbackBehavior=__impactFeedbackBehavior;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) _Bool _performingInteractiveUpdate; // @synthesize _performingInteractiveUpdate=__performingInteractiveUpdate;
@property(readonly, nonatomic) _Bool _ignoreScrollViewDidScrollUpdate; // @synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate;
@property(retain, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UIImageView *_arrowImageView; // @synthesize _arrowImageView=__arrowImageView;
@property(readonly, nonatomic) UIImageView *_shadowView; // @synthesize _shadowView=__shadowView;
@property(readonly, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(retain, nonatomic) Class scrubberCellClass; // @synthesize scrubberCellClass=_scrubberCellClass;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) id <PUReviewScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) id <PUReviewScrubberDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000405de2
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000405dca
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000405ccd
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000405c55
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000405be1
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000405a8f
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000405a7d
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000405a65
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000405986
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000405974
- (void)_notifyDelegateOfSelection;	// IMP=0x00000000004058ee
- (void)_notifyDelegateOfScrub;	// IMP=0x000000000040588c
- (void)_updateToSelectedIndexPath:(id)arg1;	// IMP=0x000000000040582b
- (struct CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2;	// IMP=0x00000000004056f5
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x0000000000405541
- (id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000405253
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x00000000004051ea
- (void)_handleTapOnReviewScrubber:(id)arg1;	// IMP=0x0000000000405084
- (void)_handleTapAtIndexPath:(id)arg1;	// IMP=0x0000000000405044
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;	// IMP=0x0000000000404d53
- (void)_endFeedbackInteraction;	// IMP=0x0000000000404cbe
- (void)_playFeedbackIfNeeded;	// IMP=0x0000000000404b74
- (void)_beginFeedbackInteraction;	// IMP=0x0000000000404adc
- (void)finishInteractiveUpdate;	// IMP=0x0000000000404a30
- (void)updateWithAbsoluteProgress:(double)arg1;	// IMP=0x0000000000404887
- (void)beginInteractiveUpdate;	// IMP=0x000000000040482b
- (void)reloadSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x000000000040480c
- (void)reloadIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000404731
- (void)toggleSelectedIndexPathAnimated:(_Bool)arg1;	// IMP=0x0000000000404712
- (void)toggleIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000404663
- (void)reloadData;	// IMP=0x0000000000404626
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000404599
- (_Bool)isMinibar;	// IMP=0x00000000004044c3
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000004043fb
- (void)layoutSubviews;	// IMP=0x0000000000404065
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000403f7b
- (void)dealloc;	// IMP=0x0000000000403f03
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000403ea5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000403e36
- (void)_commonPUReviewScrubberInitialization;	// IMP=0x0000000000403a82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
