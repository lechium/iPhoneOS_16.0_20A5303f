//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVMLCollectionViewController.h"

@class IKViewElement, NSDictionary, NSIndexPath, NSMutableArray, NSString, UIViewController;
@protocol _TVListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewController : _TVMLCollectionViewController
{
    _Bool _configureForStackTemplate;	// 8 = 0x8
    _Bool _relatedContentElementValid;	// 9 = 0x9
    IKViewElement *_relatedContentElement;	// 16 = 0x10
    IKViewElement *_previewElement;	// 24 = 0x18
    _Bool _previewUpdated;	// 32 = 0x20
    UIViewController *_previewController;	// 40 = 0x28
    double _cachedCellWidth;	// 48 = 0x30
    NSDictionary *_cachedListItemLockupHeightsBySection;	// 56 = 0x38
    NSMutableArray *_cachedListChildViewControllers;	// 64 = 0x40
    NSIndexPath *_pendingPreviewIndexPath;	// 72 = 0x48
    NSIndexPath *_lastPreviewedIndexPath;	// 80 = 0x50
    NSIndexPath *_secondCellIndexPath;	// 88 = 0x58
    _Bool _secondIndexPathFocused;	// 96 = 0x60
    _Bool _alwaysSoftFocusEnabled;	// 97 = 0x61
    id <_TVListViewControllerDelegate> _delegate;	// 104 = 0x68
}

+ (id)_shadowCollectionElementForCollectionElement:(id)arg1;	// IMP=0x00100000000ec21a
- (void).cxx_destruct;	// IMP=0x00000000000eef54
@property(nonatomic, getter=isAlwaysSoftFocusEnabled) _Bool alwaysSoftFocusEnabled; // @synthesize alwaysSoftFocusEnabled=_alwaysSoftFocusEnabled;
@property(nonatomic) __weak id <_TVListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)_marginForHeaderCellForElement:(id)arg1 section:(long long)arg2;	// IMP=0x00000000000eed86
- (struct CGSize)_expectedHeaderCellSizeForElement:(id)arg1 section:(long long)arg2;	// IMP=0x00000000000eec73
- (struct CGSize)_expectedCellSizeForElement:(id)arg1 inSectionIndex:(long long)arg2;	// IMP=0x00000000000ee409
- (id)_cachedViewControllerForElement:(id)arg1;	// IMP=0x00000000000ee1bc
- (id)_viewControllerForElement:(id)arg1;	// IMP=0x00000000000ee09b
- (id)_previewControllerWithElement:(id)arg1 previewElement:(id *)arg2;	// IMP=0x00000000000eda93
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed460
- (id)_relatedContentElementForIndexPath:(id)arg1;	// IMP=0x00000000000ed1fb
- (_Bool)_relatedElementIsGridAtIndexPath:(id)arg1;	// IMP=0x00000000000ed161
- (void)_delayedUpdatePreview;	// IMP=0x00000000000ecdb9
- (void)_updateCellMetrics;	// IMP=0x00000000000ec4e3
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000ebeb3
- (_Bool)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;	// IMP=0x00000000000ebc95
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000eba47
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000eb688
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000eb5df
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000eb510
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000eb4c7
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000eb4ad
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000eb490
- (void)templateControllerDidUpdateFocusFromView:(id)arg1;	// IMP=0x00000000000eb1e6
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000eb094
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000eae42
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000ead61
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000eab59
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000eaa2f
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ea4f0
- (void)didUpdateCollectionViewByNeedingReload:(_Bool)arg1 focusUpdate:(_Bool)arg2;	// IMP=0x00000000000e9dc1
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(_Bool *)arg5 requiresRelayout:(_Bool *)arg6;	// IMP=0x00000000000e9a48
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;	// IMP=0x00000000000e97e0
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000e9767
- (Class)cellClassForElement:(id)arg1;	// IMP=0x00000000000e96b9
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;	// IMP=0x00000000000e95e8
- (_Bool)contentFlowsVertically;	// IMP=0x00000000000e95e0
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e9474
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e9433
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000e93d5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000e92e6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e910a
- (void)viewDidLoad;	// IMP=0x00000000000e909b
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;	// IMP=0x00000000000e8b88
- (void)dealloc;	// IMP=0x00000000000e8b36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

