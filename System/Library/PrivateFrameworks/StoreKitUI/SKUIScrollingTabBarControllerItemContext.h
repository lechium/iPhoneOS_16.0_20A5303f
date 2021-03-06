//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUIViewControllerContainerCollectionViewCell, UIScrollView, UIViewController;
@protocol SKUIScrollingTabBarControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarControllerItemContext : NSObject
{
    _Bool _adjustingNestedPagingScrollViewContentOffset;	// 8 = 0x8
    struct UIEdgeInsets _appliedContentInsetsAdjustment;	// 16 = 0x10
    CDStruct_17994511 _desiredContentInsetAdjustmentDescriptor;	// 48 = 0x30
    UIScrollView *_insetAdjustedContentScrollView;	// 88 = 0x58
    double _lastSeenContentWidth;	// 96 = 0x60
    CDStruct_19149c72 _lastSentAppearanceStatus;	// 104 = 0x68
    UIScrollView *_observedNestedPagingScrollView;	// 120 = 0x78
    unsigned long long _originalAutoresizingMask;	// 128 = 0x80
    _Bool _readyForDisplay;	// 136 = 0x88
    BOOL _viewControllerIsNavigationController;	// 137 = 0x89
    SKUIViewControllerContainerCollectionViewCell *_collectionViewCell;	// 144 = 0x90
    id <SKUIScrollingTabBarControllerItemContextDelegate> _delegate;	// 152 = 0x98
    unsigned long long _lastSelectedPageIndex;	// 160 = 0xa0
    UIViewController *_viewController;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000372d7e
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long lastSelectedPageIndex; // @synthesize lastSelectedPageIndex=_lastSelectedPageIndex;
@property(nonatomic) __weak id <SKUIScrollingTabBarControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIViewControllerContainerCollectionViewCell *collectionViewCell; // @synthesize collectionViewCell=_collectionViewCell;
- (void)_updateAppliedContentInsetsAdjustment;	// IMP=0x0000000000372b1d
- (void)_prepareViewControllerForTearDown;	// IMP=0x00000000003729b2
- (void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect)arg1 updateContentOffset:(_Bool)arg2 contentOffset:(struct CGPoint)arg3;	// IMP=0x0000000000372737
- (void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;	// IMP=0x00000000003726b0
- (id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(_Bool)arg1;	// IMP=0x0000000000372532
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;	// IMP=0x0000000000372324
- (id)_appearanceStatusObserver;	// IMP=0x000000000037222e
- (id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;	// IMP=0x00000000003721cd
- (void)updateNestedPagingScrollViewContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000372112
- (void)updateForPossibleNestedPagingScrollViewChange;	// IMP=0x0000000000372029
- (void)prepareViewControllerForTearDown;	// IMP=0x0000000000372017
- (void)prepareViewControllerForDisplayWithSize:(struct CGSize)arg1;	// IMP=0x0000000000371fc1
- (void)notifyOfUpdatedAppearanceStatus:(CDStruct_19149c72)arg1;	// IMP=0x0000000000371f22
- (void)applyNewContentInsetDescriptor:(CDStruct_17994511)arg1;	// IMP=0x0000000000371eae
@property(readonly, nonatomic) _Bool viewControllerIsNavigationController;
@property(readonly, nonatomic) double nestedPagingScrollViewContentWidth;
@property(readonly, nonatomic) UIScrollView *nestedPagingScrollView;
- (void)observedNavigationStackDidChange:(id)arg1;	// IMP=0x0000000000371d46
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000371c3c
- (void)dealloc;	// IMP=0x0000000000371bfe
- (id)initWithViewController:(id)arg1;	// IMP=0x0000000000371b77
- (id)init;	// IMP=0x0000000000371b63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

