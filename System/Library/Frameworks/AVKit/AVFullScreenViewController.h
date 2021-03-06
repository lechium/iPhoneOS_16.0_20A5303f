//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol AVFullScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVFullScreenViewController : UIViewController
{
    UIViewController<AVFullScreenViewControllerDelegate> *_delegate;	// 8 = 0x8
    AVFullScreenViewController *_associatedFullScreenViewController;	// 16 = 0x10
    AVFullScreenViewController *_sourceFullScreenViewController;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000067c35
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak AVFullScreenViewController *sourceFullScreenViewController; // @synthesize sourceFullScreenViewController=_sourceFullScreenViewController;
@property(nonatomic) __weak AVFullScreenViewController *associatedFullScreenViewController; // @synthesize associatedFullScreenViewController=_associatedFullScreenViewController;
@property(nonatomic) __weak UIViewController<AVFullScreenViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)avkit_isEffectivelyFullScreen;	// IMP=0x0000000000067b79
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000067a99
- (_Bool)_requiresCustomPresentationController;	// IMP=0x0000000000067a66
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x0000000000067a5b
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x0000000000067a49
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000067993
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000067940
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000000678ed
- (_Bool)shouldAutorotate;	// IMP=0x00000000000678a9
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000067865
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000067821
- (_Bool)modalPresentationCapturesStatusBarAppearance;	// IMP=0x0000000000067819
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000677d8
- (void)attachContentView;	// IMP=0x0000000000067412
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000067363
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x00000000000672d6
- (void)loadView;	// IMP=0x000000000006729d
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000067295
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000006719e
- (id)keyCommands;	// IMP=0x000000000006711e
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000670da

@end

