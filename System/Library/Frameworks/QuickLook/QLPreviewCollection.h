//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QLPreviewControllerStateProtocol><QLPreviewControllerStateProtocol_UIKit, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController
{
    struct _NSRange _previewItemRange;	// 8 = 0x8
    long long _currentItemIndex;	// 24 = 0x18
    QLPreviewItemStore *_itemStore;	// 32 = 0x20
    UIView *_localAccessoryViewContainer;	// 40 = 0x28
    UIView *_remoteAccessoryViewContainer;	// 48 = 0x30
    UITapGestureRecognizer *_tapGesture;	// 56 = 0x38
    UIPanGestureRecognizer *_verticalPanGesture;	// 64 = 0x40
    UISwipeGestureRecognizer *_pageSwipeGesture;	// 72 = 0x48
    UIPanGestureRecognizer *_pagePanGesture;	// 80 = 0x50
    QLAppearance *_appearance;	// 88 = 0x58
    NSString *_loadingString;	// 96 = 0x60
    unsigned long long _visibilityState;	// 104 = 0x68
    _Bool _previewCollectionIsPartOfViewHierarchy;	// 112 = 0x70
    unsigned long long _appearanceActions;	// 120 = 0x78
    _Bool _isAvailable;	// 128 = 0x80
    _Bool _allowInteractiveTransitions;	// 129 = 0x81
    _Bool _fullScreen;	// 130 = 0x82
    _Bool _isEditing;	// 131 = 0x83
    _Bool _currentItemViewControllerIsPerformingFocusedAction;	// 132 = 0x84
    _Bool _isTransitioningPage;	// 133 = 0x85
    _Bool _hasTriggeredInteractiveTransitionAnimation;	// 134 = 0x86
    QLPageViewController *_pageViewController;	// 136 = 0x88
    id <QLPreviewControllerStateProtocol><QLPreviewControllerStateProtocol_UIKit> _stateManager;	// 144 = 0x90
    CDUnknownBlockType _prepareForInvalidationCompletionHandler;	// 152 = 0x98
    NSString *_overrideParentApplicationDisplayIdentifier;	// 160 = 0xa0
    UIPanGestureRecognizer *_slideGesture;	// 168 = 0xa8
    UIPinchGestureRecognizer *_pinchGesture;	// 176 = 0xb0
    UIRotationGestureRecognizer *_rotationGesture;	// 184 = 0xb8
    QLSwipeDownTracker *_swipeDownTracker;	// 192 = 0xc0
    QLPinchRotationTracker *_pinchRotationTracker;	// 200 = 0xc8
    QLTransitionContext *_transitionContext;	// 208 = 0xd0
    id <QLTransitionControllerProtocol> _transitionController;	// 216 = 0xd8
    QLTransitionDriver *_transitionDriver;	// 224 = 0xe0
    NSString *_hostApplicationBundleIdentifier;	// 232 = 0xe8
}

