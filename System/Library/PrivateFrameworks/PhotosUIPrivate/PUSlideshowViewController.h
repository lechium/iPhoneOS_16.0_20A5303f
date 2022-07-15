//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, OKPresentationViewController, PHPlaceholderView, PUSlideshowSession, PUSlideshowViewControllerSpec, UITapGestureRecognizer;
@protocol PUSlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewController : UIViewController
{
    OKPresentationViewController *_currentPresentationController;	// 8 = 0x8
    PUSlideshowViewControllerSpec *_spec;	// 16 = 0x10
    UITapGestureRecognizer *_tapGestureRecognizer;	// 24 = 0x18
    unsigned long long _playerStateButtonItemIndex;	// 32 = 0x20
    _Bool __needsUpdateSpec;	// 40 = 0x28
    PUSlideshowSession *_session;	// 48 = 0x30
    unsigned long long _mode;	// 56 = 0x38
    id <PUSlideshowViewControllerDelegate> _delegate;	// 64 = 0x40
    PUSlideshowViewController *__secondScreenBrowser;	// 72 = 0x48
    PHPlaceholderView *__slideshowPlaceholderView;	// 80 = 0x50
    UIViewController *__slideshowSettingsViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004677d9
@property(retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController; // @synthesize _slideshowSettingsViewController=__slideshowSettingsViewController;
@property(retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView; // @synthesize _slideshowPlaceholderView=__slideshowPlaceholderView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property(nonatomic) __weak id <PUSlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) PUSlideshowSession *session; // @synthesize session=_session;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;	// IMP=0x00000000004676da
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;	// IMP=0x00000000004676c5
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;	// IMP=0x0000000000467697
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;	// IMP=0x0000000000467604
- (id)contentViewControllerForAirPlayController:(id)arg1;	// IMP=0x0000000000467569
- (void)couchPotatoPlaybackFinished;	// IMP=0x00000000004674ab
- (void)settingsDidFinished:(id)arg1;	// IMP=0x0000000000467499
- (id)ancestorViewOfInstance:(id)arg1;	// IMP=0x00000000004673ec
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000004672fe
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000004672ea
- (_Bool)pu_wantsTabBarVisible;	// IMP=0x00000000004672cd
- (_Bool)pu_wantsToolbarVisible;	// IMP=0x00000000004672b0
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x0000000000467293
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000000467273
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000467125
- (void)_updateSpecIfNeeded;	// IMP=0x0000000000466fd8
- (void)_invalidateSpec;	// IMP=0x0000000000466fa5
- (void)_setNeedsUpdate;	// IMP=0x0000000000466f9f
- (_Bool)_needsUpdate;	// IMP=0x0000000000466f8d
- (void)_updateIfNeeded;	// IMP=0x0000000000466ed8
- (void)_updatePlaceholder;	// IMP=0x0000000000466d62
- (void)_updateAirplayButton;	// IMP=0x0000000000466cb4
- (void)_updateRouteObservation;	// IMP=0x0000000000466c1d
- (void)_updatePlayerButton;	// IMP=0x0000000000466b14
- (void)_updateChromeVisibility;	// IMP=0x0000000000466af2
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000466a0b
- (void)_removeSlideshowSettingsViewController;	// IMP=0x0000000000466963
- (void)_removeCurrentPresentationController;	// IMP=0x0000000000466896
- (void)viewWillLayoutSubviews;	// IMP=0x00000000004665ba
- (void)_installPresentationController:(id)arg1;	// IMP=0x00000000004663a0
- (void)_dismissSlideshow;	// IMP=0x00000000004662b8
- (void)_handleStateChange;	// IMP=0x0000000000466004
- (void)_handleAppWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000465f62
- (void)_settingsButtonTapped:(id)arg1;	// IMP=0x0000000000465de1
- (void)_airplayButtonTapped:(id)arg1;	// IMP=0x0000000000465c8f
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x0000000000465bed
- (void)_tapGesture:(id)arg1;	// IMP=0x0000000000465b15
- (void)_playerStateButtonTapped:(id)arg1;	// IMP=0x0000000000465a52
- (id)visibleAssets;	// IMP=0x000000000046599a
- (void)_setupTapGesture;	// IMP=0x00000000004658bb
- (void)_setupChromeBar;	// IMP=0x000000000046564b
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00000000004655d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000465501
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000046547e
- (void)finishSession;	// IMP=0x0000000000465314
- (void)viewDidLoad;	// IMP=0x00000000004651f5
- (void)loadView;	// IMP=0x0000000000465188
- (void)dealloc;	// IMP=0x000000000046514a
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000464f5b
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000464f47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000464f33
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000464f1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
