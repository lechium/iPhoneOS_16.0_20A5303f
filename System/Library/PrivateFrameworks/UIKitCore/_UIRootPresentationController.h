//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UISheetPresentationController.h"

@class NSString, UIStatusBarHideAnimationParameters, UIStatusBarStyleAnimationParameters, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIRootPresentationController : _UISheetPresentationController
{
    UIWindow *_presentingWindow;	// 8 = 0x8
}

+ (_Bool)_allowsDeferredTransitions;	// IMP=0x0010000000418410
- (void).cxx_destruct;	// IMP=0x000000000041846f
@property(readonly, nonatomic) __weak UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(readonly, nonatomic) long long preferredStatusBarUpdateAnimation;
@property(readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property(readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x0000000000418420
- (_Bool)_mayChildGrabPresentedViewControllerView;	// IMP=0x0000000000418418
- (_Bool)_isRootPresentation;	// IMP=0x0000000000418408
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000041831d
@property(readonly, nonatomic) int _preferredStatusBarVisibility;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
- (id)_fullscreenPresentationSuperview;	// IMP=0x00000000004182f5
- (id)_parentTraitEnvironment;	// IMP=0x00000000004182e3
- (id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2;	// IMP=0x0000000000418270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