+ (void)previewCollectionUsingRemoteViewController:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083925
+ (id)previewCollectionClassName;	// IMP=0x0010000000083918
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039b7f
+ (id)quickLookExtension;	// IMP=0x0010000000039a59
- (void).cxx_destruct;	// IMP=0x000000000008ae5b
@property _Bool hasTriggeredInteractiveTransitionAnimation; // @synthesize hasTriggeredInteractiveTransitionAnimation=_hasTriggeredInteractiveTransitionAnimation;
@property(copy, nonatomic) NSString *hostApplicationBundleIdentifier; // @synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier;
@property(retain) QLTransitionDriver *transitionDriver; // @synthesize transitionDriver=_transitionDriver;
@property(retain) id <QLTransitionControllerProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property(retain) QLTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain) QLPinchRotationTracker *pinchRotationTracker; // @synthesize pinchRotationTracker=_pinchRotationTracker;
@property(retain) QLSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(retain) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(retain) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain) UIPanGestureRecognizer *slideGesture; // @synthesize slideGesture=_slideGesture;
@property(copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property(copy, nonatomic) CDUnknownBlockType prepareForInvalidationCompletionHandler; // @synthesize prepareForInvalidationCompletionHandler=_prepareForInvalidationCompletionHandler;
@property(nonatomic) _Bool isTransitioningPage; // @synthesize isTransitioningPage=_isTransitioningPage;
@property(nonatomic) _Bool currentItemViewControllerIsPerformingFocusedAction; // @synthesize currentItemViewControllerIsPerformingFocusedAction=_currentItemViewControllerIsPerformingFocusedAction;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <QLPreviewControllerStateProtocol><QLPreviewControllerStateProtocol_UIKit> stateManager; // @synthesize stateManager=_stateManager;
@property(retain) QLPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (_Bool)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg1;	// IMP=0x000000000008ab68
- (id)_sandboxExtensionForEditedFileAtURL:(id)arg1;	// IMP=0x000000000008a9fc
- (void)_updateEnableChangingPageUsingGestures;	// IMP=0x000000000008a954
- (void)_updateCanChangeCurrentPage;	// IMP=0x000000000008a912
- (_Bool)itemPresenterViewControllerShouldForceAutodownloadFile:(id)arg1;	// IMP=0x000000000008a7be
- (void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008a4a0
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1;	// IMP=0x000000000008a469
- (void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;	// IMP=0x000000000008a44c
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;	// IMP=0x000000000008a43a
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008a3c0
- (void)previewItemViewController:(id)arg1 wantsToUpdatePreviewItemDisplayState:(id)arg2;	// IMP=0x000000000008a307
- (void)previewItemViewController:(id)arg1 wantsToUpdateStateRestorationWithUserInfo:(id)arg2;	// IMP=0x000000000008a2e7
- (void)previewItemViewControllerDidHandOverLock:(id)arg1;	// IMP=0x000000000008a2b7
- (void)previewItemViewControllerDidAcquireLock:(id)arg1;	// IMP=0x000000000008a1e1
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(_Bool)arg2;	// IMP=0x000000000008a1b1
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(_Bool)arg2;	// IMP=0x000000000008a0e1
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000089fdb
- (id)loadingTextForPreviewItemViewController:(id)arg1;	// IMP=0x0000000000089fc6
- (void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2;	// IMP=0x0000000000089d20
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;	// IMP=0x0000000000089d0e
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;	// IMP=0x0000000000089cfc
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;	// IMP=0x0000000000089cea
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;	// IMP=0x0000000000089ccb
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;	// IMP=0x0000000000089cae
- (void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000089bff
- (void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000089bd9
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;	// IMP=0x0000000000089bbc
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000089a1d
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;	// IMP=0x00000000000899fd
- (void)previewItemViewController:(id)arg1 wantsToSetRemoteEdgePanGestureWidth:(double)arg2;	// IMP=0x0000000000089957
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(_Bool)arg2;	// IMP=0x00000000000898f0
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000008982d
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000008947b
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000008906c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000088f45
- (_Bool)_toggleFullscreenIfPossible;	// IMP=0x0000000000088ed2
- (void)_tapGestureRecognized;	// IMP=0x0000000000088ec0
- (void)_installGestures;	// IMP=0x000000000008892b
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x0000000000088916
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x000000000008886d
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x00000000000887f3
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x000000000008866c
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;	// IMP=0x00000000000885f9
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;	// IMP=0x000000000008856b
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;	// IMP=0x00000000000884a8
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000087ca9
- (void)_updateWhitePointAdaptivityStyle;	// IMP=0x0000000000087c48
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;	// IMP=0x0000000000087793
- (void)_cleanAccessoryViewContainer;	// IMP=0x0000000000087703
- (void)_updatePrinter;	// IMP=0x000000000008761c
- (void)_updateTitleFromController;	// IMP=0x0000000000087589
- (void)_updateOverlayVisibility;	// IMP=0x00000000000874f1
- (void)_updateOverlay:(_Bool)arg1;	// IMP=0x00000000000874ac
- (void)_updateFullscreen;	// IMP=0x00000000000873fc
- (void)_updateFullscreenBackgroundColor;	// IMP=0x0000000000087355
- (void)_updatePreferredContentSize;	// IMP=0x00000000000872d8
- (_Bool)_isVisible;	// IMP=0x00000000000872c3
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000087249
- (void)setIsContentManaged:(_Bool)arg1;	// IMP=0x0000000000087207
@property(readonly, nonatomic) NSString *parentApplicationDisplayIdentifier;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;	// IMP=0x0000000000087166
- (void)setLoadingString:(id)arg1;	// IMP=0x0000000000087152
- (_Bool)_isBeingPresented;	// IMP=0x00000000000870d6
- (_Bool)_isBeingDismissed;	// IMP=0x000000000008705a
- (_Bool)pinchDismissGestureInProgress;	// IMP=0x0000000000087027
- (_Bool)transitionInProgress;	// IMP=0x0000000000086ff4
- (void)tearDownTransition:(_Bool)arg1;	// IMP=0x0000000000086e26
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000008647c
- (void)triggerInteractiveTransitionAnimationIfNeeded;	// IMP=0x0000000000086079
- (void)keyCommandWasPerformed:(id)arg1;	// IMP=0x0000000000085f4b
- (id)_defaultKeyCommands;	// IMP=0x0000000000085dba
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000085c74
- (void)requestLockForCurrentItem;	// IMP=0x0000000000085bec
- (void)shouldDisplayLockActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000085b7d
- (void)hostApplicationDidBecomeActive;	// IMP=0x0000000000085a80
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;	// IMP=0x000000000008594e
- (void)documentMenuActionWillBegin;	// IMP=0x0000000000085851
- (void)hostSceneWillDeactivate;	// IMP=0x0000000000085754
- (void)actionSheetDidDismiss;	// IMP=0x0000000000085657
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000085511
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085319
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000850e3
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084f82
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000084e96
- (void)notifyStateRestorationUserInfo:(id)arg1;	// IMP=0x0000000000084db1
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;	// IMP=0x0000000000084cf0
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000084bd8
- (void)_setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000084ae1
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000084a43
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;	// IMP=0x000000000008488f
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;	// IMP=0x00000000000847d4
- (void)invalidateService;	// IMP=0x00000000000847ce
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000845f7
@property(readonly) QLItemViewController *currentPreviewItemViewController;
- (void)setScreenEdgePanWidth:(double)arg1;	// IMP=0x0000000000084506
- (_Bool)isRemote;	// IMP=0x00000000000843bc
- (id)accessoryView;	// IMP=0x00000000000842f3
- (void)setRemoteAccessoryContainer:(id)arg1;	// IMP=0x00000000000842df
- (void)updateCurrentPreviewConfiguration;	// IMP=0x0000000000084148
- (void)_updatePreviewVisibility:(_Bool)arg1;	// IMP=0x000000000008401c
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000083f9b
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000083f5f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000083f1e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000083ebf
- (void)loadView;	// IMP=0x0000000000083e2a
- (id)init;	// IMP=0x0000000000083a34
- (void)slideToDismissGestureRecognized:(id)arg1;	// IMP=0x0000000000015aae
- (void)rotationOrPinchGestureRecognized:(id)arg1;	// IMP=0x00000000000153fb
- (id)gestureTracker;	// IMP=0x00000000000153b2
- (void)_tearDownTransition:(_Bool)arg1;	// IMP=0x0000000000014f8d
- (void)_setUpTransitionDriverForPresenting:(_Bool)arg1 duration:(double)arg2;	// IMP=0x00000000000146db
- (void)startNonInteractiveTransitionPresenting:(_Bool)arg1;	// IMP=0x0000000000014429
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x0000000000013fbe
- (void)updateTransitionWithProgress:(double)arg1;	// IMP=0x0000000000013e4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
