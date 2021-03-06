//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, WKWebView;

__attribute__((visibility("hidden")))
@interface WKFullScreenWindowController : NSObject
{
    struct RetainPtr<WKFullScreenPlaceholderView> _webViewPlaceholder;	// 8 = 0x8
    long long _fullScreenState;	// 16 = 0x10
    struct WKWebViewState _viewState;	// 24 = 0x18
    struct RetainPtr<UIWindow> _window;	// 192 = 0xc0
    struct RetainPtr<UIViewController> _rootViewController;	// 200 = 0xc8
    struct RetainPtr<UIViewController> _viewControllerForPresentation;	// 208 = 0xd0
    struct RetainPtr<WKFullScreenViewController> _fullscreenViewController;	// 216 = 0xd8
    struct RetainPtr<UISwipeGestureRecognizer> _startDismissGestureRecognizer;	// 224 = 0xe0
    struct RetainPtr<UIPanGestureRecognizer> _interactivePanDismissGestureRecognizer;	// 232 = 0xe8
    struct RetainPtr<UIPinchGestureRecognizer> _interactivePinchDismissGestureRecognizer;	// 240 = 0xf0
    struct RetainPtr<WKFullScreenInteractiveTransition> _interactiveDismissTransitionCoordinator;	// 248 = 0xf8
    struct unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>> _pipObserver;	// 256 = 0x100
    _Bool _shouldReturnToFullscreenFromPictureInPicture;	// 264 = 0x108
    _Bool _enterFullscreenNeedsExitPictureInPicture;	// 265 = 0x109
    _Bool _returnToFullscreenFromPictureInPicture;	// 266 = 0x10a
    _Bool _blocksReturnToFullscreenFromPictureInPicture;	// 267 = 0x10b
    struct CGRect _initialFrame;	// 272 = 0x110
    struct CGRect _finalFrame;	// 304 = 0x130
    struct CGRect _originalWindowFrame;	// 336 = 0x150
    struct RetainPtr<NSString> _EVOrganizationName;	// 368 = 0x170
    _Bool _EVOrganizationNameIsValid;	// 376 = 0x178
    _Bool _inInteractiveDismiss;	// 377 = 0x179
    _Bool _exitRequested;	// 378 = 0x17a
    _Bool _enterRequested;	// 379 = 0x17b
    _Bool _exitingFullScreen;	// 380 = 0x17c
    struct RetainPtr<id> _notificationListener;	// 384 = 0x180
    WKWebView *__webView;	// 392 = 0x188
}

- (id).cxx_construct;	// IMP=0x000000000045ade5
- (void).cxx_destruct;	// IMP=0x000000000045ac7d
@property(nonatomic) __weak WKWebView *_webView; // @synthesize _webView=__webView;
- (void)_interactivePinchDismissChanged:(id)arg1;	// IMP=0x000000000045aacf
- (void)_interactiveDismissChanged:(id)arg1;	// IMP=0x000000000045a930
- (void)_dismissFullscreenViewController;	// IMP=0x000000000045a7c4
- (void)_startToDismissFullscreenChanged:(id)arg1;	// IMP=0x000000000045a7a0
- (void *)_videoFullscreenManager;	// IMP=0x000000000045a758
- (void *)_manager;	// IMP=0x000000000045a710
- (void)_updateLocationInfo;	// IMP=0x000000000045a654
- (id)_EVOrganizationName;	// IMP=0x000000000045a49c
- (struct __SecTrust *)_serverTrust;	// IMP=0x000000000045a471
- (_Bool)_isSecure;	// IMP=0x000000000045a446
- (void)_invalidateEVOrganizationName;	// IMP=0x000000000045a413
- (void)_exitFullscreenImmediately;	// IMP=0x000000000045a197
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x000000000045a05c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000459f47
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000459e7d
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000459e75
- (void)didExitPictureInPicture;	// IMP=0x0000000000459dc6
- (void)didEnterPictureInPicture;	// IMP=0x0000000000459d9d
- (void)placeholderWillMoveToSuperview:(id)arg1;	// IMP=0x0000000000459cf6
- (void)videoControlsManagerDidChange;	// IMP=0x0000000000459cd6
- (void)webViewDidRemoveFromSuperviewWhileInFullscreen;	// IMP=0x0000000000459c85
- (void)close;	// IMP=0x0000000000459c55
- (void)_completedExitFullScreen;	// IMP=0x00000000004599d9
- (void)_reinsertWebViewUnderPlaceholder;	// IMP=0x0000000000459811
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect)arg1 finalFrame:(struct CGRect)arg2;	// IMP=0x0000000000459591
- (void)exitFullScreen;	// IMP=0x00000000004594e6
- (void)requestExitFullScreen;	// IMP=0x000000000045945e
- (void)requestEnterFullScreen;	// IMP=0x00000000004593c4
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect)arg1 finalFrame:(struct CGRect)arg2;	// IMP=0x0000000000458b30
- (void)enterFullScreen;	// IMP=0x0000000000457d45
@property(readonly, retain, nonatomic) UIView *webViewPlaceholder;
@property(readonly, nonatomic) _Bool isFullScreen;
- (void)dealloc;	// IMP=0x0000000000457cb6
- (id)initWithWebView:(id)arg1;	// IMP=0x0000000000457c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

