//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, UIWindow, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionViewControllerHelper : NSObject
{
    _UIPreviewInteractionHighlighter *_highlighter;	// 8 = 0x8
    _UIPreviewInteractionViewControllerPresentation *_viewControllerPresentation;	// 16 = 0x10
    UIWindow *_presentingWindow;	// 24 = 0x18
    CDUnknownBlockType _presentationCompletion;	// 32 = 0x20
    CDUnknownBlockType _dismissalCompletion;	// 40 = 0x28
    _Bool _shouldActAsAppearanceAnimationController;	// 48 = 0x30
    _Bool _shouldUseDefaultPresentationController;	// 49 = 0x31
    UIViewController *_previousParentViewController;	// 56 = 0x38
    UIView *_previousSuperview;	// 64 = 0x40
    id <UIViewControllerContextTransitioning> _currentTransitionContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d77102
@property(readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation; // @synthesize viewControllerPresentation=_viewControllerPresentation;
- (void)_performDismissalCompletionIfNeeded;	// IMP=0x0000000000d770c4
- (void)_finalizeAfterViewControllerPresentation;	// IMP=0x0000000000d76f71
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000d76adb
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000d7673d
- (void)_performPresentViewControllerFromViewController:(id)arg1;	// IMP=0x0000000000d764df
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;	// IMP=0x0000000000d764cd
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000d75edb
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000d75ecd
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000d75b92
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000d75b85
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000d75b78
- (void)dismissViewController;	// IMP=0x0000000000d75a90
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d758b7
- (id)initWithViewControllerPresentation:(id)arg1;	// IMP=0x0000000000d75730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

