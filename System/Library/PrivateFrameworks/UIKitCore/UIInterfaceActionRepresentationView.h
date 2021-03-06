//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle, UISpringLoadedInteraction;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView : UIView
{
    _Bool _hasLoadedBackgroundView;	// 184 = 0xb8
    _Bool _canKeepContentsInHierarchy;	// 185 = 0xb9
    _Bool _hasLoadedContentFirstTime;	// 186 = 0xba
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;	// 187 = 0xbb
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;	// 188 = 0xbc
    _Bool _contentsInsertedIntoViewHierarchy;	// 189 = 0xbd
    _Bool _ownsActionContent;	// 190 = 0xbe
    _Bool _highlighted;	// 191 = 0xbf
    _Bool _pressed;	// 192 = 0xc0
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;	// 193 = 0xc1
    UIInterfaceAction *_action;	// 200 = 0xc8
    unsigned long long _visualCornerPosition;	// 208 = 0xd0
    id _actionViewStateContext;	// 216 = 0xd8
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;	// 224 = 0xe0
    NSLayoutConstraint *_minimumWidthConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_minimumHeightConstraint;	// 240 = 0xf0
    NSArray *_viewsToDisappearWhenHighlighted;	// 248 = 0xf8
    NSString *_sectionID;	// 256 = 0x100
    UISpringLoadedInteraction *_interactionForSpringLoading;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x000000000004ba43
@property(retain, nonatomic) UISpringLoadedInteraction *interactionForSpringLoading; // @synthesize interactionForSpringLoading=_interactionForSpringLoading;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible; // @synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) _Bool ownsActionContent; // @synthesize ownsActionContent=_ownsActionContent;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
@property(nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy; // @synthesize _contentsInsertedIntoViewHierarchy;
- (id)_actionViewState;	// IMP=0x000000000004b8a6
- (void)_clearBackgroundPressedState;	// IMP=0x000000000004b887
- (id)_viewDisplayingBackground;	// IMP=0x000000000004b872
- (_Bool)_isVisibleWithinContainmentAncestor;	// IMP=0x000000000004b76b
- (_Bool)_canLoadContentsIntoHierarchy;	// IMP=0x000000000004b737
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;	// IMP=0x000000000004b6e4
- (void)_addLoadedContentsToHierarchyIfAllowed;	// IMP=0x000000000004b69b
- (void)_addLoadedContentsToHierarchyFirstTime;	// IMP=0x000000000004b605
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;	// IMP=0x000000000004b5da
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;	// IMP=0x000000000004b58e
- (void)_updateHighlightAndPressedFeedback;	// IMP=0x000000000004b2d1
- (_Bool)isFocused;	// IMP=0x000000000004b25c
- (void)_reloadBackgroundHighlightView;	// IMP=0x000000000004ae26
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;	// IMP=0x000000000004ae14
- (void)_applyVisualStyleToLayoutMargins;	// IMP=0x000000000004ad24
- (void)_initializeHorizontalMarginsForAction;	// IMP=0x000000000004ac5f
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;	// IMP=0x000000000004ab76
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x000000000004aaf7
- (void)_applyVisualStyleToMinimumSizeConstraints;	// IMP=0x000000000004a97b
- (void)_applyVisualStyle;	// IMP=0x000000000004a940
- (void)_didScroll;	// IMP=0x000000000004a92e
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;	// IMP=0x000000000004a90b
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;	// IMP=0x000000000004a86a
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000004a826
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a79d
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a714
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a688
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a5fc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000004a4c2
- (_Bool)canBecomeFocused;	// IMP=0x000000000004a47e
- (_Bool)_showsFocusForFocusedView:(id)arg1;	// IMP=0x000000000004a408
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @dynamic springLoaded;
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;	// IMP=0x000000000004a237
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;	// IMP=0x000000000004a1e4
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;	// IMP=0x000000000004a1b2
- (id)_fittingContentSizingView;	// IMP=0x000000000004a1a9
- (id)__fittingContentSizingViewAllowingSelf;	// IMP=0x000000000004a164
- (id)__fittingContentSizingViewIfNotSelf;	// IMP=0x000000000004a120
- (void)_updateFittingContentSizingViewToFitSize;	// IMP=0x000000000004a041
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004a02f
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000049f51
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000049e9f
- (void)layoutMarginsDidChange;	// IMP=0x0000000000049e5e
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000049df1
- (void)layoutSubviews;	// IMP=0x0000000000049cf0
- (void)updateConstraints;	// IMP=0x0000000000049cb2
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x0000000000049ca0
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x0000000000049bba
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;	// IMP=0x0000000000049b72
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x0000000000049b6a
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;	// IMP=0x0000000000049a23
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x00000000000499fa
- (void)loadContents;	// IMP=0x00000000000499f4
- (void)dealloc;	// IMP=0x00000000000499a8
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;	// IMP=0x000000000004974e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

