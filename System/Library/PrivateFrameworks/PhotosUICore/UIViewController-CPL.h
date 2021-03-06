//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, PXProgrammaticNavigationDestination, UIToolbar;

@interface UIViewController (CPL)
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a1c41
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a1ba1
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a1b01
+ (id)px_viewControllerWithSettings:(id)arg1;	// IMP=0x00100000002a1a86
+ (void)_px_prepareClassForBarAppearance;	// IMP=0x001000000055b203
+ (void)_px_prepareClassForExtendedTraitCollection;	// IMP=0x00100000005682d6
+ (void)px_preloadExtendedTraitCollection;	// IMP=0x0010000000568251
+ (void)_px_prepareClassForOneUpPresentation;	// IMP=0x001000000077315a
@property(readonly, nonatomic) UIToolbar *px_footerToolbar;
- (id)_px_offersTableView;	// IMP=0x00100000000b9d3c
- (void)px_removeFooterToolbar;	// IMP=0x00100000000b9c6b
- (void)px_insertFooterToolbarWithItems:(id)arg1;	// IMP=0x00100000000b99f5
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;	// IMP=0x00100000001646a9
- (id)px_gridPresentation;	// IMP=0x0010000000173aeb
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00100000003ae00d
- (void)_px_dismiss:(id)arg1;	// IMP=0x0010000000495337
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000495207
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;	// IMP=0x001000000055b1a0
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;	// IMP=0x001000000055b13d
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;	// IMP=0x001000000055b0dc
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000055b080
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;	// IMP=0x001000000055b024
@property(readonly, nonatomic) PXBarAppearance *px_barAppearance;
- (void)px_didTransitionBars;	// IMP=0x001000000055afb3
- (void)px_willTransitionBars;	// IMP=0x001000000055afad
- (void)px_enableBarAppearance;	// IMP=0x001000000055af53
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;	// IMP=0x0010000000567913
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;	// IMP=0x00100000005678bb
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;	// IMP=0x0010000000567858
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;	// IMP=0x00100000005677d9
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000005676b7
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;	// IMP=0x001000000056765f
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000567602
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;	// IMP=0x00100000005675a5
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;	// IMP=0x001000000056754d
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;	// IMP=0x0010000000567488
- (id)debugURLsForDiagnostics;	// IMP=0x001000000058674a
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarHidden;
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarStyle;
@property(readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property(readonly, nonatomic) UIViewController *px_previousViewControllerInNavigationController;
@property(retain, nonatomic, setter=px_setSelectionActionMenus:) NSArray *px_selectionActionMenus;
@property(retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005863db
- (_Bool)px_isDescendantOfViewController:(id)arg1;	// IMP=0x001000000058633a
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000586216
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(_Bool)arg2;	// IMP=0x0010000000585cdc
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000585c33
@property(readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property(readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic) _Bool px_isVisible;
- (void)_px_viewAppearanceDidChange;	// IMP=0x0010000000591303
- (void)_pxswizzled_imageModulation_viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000005912d5
- (void)_pxswizzled_imageModulation_viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000005912a7
- (void)_pxswizzled_imageModulation_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000591279
- (void)px_setNeedsImageModulationIntensityUpdate;	// IMP=0x001000000059123c
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;	// IMP=0x00100000005911f6
@property(readonly, nonatomic) double px_HDRFocus;
- (_Bool)_px_windowMatchesImageModulationManager:(id)arg1;	// IMP=0x00100000005910f7
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;	// IMP=0x0010000000590f5d
- (double)_px_imageModulationMixFactorWithPresentedViewController:(id)arg1;	// IMP=0x0010000000590da9
@property(readonly, nonatomic) double px_effectiveImageModulationIntensity;
@property(readonly, nonatomic) double px_effectiveHDRFocus;
@property(nonatomic, getter=px_isImageModulationEnabled, setter=px_setImageModulationEnabled:) _Bool px_imageModulationEnabled;
@property(readonly, nonatomic) struct CGSize px_windowReferenceSize;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000007730fe
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000007730a2
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000773046
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000772fe6
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;	// IMP=0x0010000000772d60
- (void)px_enableOneUpPresentation;	// IMP=0x0010000000772cf9
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000008342bb
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000083429f
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000083404e
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;	// IMP=0x0010000000833fb4
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0010000000833e45
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0010000000833e3d
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000833ab7
@property(readonly, nonatomic) _Bool px_allowsTabSwitching;
- (id)px_splitViewController;	// IMP=0x0010000000a4a820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@property(readonly) Class superclass;
@end

