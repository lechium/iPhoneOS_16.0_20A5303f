//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDimmingView, UIPresentationController, UIView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject
{
    UIPresentationController *_searchPresentationController;	// 8 = 0x8
    UIView *_searchBarContainerView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    _Bool _isFormSheetPresentation;	// 32 = 0x20
    _Bool _presentationWasAnimated;	// 33 = 0x21
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;	// 40 = 0x28
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;	// 48 = 0x30
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) _Bool presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000e76b88
- (_Bool)searchBarWillResizeForScopeBar;	// IMP=0x0000000000e76af9
- (double)resultsControllerContentOffset;	// IMP=0x0000000000e7676d
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000e76570
- (id)locateNavigationController;	// IMP=0x0000000000e764f5
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000e764d1
- (double)statusBarAdjustment;	// IMP=0x0000000000e76385
- (_Bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000e76269
- (_Bool)_statusBarPreferredHidden;	// IMP=0x0000000000e76211
- (id)dimmingView;	// IMP=0x0000000000e76127
- (struct CGSize)updateSearchBarContainerFrame;	// IMP=0x0000000000e75c5b
- (double)_statusBarHeightChangeDueToRotation;	// IMP=0x0000000000e75b49
- (_Bool)_currentTransitionIsRotating;	// IMP=0x0000000000e75af9
- (void)removeContainerViewFromSuperview;	// IMP=0x0000000000e75ae3
- (id)searchBarContainerView;	// IMP=0x0000000000e7581d
- (id)_searchBarContainerSuperview;	// IMP=0x0000000000e757d8
- (struct CGRect)_containerFrame;	// IMP=0x0000000000e75412
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;	// IMP=0x0000000000e7532a
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;	// IMP=0x0000000000e75194
- (_Bool)presentationIsPopoverToOverFullScreenAdaptation;	// IMP=0x0000000000e75136
- (id)_searchControllerPresenting;	// IMP=0x0000000000e75102
- (void)dealloc;	// IMP=0x0000000000e750a2
- (id)initWithSearchPresentationController:(id)arg1;	// IMP=0x0000000000e7503f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

