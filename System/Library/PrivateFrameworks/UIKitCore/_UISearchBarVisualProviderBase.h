//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBar, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UITextField, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarScopeBarBackground;
@protocol _UINavigationBarTitleViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderBase : NSObject
{
    UISearchBar *_searchBar;	// 8 = 0x8
}

@property(nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)setClippingViewBounds:(struct CGRect)arg1;	// IMP=0x000000000136e1e9
- (void)setClippingViewActive:(_Bool)arg1;	// IMP=0x000000000136e1e3
- (void)updateBackgroundToBackdropStyle:(long long)arg1;	// IMP=0x000000000136e1dd
- (_Bool)isInBarButNotHosted;	// IMP=0x000000000136e1d5
- (void)setBackgroundLayoutNeedsUpdate;	// IMP=0x000000000136e1cf
- (_Bool)wantsDictationButton;	// IMP=0x000000000136e1c7
- (void)setDisableDictationButton:(_Bool)arg1;	// IMP=0x000000000136e1c1
- (void)setSearchDisplayControllerShowsCancelButton:(_Bool)arg1;	// IMP=0x000000000136e1bb
- (void)setUpCancelButtonWithAppearance:(id)arg1;	// IMP=0x000000000136e1b5
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;	// IMP=0x000000000136e1af
- (id)makeShadowView;	// IMP=0x000000000136e1a7
@property(nonatomic) __weak id searchDisplayController;
@property(readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property(readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem;
- (void)setAnimatedAppearanceBarButtonItem:(id)arg1;	// IMP=0x000000000136e183
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;	// IMP=0x000000000136e17d
- (double)navigationBarContentHeight;	// IMP=0x000000000136e174
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;	// IMP=0x000000000136e16b
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000136e162
- (double)barHeightForBarMetrics:(long long)arg1;	// IMP=0x000000000136e159
- (long long)barMetricsForOrientation:(long long)arg1;	// IMP=0x000000000136e151
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;	// IMP=0x000000000136e149
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;	// IMP=0x000000000136e141
- (void)allowCursorToAppear:(_Bool)arg1;	// IMP=0x000000000136e13b
@property(nonatomic) _Bool allowsInlineScopeBar;
@property(readonly, nonatomic) _Bool backgroundLayoutNeedsUpdate;
@property(nonatomic) _Bool drawsBackgroundInPalette;
- (void)updateScopeBarBackground;	// IMP=0x000000000136e111
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;	// IMP=0x000000000136e10b
- (void)updateSearchFieldArt;	// IMP=0x000000000136e105
- (void)updateSearchBarOpacity;	// IMP=0x000000000136e0ff
- (void)updateScopeBarForSelectedScope;	// IMP=0x000000000136e0f9
- (void)updateDictationButton;	// IMP=0x000000000136e0f3
- (void)updateMagnifyingGlassView;	// IMP=0x000000000136e0ed
- (void)updateForDrawsBackgroundInPalette;	// IMP=0x000000000136e0e7
@property(readonly, nonatomic, getter=isLegacy) _Bool legacy;
- (void)setLegacy:(_Bool)arg1;	// IMP=0x000000000136e0d9
- (void)_setShowsScopeBar:(_Bool)arg1;	// IMP=0x000000000136e0d3
- (void)_setHideBackground:(_Bool)arg1;	// IMP=0x000000000136e0cd
- (void)_setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x000000000136e0c7
- (void)_setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x000000000136e0c1
- (void)_setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x000000000136e0bb
- (void)_setShowsCancelButton:(_Bool)arg1;	// IMP=0x000000000136e0b5
- (void)_setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x000000000136e0af
- (void)_setBarTranslucence:(long long)arg1;	// IMP=0x000000000136e0a9
- (void)_setBarTintColor:(id)arg1;	// IMP=0x000000000136e0a3
- (void)_setBarStyle:(long long)arg1;	// IMP=0x000000000136e09d
@property(retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects;
@property(nonatomic) long long navBarTitleViewLocation;
@property(nonatomic) __weak id <_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x000000000136e06a
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x000000000136e064
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000136e03d
- (double)defaultHeightForOrientation:(long long)arg1;	// IMP=0x000000000136e034
@property(readonly, nonatomic) double scopeBarHeight;
@property(readonly, nonatomic) double searchFieldHeight;
@property(nonatomic) double tableViewIndexWidth;
@property(readonly, nonatomic) _Bool alwaysUsesLayoutMarginsForHorizontalContentInset;
- (void)updateEffectiveContentInset;	// IMP=0x000000000136e005
@property(readonly, nonatomic) struct UIEdgeInsets scopeBarInsets;
@property(readonly, nonatomic) struct UIEdgeInsets effectiveContentInset;
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;	// IMP=0x000000000136dfd9
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;	// IMP=0x000000000136dfd3
@property(nonatomic) struct UIEdgeInsets minimumContentInset;
- (void)updatePlaceholderColor;	// IMP=0x000000000136dfb4
- (id)effectiveBarTintColor;	// IMP=0x000000000136dfac
- (void)setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000136dfa6
- (id)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;	// IMP=0x000000000136df9e
@property(readonly, nonatomic) UIColor *textColor;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000136df6e
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000136df68
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;	// IMP=0x000000000136df60
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000136df58
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x000000000136df52
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x000000000136df4a
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000136df44
@property(retain, nonatomic) UIImage *separatorImage;
- (void)updateForSemanticContext;	// IMP=0x000000000136df30
- (void)updateForDynamicType;	// IMP=0x000000000136df2a
- (void)applySearchBarStyle;	// IMP=0x000000000136df24
- (void)updateRightView;	// IMP=0x000000000136df1e
- (void)setUpScopeBar;	// IMP=0x000000000136df18
- (void)setShowsDeleteButton:(_Bool)arg1;	// IMP=0x000000000136df12
- (void)setShowsSeparator:(_Bool)arg1;	// IMP=0x000000000136df0c
- (void)layoutSubviews;	// IMP=0x000000000136df06
- (void)invalidateLayout;	// IMP=0x000000000136df00
- (double)idealInlineWidthForLayoutState:(long long)arg1;	// IMP=0x000000000136def7
@property(readonly, nonatomic) long long layoutState;
@property(nonatomic) _Bool requiresSearchTextField;
@property(readonly, nonatomic) UIBarButtonItem *existingSearchIconBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *searchIconBarButtonItem; // @dynamic searchIconBarButtonItem;
@property(readonly, nonatomic) UIView *viewStackedInNavigationBar;
@property(readonly, nonatomic, getter=isFrozenForDismissalCrossfade) _Bool frozenForDismissalCrossfade;
- (void)setFrozenForDismissalCrossfade:(_Bool)arg1;	// IMP=0x000000000136deac
@property(nonatomic) _Bool providesRestingMeasurementValues;
@property(nonatomic, getter=isTextFieldManagedInNSToolbar) _Bool textFieldManagedInNSToolbar;
@property(nonatomic, getter=isHostedInlineByNavigationBar) _Bool hostedInlineByNavigationBar;
@property(nonatomic, getter=isHostedByNavigationBar) _Bool hostedByNavigationBar;
@property(nonatomic, getter=isInNavigationPalette) _Bool inNavigationPalette;
@property(nonatomic, getter=isPlacedInToolbar) _Bool placedInToolbar;
@property(nonatomic, getter=isPlacedInNavigationBar) _Bool placedInNavigationBar;
@property(nonatomic) long long selectedScope;
@property(readonly, nonatomic) _Bool scopeBarIsVisible;
@property(nonatomic, getter=isActiveSearchDeferringScopeBar) _Bool activeSearchDeferringScopeBar;
- (void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg1;	// IMP=0x000000000136de20
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;	// IMP=0x000000000136de1a
@property(nonatomic) _Bool showsScopeBar;
@property(nonatomic) _Bool showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) _Bool searchResultsButtonSelected;
@property(nonatomic) _Bool showsSearchResultsButton;
@property(nonatomic) _Bool cancelButtonWantsLetterpress;
@property(nonatomic) _Bool autoDisableCancelButton;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000136ddc0
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool usesEmbeddedAppearance;
@property(nonatomic) _Bool drawsBackground;
@property(nonatomic) _Bool reliesOnNavigationBarBackdrop;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000136dd82
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) _Bool centerPlaceholder;
@property(nonatomic) long long searchFieldLeftViewMode;
@property(nonatomic) unsigned long long scopeBarPosition;
@property(nonatomic) long long barPosition;
@property(retain, nonatomic) UIColor *barTintColor;
@property(nonatomic) unsigned long long backdropStyle;
@property(nonatomic) long long barTranslucence;
@property(nonatomic) unsigned long long searchBarStyle;
@property(nonatomic) long long barStyle;
@property(copy, nonatomic) NSString *cancelButtonText;
@property(copy, nonatomic) NSArray *scopeTitles;
@property(copy, nonatomic) NSString *prompt;
@property(readonly, nonatomic) UIImageView *shadowView;
@property(readonly, nonatomic) UIView *searchBarClippingView;
@property(retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView;
@property(readonly, nonatomic) UIView *scopeBarContainerView;
@property(retain, nonatomic) UISegmentedControl *scopeBar;
@property(retain, nonatomic) UIImageView *separator;
@property(retain, nonatomic) UILabel *promptLabel;
@property(readonly, nonatomic) UINavigationButton *leftButton;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
- (void)setCancelBarButtonItem:(id)arg1;	// IMP=0x000000000136dc63
@property(retain, nonatomic) UIButton *cancelButton;
@property(retain, nonatomic) UIVisualEffectView *backdropVisualEffectView;
@property(retain, nonatomic) _UIBackdropView *backdrop;
@property(retain, nonatomic) UISearchBarBackground *searchBarBackground;
@property(readonly, nonatomic) UITextField *searchFieldIfExists;
@property(retain, nonatomic) UISearchBarTextField *searchField;
- (void)setHelperPlaceholderHidden:(_Bool)arg1;	// IMP=0x000000000136dc0f
- (void)setHelperPlaceholderOverride:(id)arg1;	// IMP=0x000000000136dc09
- (void)setHelperPlaceholder:(id)arg1;	// IMP=0x000000000136dc03
- (void)destroyCancelButton;	// IMP=0x000000000136dbfd
- (void)teardown;	// IMP=0x000000000136dbef
- (void)setUpSearchField;	// IMP=0x000000000136dbe9
- (void)setUpPromptLabel;	// IMP=0x000000000136dbe3
@property(readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
- (void)prepare;	// IMP=0x000000000136dbd0
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000136db05

@end
