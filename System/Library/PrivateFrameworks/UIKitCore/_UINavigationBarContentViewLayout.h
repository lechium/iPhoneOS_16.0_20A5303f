//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, UIBarButtonItem, UIBarButtonItemGroup, UIControl, UIDeferredMenuElement, UIDocumentProperties, UILabel, UILayoutGuide, UITextField, UITraitCollection, UIView, _UIBarButtonItemData, _UIBarButtonItemSearchBarGroup, _UIButtonBar, _UIButtonBarButton, _UINavigationBarContentView, _UINavigationBarTitleControl, _UINavigationBarTitleRenamerSession, _UINavigationItemRenameHandler, _UITAMICAdaptorView;
@protocol _UINavigationBarAugmentedTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentViewLayout : NSObject
{
    _UINavigationBarContentView *_contentView;	// 8 = 0x8
    _UINavigationBarTitleControl *_titleMenuControl;	// 16 = 0x10
    UITextField *_renamingContentView;	// 24 = 0x18
    UIView *_titleIconView;	// 32 = 0x20
    NSLayoutConstraint *_leadingMarginConstraint;	// 40 = 0x28
    NSLayoutConstraint *_trailingMarginConstraint;	// 48 = 0x30
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;	// 56 = 0x38
    NSLayoutConstraint *_leadingBarToTitleSpacer;	// 64 = 0x40
    NSLayoutConstraint *_titleToCenterBarSpacer;	// 72 = 0x48
    NSLayoutConstraint *_centerBarToTrailingBarSpacer;	// 80 = 0x50
    NSLayoutConstraint *_titleToTrailingBarSpacer;	// 88 = 0x58
    NSArray *_layoutGuideConstraints;	// 96 = 0x60
    NSArray *_alignmentConstraints;	// 104 = 0x68
    NSArray *_heightConstraints;	// 112 = 0x70
    NSArray *_backButtonConstraints;	// 120 = 0x78
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;	// 128 = 0x80
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;	// 136 = 0x88
    NSArray *_leadingBarConstraints;	// 144 = 0x90
    NSArray *_titleViewConstraints;	// 152 = 0x98
    NSArray *_titleMenuControlConstraints;	// 160 = 0xa0
    NSArray *_renamingContentViewConstraints;	// 168 = 0xa8
    NSArray *_augmentedTitleViewConstraints;	// 176 = 0xb0
    NSArray *_centerBarConstraints;	// 184 = 0xb8
    NSArray *_trailingBarConstraints;	// 192 = 0xc0
    UIBarButtonItemGroup *_overflowGroup;	// 200 = 0xc8
    UIBarButtonItem *_overflowItem;	// 208 = 0xd0
    _UIBarButtonItemSearchBarGroup *_inlineSearchBarGroup;	// 216 = 0xd8
    UIView *_leadingBarSnapshot;	// 224 = 0xe0
    UIView *_trailingBarSnapshot;	// 232 = 0xe8
    _Bool _hasFakedBackButton;	// 240 = 0xf0
    _Bool _useLeadingAlignedTitle;	// 241 = 0xf1
    _Bool _leadingGroupsEnabled;	// 242 = 0xf2
    _Bool _trailingGroupsEnabled;	// 243 = 0xf3
    _Bool _active;	// 244 = 0xf4
    _Bool _keepsSnapshotsInHierarchy;	// 245 = 0xf5
    _UIButtonBar *_leadingBar;	// 248 = 0xf8
    _UIButtonBar *_centerBar;	// 256 = 0x100
    _UIButtonBar *_trailingBar;	// 264 = 0x108
    UILayoutGuide *_backButtonGuide;	// 272 = 0x110
    UILayoutGuide *_leadingBarGuide;	// 280 = 0x118
    UILayoutGuide *_titleViewGuide;	// 288 = 0x120
    UILayoutGuide *_centerBarGuide;	// 296 = 0x128
    UILayoutGuide *_trailingBarGuide;	// 304 = 0x130
    long long _alignment;	// 312 = 0x138
    long long _currentContentSize;	// 320 = 0x140
    double _overrideHeight;	// 328 = 0x148
    double _resolvedHeight;	// 336 = 0x150
    long long _resolvedAlignment;	// 344 = 0x158
    _UIButtonBarButton *_backButton;	// 352 = 0x160
    double _minimumBackButtonWidth;	// 360 = 0x168
    double _maximumBackButtonWidth;	// 368 = 0x170
    UILabel *_inlineTitleView;	// 376 = 0x178
    double _inlineTitleViewAlpha;	// 384 = 0x180
    UIView *_titleView;	// 392 = 0x188
    _UITAMICAdaptorView *_titleViewWrapperView;	// 400 = 0x190
    CDUnknownBlockType _titleMenuProvider;	// 408 = 0x198
    UIDocumentProperties *_documentProperties;	// 416 = 0x1a0
    _UINavigationItemRenameHandler *_renameHandler;	// 424 = 0x1a8
    _UINavigationBarTitleRenamerSession *_activeRenamerSession;	// 432 = 0x1b0
    UIView<_UINavigationBarAugmentedTitleView> *_augmentedTitleView;	// 440 = 0x1b8
    double _largeTitleHeight;	// 448 = 0x1c0
    UITraitCollection *_augmentedTitleNavigationBarTraits;	// 456 = 0x1c8
    long long _centerGroupsMode;	// 464 = 0x1d0
    UIBarButtonItemGroup *_fixedTrailingGroup;	// 472 = 0x1d8
    NSString *_customizationIdentifier;	// 480 = 0x1e0
    UIDeferredMenuElement *_additionalOverflowItems;	// 488 = 0x1e8
    _UIBarButtonItemData *_plainItemAppearance;	// 496 = 0x1f0
    _UIBarButtonItemData *_doneItemAppearance;	// 504 = 0x1f8
    _UIBarButtonItemData *_backButtonAppearance;	// 512 = 0x200
    struct UIOffset _titlePositionAdjustment;	// 520 = 0x208
    CDStruct_ef18196a _largeTitleHeightRange;	// 536 = 0x218
    struct NSDirectionalEdgeInsets _layoutMargins;	// 552 = 0x228
}

