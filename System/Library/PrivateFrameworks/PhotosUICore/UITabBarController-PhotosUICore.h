//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@interface UITabBarController (PhotosUICore)
- (void)_px_selectTabForKeyCommand:(id)arg1;	// IMP=0x0030000000158a33
- (id)px_defaultKeyCommandsWithDelegate:(id)arg1;	// IMP=0x00300000001588eb
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00300000001588cd
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;	// IMP=0x0030000000157d87
@property(readonly, nonatomic) _Bool px_hidesTabBarForCurrentHorizontalSizeClass;
@property(readonly, nonatomic) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
- (_Bool)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;	// IMP=0x0030000000157c6b
@property(readonly, nonatomic, getter=px_isTabBarHidden) _Bool px_tabBarHidden;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00300000003ae243
- (double)px_imageModulationIntensity;	// IMP=0x00300000005914cd
- (double)px_HDRFocus;	// IMP=0x003000000059147d
- (_Bool)px_isImageModulationEnabled;	// IMP=0x0030000000591439
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00300000006fbca2
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00300000006fb3ce
- (id)px_navigationDestination;	// IMP=0x0030000000834c1c
- (void)px_switchToTabAndNavigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0030000000834a68
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00300000008348c9
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00300000008347cb
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x003000000083474b
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0030000000834680
@end
