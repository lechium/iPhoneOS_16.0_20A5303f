//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FCMapTable, FROnboardingAnimationEngine, FROnboardingLayout, FROnboardingSubscribableItemImageCache, FRSpinnerView, NSDate, NSHashTable, NSMutableArray, NSString, UIActivityIndicatorView, UIColor, UIScrollView, UIView;
@protocol FROnboardingCardViewControllerDelegate;

@interface FROnboardingCardViewController : UIViewController
{
    struct multimap<float, FROnboardingSubscribableItem *, std::less<float>, std::allocator<std::pair<const float, FROnboardingSubscribableItem *>>> yToSubscribableItems;	// 8 = 0x8
    _Bool _eventRecordingDisabled;	// 32 = 0x20
    _Bool _initialLayoutMode;	// 33 = 0x21
    long long _currentState;	// 40 = 0x28
    id <FROnboardingCardViewControllerDelegate> _delegate;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    double _topMargin;	// 64 = 0x40
    double _distanceOfLastScrollMoment;	// 72 = 0x48
    FROnboardingAnimationEngine *_animationEngine;	// 80 = 0x50
    FROnboardingLayout *_currentLayout;	// 88 = 0x58
    NSMutableArray *_subscribableItems;	// 96 = 0x60
    NSHashTable *_selectedItems;	// 104 = 0x68
    UIColor *_currentSystemBackgroundColor;	// 112 = 0x70
    FCMapTable *_subscribableItemsToOnScreenCells;	// 120 = 0x78
    NSMutableArray *_cellReuseQueue;	// 128 = 0x80
    FROnboardingSubscribableItemImageCache *_imageCache;	// 136 = 0x88
    NSDate *_lastTimeBumpedIntoBottomOfScrollView;	// 144 = 0x90
    UIActivityIndicatorView *_spinner;	// 152 = 0x98
    UIView *_spinnerBackground;	// 160 = 0xa0
    FRSpinnerView *_spinnerView;	// 168 = 0xa8
    struct CGPoint _lastContentOffsetOnScroll;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x00200000000d3e44
- (void).cxx_destruct;	// IMP=0x00100000000d3d34
@property(retain, nonatomic) FRSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIView *spinnerBackground; // @synthesize spinnerBackground=_spinnerBackground;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool initialLayoutMode; // @synthesize initialLayoutMode=_initialLayoutMode;
@property(retain, nonatomic) NSDate *lastTimeBumpedIntoBottomOfScrollView; // @synthesize lastTimeBumpedIntoBottomOfScrollView=_lastTimeBumpedIntoBottomOfScrollView;
@property(retain, nonatomic) FROnboardingSubscribableItemImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *cellReuseQueue; // @synthesize cellReuseQueue=_cellReuseQueue;
@property(retain, nonatomic) FCMapTable *subscribableItemsToOnScreenCells; // @synthesize subscribableItemsToOnScreenCells=_subscribableItemsToOnScreenCells;
@property(retain, nonatomic) UIColor *currentSystemBackgroundColor; // @synthesize currentSystemBackgroundColor=_currentSystemBackgroundColor;
@property(retain, nonatomic) NSHashTable *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) NSMutableArray *subscribableItems; // @synthesize subscribableItems=_subscribableItems;
@property(retain, nonatomic) FROnboardingLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) FROnboardingAnimationEngine *animationEngine; // @synthesize animationEngine=_animationEngine;
@property(nonatomic) double distanceOfLastScrollMoment; // @synthesize distanceOfLastScrollMoment=_distanceOfLastScrollMoment;
@property(nonatomic) struct CGPoint lastContentOffsetOnScroll; // @synthesize lastContentOffsetOnScroll=_lastContentOffsetOnScroll;
@property(nonatomic) _Bool eventRecordingDisabled; // @synthesize eventRecordingDisabled=_eventRecordingDisabled;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <FROnboardingCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;	// IMP=0x00100000000d34eb
- (void)_setBlurred:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00100000000d25ea
- (void)_updateScrollViewContentSizeWithWidth:(double)arg1;	// IMP=0x00100000000d2546
- (void)_updateScrollViewContentSize;	// IMP=0x00100000000d24af
- (void)_enqueueCell:(id)arg1;	// IMP=0x00100000000d23ec
- (id)_dequeueCell;	// IMP=0x00100000000d201a
- (void)_sendFeedCellExposureEventWithCell:(id)arg1 subscribableItem:(id)arg2;	// IMP=0x00100000000d1c28
- (void)_setUpCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00100000000d17f6
- (void)cancelCacheOperations;	// IMP=0x00100000000d17a5
- (void)prewarmCacheForItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d16c1
- (void)_clearOnScreenCells;	// IMP=0x00100000000d1497
- (void)_updateVisibleCellsInRect:(struct CGRect)arg1;	// IMP=0x00100000000d06c5
- (void)_updateVisibleCellsForSize:(struct CGSize)arg1;	// IMP=0x00100000000d058d
- (void)_updateVisibleCells;	// IMP=0x00100000000d0476
- (id)_cellContainingPoint:(struct CGPoint)arg1;	// IMP=0x00100000000d024d
- (id)_itemContainingPoint:(struct CGPoint)arg1;	// IMP=0x00100000000d002f
- (void)enumerateItemsInRect:(struct CGRect)arg1 enumerator:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cfe03
- (unsigned long long)accessibilityIndexOfSubscribableCardCell:(id)arg1;	// IMP=0x00100000000cfd3f
- (unsigned long long)accessibilityTotalNumberOfSubscribableCardCells;	// IMP=0x00100000000cfce7
- (CDStruct_c3b9c2ee)scrollDriftAnimatorDataForItem:(id)arg1;	// IMP=0x00100000000cfccc
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00100000000cfc19
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00100000000cfb49
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000cfa96
- (void)checkIfCloseToBottomRespectingTimer:(_Bool)arg1;	// IMP=0x00100000000cf81f
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000cf756
- (void)animationEngineDidFinishAnimationSession:(id)arg1;	// IMP=0x00100000000cf741
- (void)animationEngineDidTick:(id)arg1;	// IMP=0x00100000000cf4e9
- (void)_beginZoomingOutCardsMode;	// IMP=0x00100000000cf14c
- (void)_showNewCellsWithAnimationIfNeeded;	// IMP=0x00100000000ceb24
- (void)_showResultsForFirstSelection;	// IMP=0x00100000000ce94f
- (void)_readyForFirstSelectionState;	// IMP=0x00100000000ce8e2
- (void)_isRunningFirstAppearAnimationState;	// IMP=0x00100000000ce8c9
- (void)sendFeedCellExposureAnlayticsEventForAlreadySetUpCells;	// IMP=0x00100000000ce68d
- (struct CGPoint)exitAnimatorWantsAnchorPoint:(id)arg1;	// IMP=0x00100000000ce581
- (struct CGPoint)firstAppearanceAnimatorWantsAnchorPoint:(id)arg1;	// IMP=0x00100000000ce56e
- (struct CGPoint)firstAppearanceAnchorPointForCurrentLayout;	// IMP=0x00100000000ce3bc
- (void)transitionToState:(long long)arg1;	// IMP=0x00100000000ce319
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000000ce311
- (void)_selectItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000ce0e3
- (_Bool)_cellAlreadyHasSelectionAnimatorRunning:(id)arg1;	// IMP=0x00100000000ce0b0
- (id)_selectionAnimatorForCell:(id)arg1;	// IMP=0x00100000000cde89
- (void)_undimpleCell:(id)arg1;	// IMP=0x00100000000cde33
- (void)_dimpleCell:(id)arg1 quickPress:(_Bool)arg2;	// IMP=0x00100000000cdcb9
- (void)_dimpleCell:(id)arg1;	// IMP=0x00100000000cdc01
- (void)selectionGestureFired:(id)arg1;	// IMP=0x00100000000cd8c3
- (void)_setLayout:(id)arg1 clearCells:(_Bool)arg2;	// IMP=0x00100000000cd569
- (id)_layoutForGivenSize:(struct CGSize)arg1;	// IMP=0x00100000000cd43f
@property(readonly, nonatomic) long long numberOfRowsForInitialLayout;
@property(readonly, nonatomic) long long numberOfColumnsPermitted;
@property(readonly, nonatomic) struct CGSize cardSize;
- (long long)selectionCount;	// IMP=0x00100000000cce87
- (_Bool)itemIsSelected:(id)arg1;	// IMP=0x00100000000ccdfb
- (void)setItem:(id)arg1 selected:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000ccc09
- (void)_addItems:(id)arg1 withPreselectedItems:(id)arg2;	// IMP=0x00100000000cc6bf
- (void)unlockAdditonalCards;	// IMP=0x00100000000cc681
- (void)addItems:(id)arg1 withPreselectedItems:(id)arg2;	// IMP=0x00100000000cc5a2
- (id)itemVisibleAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000cc53e
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00100000000cc52c
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cc512
- (void)setBlurred:(_Bool)arg1;	// IMP=0x00100000000cc4fe
- (void)setBottomSpinnerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cc1cc
- (void)setSpinnerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cb93d
- (_Bool)shouldAutorotate;	// IMP=0x00100000000cb8d1
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000cb089
- (void)recordExposureEventWithStartDate:(id)arg1;	// IMP=0x00100000000cafc7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000caf45
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000cab63
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000cab07
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000caabf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000ca92b
- (void)dealloc;	// IMP=0x00100000000ca831
- (void)viewDidLoad;	// IMP=0x00100000000ca2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