- (void).cxx_destruct;	// IMP=0x00000000001a6d73
@property(nonatomic) _Bool keepsSnapshotsInHierarchy; // @synthesize keepsSnapshotsInHierarchy=_keepsSnapshotsInHierarchy;
@property(readonly, nonatomic) UIView *trailingBarSnapshot; // @synthesize trailingBarSnapshot=_trailingBarSnapshot;
@property(readonly, nonatomic) UIView *leadingBarSnapshot; // @synthesize leadingBarSnapshot=_leadingBarSnapshot;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(retain, nonatomic) UIDeferredMenuElement *additionalOverflowItems; // @synthesize additionalOverflowItems=_additionalOverflowItems;
@property(copy, nonatomic) NSString *customizationIdentifier; // @synthesize customizationIdentifier=_customizationIdentifier;
@property(retain, nonatomic) _UIBarButtonItemSearchBarGroup *inlineSearchBarGroup; // @synthesize inlineSearchBarGroup=_inlineSearchBarGroup;
@property(nonatomic) _Bool trailingGroupsEnabled; // @synthesize trailingGroupsEnabled=_trailingGroupsEnabled;
@property(retain, nonatomic) UIBarButtonItemGroup *fixedTrailingGroup; // @synthesize fixedTrailingGroup=_fixedTrailingGroup;
@property(nonatomic) long long centerGroupsMode; // @synthesize centerGroupsMode=_centerGroupsMode;
@property(nonatomic) _Bool leadingGroupsEnabled; // @synthesize leadingGroupsEnabled=_leadingGroupsEnabled;
@property(retain, nonatomic) UITraitCollection *augmentedTitleNavigationBarTraits; // @synthesize augmentedTitleNavigationBarTraits=_augmentedTitleNavigationBarTraits;
@property(nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange; // @synthesize largeTitleHeightRange=_largeTitleHeightRange;
@property(nonatomic) double largeTitleHeight; // @synthesize largeTitleHeight=_largeTitleHeight;
@property(retain, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // @synthesize augmentedTitleView=_augmentedTitleView;
@property(nonatomic) _Bool useLeadingAlignedTitle; // @synthesize useLeadingAlignedTitle=_useLeadingAlignedTitle;
@property(nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(retain, nonatomic) _UINavigationBarTitleRenamerSession *activeRenamerSession; // @synthesize activeRenamerSession=_activeRenamerSession;
@property(retain, nonatomic) _UINavigationItemRenameHandler *renameHandler; // @synthesize renameHandler=_renameHandler;
@property(retain, nonatomic) UIDocumentProperties *documentProperties; // @synthesize documentProperties=_documentProperties;
@property(copy, nonatomic) CDUnknownBlockType titleMenuProvider; // @synthesize titleMenuProvider=_titleMenuProvider;
@property(readonly, nonatomic) _UITAMICAdaptorView *titleViewWrapperView; // @synthesize titleViewWrapperView=_titleViewWrapperView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property(retain, nonatomic) UILabel *inlineTitleView; // @synthesize inlineTitleView=_inlineTitleView;
@property(nonatomic) _Bool hasFakedBackButton; // @synthesize hasFakedBackButton=_hasFakedBackButton;
@property(nonatomic) double maximumBackButtonWidth; // @synthesize maximumBackButtonWidth=_maximumBackButtonWidth;
@property(nonatomic) double minimumBackButtonWidth; // @synthesize minimumBackButtonWidth=_minimumBackButtonWidth;
@property(retain, nonatomic) _UIButtonBarButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) long long resolvedAlignment; // @synthesize resolvedAlignment=_resolvedAlignment;
@property(readonly, nonatomic) double resolvedHeight; // @synthesize resolvedHeight=_resolvedHeight;
@property(nonatomic) double overrideHeight; // @synthesize overrideHeight=_overrideHeight;
@property(nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) long long currentContentSize; // @synthesize currentContentSize=_currentContentSize;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) UILayoutGuide *trailingBarGuide; // @synthesize trailingBarGuide=_trailingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *centerBarGuide; // @synthesize centerBarGuide=_centerBarGuide;
@property(readonly, nonatomic) UILayoutGuide *titleViewGuide; // @synthesize titleViewGuide=_titleViewGuide;
@property(readonly, nonatomic) UILayoutGuide *leadingBarGuide; // @synthesize leadingBarGuide=_leadingBarGuide;
@property(readonly, nonatomic) UILayoutGuide *backButtonGuide; // @synthesize backButtonGuide=_backButtonGuide;
- (void)buttonBarDidLayout:(id)arg1;	// IMP=0x00000000001a6a27
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;	// IMP=0x00000000001a69d9
- (void)removeContent;	// IMP=0x00000000001a684d
- (void)replaceTrailingBarWithSnapshot;	// IMP=0x00000000001a66a7
- (void)replaceLeadingBarWithSnapshot;	// IMP=0x00000000001a6505
- (id)traitOverridesForChild:(id)arg1;	// IMP=0x00000000001a647a
- (void)updateSpacingConstraints;	// IMP=0x00000000001a61e8
- (void)layoutSubviews;	// IMP=0x00000000001a6046
- (CDStruct_e4bf3e73)_buttonBarLayoutInfo;	// IMP=0x00000000001a5b4e
@property(readonly, nonatomic) long long expectedInactiveInlineSearchBarLayoutState;
- (_Bool)_overflowRequired;	// IMP=0x00000000001a5a53
- (void)_getInitialLeadingFreeSpace:(double *)arg1 trailingFreeSpace:(double *)arg2;	// IMP=0x00000000001a57a6
- (double)_idealTitleWidth;	// IMP=0x00000000001a56d2
- (double)_idealBackButtonWidth;	// IMP=0x00000000001a5689
@property(readonly, nonatomic) UIBarButtonItem *trailingClippingItem;
@property(readonly, nonatomic) UIBarButtonItem *trailingVisibleItem;
@property(retain, nonatomic) NSArray *trailingGroups;
- (void)_setOverflowGroupHidden:(_Bool)arg1;	// IMP=0x00000000001a5060
@property(readonly, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property(readonly, nonatomic) _UIButtonBarButton *overflowButton;
- (id)_fixedItemsMenu;	// IMP=0x00000000001a4b2c
- (id)_overflowItem;	// IMP=0x00000000001a471b
- (_Bool)_canCustomizeBar;	// IMP=0x00000000001a46bb
@property(retain, nonatomic) NSArray *centerBarGroups;
@property(readonly, nonatomic) _UIButtonBar *centerBar; // @synthesize centerBar=_centerBar;
@property(readonly, nonatomic) UIBarButtonItem *leadingVisibleItem;
@property(retain, nonatomic) NSArray *leadingGroups;
@property(readonly, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
- (id)_newButtonBar;	// IMP=0x00000000001a4009
- (void)updateAlphas;	// IMP=0x00000000001a3f0e
- (void)updateTitleHeight;	// IMP=0x00000000001a3efc
- (void)updateAugmentedTitleViewBackButtonConstraints;	// IMP=0x00000000001a3ede
- (void)updateAugmentedTitleViewLayout;	// IMP=0x00000000001a3ec0
- (void)_updateAugmentedTitleViewLayout;	// IMP=0x00000000001a3e51
- (void)updateAugmentedTitleViewHeight;	// IMP=0x00000000001a3e33
@property(readonly, nonatomic) double baselineOffsetFromTop;
- (void)_updateTitleControlPrimaryActionConfiguration;	// IMP=0x00000000001a3a66
- (void)_didTriggerRenameAction;	// IMP=0x00000000001a3a15
- (void)_updateRenamingContentViewIfNecessary;	// IMP=0x00000000001a372f
- (void)_updateRenamingContentViewAttachments;	// IMP=0x00000000001a34ae
- (void)_updateRenamingContentViewConstraints;	// IMP=0x00000000001a2a7c
- (_Bool)_renameShouldTakeOverContentView;	// IMP=0x00000000001a2a2f
@property(readonly, nonatomic) UIControl *titleMenuControl;
- (void)_updateDocumentIconViewIfNecessary;	// IMP=0x00000000001a25dd
- (void)_updateTitleMenuControlIfNecessary;	// IMP=0x00000000001a230b
@property(readonly, nonatomic) UIView *effectiveTitleView;
- (void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1;	// IMP=0x00000000001a1d2f
- (void)_deactivateConstraintsIfNecessary:(id)arg1;	// IMP=0x00000000001a1d06
- (void)_updateSubviewOrder;	// IMP=0x00000000001a1b0d
- (void)setBackButtonHidden:(_Bool)arg1 titleLabelHidden:(_Bool)arg2 titleViewHidden:(_Bool)arg3 barsHidden:(_Bool)arg4;	// IMP=0x00000000001a18c8
- (void)setContentHidden:(_Bool)arg1;	// IMP=0x00000000001a18ae
- (void)cleanupAfterLayoutTransitionCompleted;	// IMP=0x00000000001a1866
- (void)removeAllSnapshots;	// IMP=0x00000000001a17d9
- (void)_deactivateAllConstraints;	// IMP=0x00000000001a1668
- (void)_activateAllConstraints;	// IMP=0x00000000001a140a
- (void)_updateConditionalGuideConstraintsForActiveLayout:(_Bool)arg1;	// IMP=0x00000000001a133a
- (void)_updateTrailingBarConstraints;	// IMP=0x00000000001a1091
- (void)_updateCenterBarConstraints;	// IMP=0x00000000001a0d13
- (void)_updateLeadingBarConstraints;	// IMP=0x00000000001a0a6a
- (void)_updateAugmentedTitleViewConstraints;	// IMP=0x00000000001a0814
- (void)unfreeze;	// IMP=0x00000000001a0800
- (void)freeze;	// IMP=0x00000000001a07e9
- (void)_disableLayoutFlushing:(_Bool)arg1;	// IMP=0x00000000001a0667
- (void)_updateTitleMenuConstraints;	// IMP=0x00000000001a0369
- (void)_updateTitleViewConstraints;	// IMP=0x000000000019f796
- (double)_inlineTitleBaselineOffset;	// IMP=0x000000000019f6a9
- (void)_prepareTitleViewAndWrapIfNecessary;	// IMP=0x000000000019f5b8
- (void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;	// IMP=0x000000000019f499
- (void)_updateBackButtonConstraints;	// IMP=0x000000000019f240
- (void)_updateMarginConstraints;	// IMP=0x000000000019f1c0
- (void)_updateHeightConstraints;	// IMP=0x000000000019ed5c
- (_Bool)_augmentedTitleViewIgnoresResolvedHeight;	// IMP=0x000000000019ec9e
@property(readonly, nonatomic) double baseHeight;
- (double)_contentHeight;	// IMP=0x000000000019ea79
@property(readonly, nonatomic) double currentHeight;
- (void)_updateAlignmentConstraints;	// IMP=0x000000000019e12b
- (id)initWithContentView:(id)arg1;	// IMP=0x000000000019d658
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

