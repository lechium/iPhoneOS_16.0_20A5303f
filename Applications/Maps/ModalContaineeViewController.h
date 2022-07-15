//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, MacMenuPresentationController, MacPopoverPresentationController, ModalCardHeaderView, NSString, UIViewController;
@protocol HeightProviding;

@interface ModalContaineeViewController
{
    _Bool _useAdaptativeFont;	// 8 = 0x8
    ModalCardHeaderView *_headerView;	// 16 = 0x10
    UIViewController *_childVC;	// 24 = 0x18
    CDUnknownBlockType _blockAlongDismissContainee;	// 32 = 0x20
    id <HeightProviding> _childHeightProvider;	// 40 = 0x28
    CDUnknownBlockType _headerConfigurationProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002f6e8e
@property(copy, nonatomic) CDUnknownBlockType headerConfigurationProvider; // @synthesize headerConfigurationProvider=_headerConfigurationProvider;
@property(nonatomic) _Bool useAdaptativeFont; // @synthesize useAdaptativeFont=_useAdaptativeFont;
@property(nonatomic) __weak id <HeightProviding> childHeightProvider; // @synthesize childHeightProvider=_childHeightProvider;
@property(copy, nonatomic) CDUnknownBlockType blockAlongDismissContainee; // @synthesize blockAlongDismissContainee=_blockAlongDismissContainee;
@property(readonly, nonatomic) UIViewController *childVC; // @synthesize childVC=_childVC;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
- (void)headerViewCloseTapped:(id)arg1;	// IMP=0x00100000002f6ddf
- (void)_dismissContainee;	// IMP=0x00100000002f6d02
- (void)shoulDismissForVerticalSwipe_nonUIKitCardsOnly;	// IMP=0x00100000002f6cf0
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000002f6c20
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000002f6b5d
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000002f6b4b
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000002f6a55
- (void)_setupConstraints;	// IMP=0x00100000002f644b
- (void)_setupViews;	// IMP=0x00100000002f627f
@property(readonly, nonatomic) ModalCardHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)contentView;	// IMP=0x00100000002f6027
- (void)viewDidLoad;	// IMP=0x00100000002f5fa0
- (id)initWithChildViewController:(id)arg1 visualEffectDisabled:(_Bool)arg2 fullScreen:(_Bool)arg3 headerViewConfigurationProvider:(CDUnknownBlockType)arg4;	// IMP=0x00100000002f5db8
- (id)initWithChildViewController:(id)arg1 visualEffectDisabled:(_Bool)arg2 headerViewConfigurationProvider:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f5da0
- (id)initWithChildViewController:(id)arg1 visualEffectDisabled:(_Bool)arg2;	// IMP=0x00100000002f5cc4
- (id)initWithChildViewController:(id)arg1;	// IMP=0x00100000002f5cb0
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002f5ca8

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly) Class superclass;

@end
