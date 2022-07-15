//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSMutableOrderedSet, NSString, RBSProcessHandle, WFActionUserInterfaceListener, WFScreenOnObserver, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFBannerPresentable, WFBannerRequest;

@interface WFBannerManager : NSObject
{
    _Bool _shouldObserveDisplayLayout;	// 8 = 0x8
    struct os_unfair_lock_s _presentedBannerLock;	// 12 = 0xc
    struct os_unfair_lock_s _inflightRequestLock;	// 16 = 0x10
    id <WFBannerPresentable> _presentedBanner;	// 24 = 0x18
    id <WFBannerRequest> _inflightRequest;	// 32 = 0x20
    NSMutableOrderedSet *_pendingRequests;	// 40 = 0x28
    NSMutableDictionary *_runningPersistentWorkflows;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    WFActionUserInterfaceListener *_actionUserInterfaceListener;	// 64 = 0x40
    CDUnknownBlockType _dialogRequestCompletionHandler;	// 72 = 0x48
    WFWorkflowRunningContext *_runningContextWaitingForFollowUpRequest;	// 80 = 0x50
    CDUnknownBlockType _bannerPresentationCompletion;	// 88 = 0x58
    WFWorkflowRunningContext *_presentedPersistentRunningContext;	// 96 = 0x60
    RBSProcessHandle *_daemonHandle;	// 104 = 0x68
    WFScreenOnObserver *_screenOnObserver;	// 112 = 0x70
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000000aad6
@property(nonatomic) _Bool shouldObserveDisplayLayout; // @synthesize shouldObserveDisplayLayout=_shouldObserveDisplayLayout;
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(readonly, nonatomic) WFScreenOnObserver *screenOnObserver; // @synthesize screenOnObserver=_screenOnObserver;
@property(retain, nonatomic) RBSProcessHandle *daemonHandle; // @synthesize daemonHandle=_daemonHandle;
@property(retain, nonatomic) WFWorkflowRunningContext *presentedPersistentRunningContext; // @synthesize presentedPersistentRunningContext=_presentedPersistentRunningContext;
@property(copy, nonatomic) CDUnknownBlockType bannerPresentationCompletion; // @synthesize bannerPresentationCompletion=_bannerPresentationCompletion;
@property(retain, nonatomic) WFWorkflowRunningContext *runningContextWaitingForFollowUpRequest; // @synthesize runningContextWaitingForFollowUpRequest=_runningContextWaitingForFollowUpRequest;
@property(copy, nonatomic) CDUnknownBlockType dialogRequestCompletionHandler; // @synthesize dialogRequestCompletionHandler=_dialogRequestCompletionHandler;
@property(retain, nonatomic) WFActionUserInterfaceListener *actionUserInterfaceListener; // @synthesize actionUserInterfaceListener=_actionUserInterfaceListener;
@property(readonly, nonatomic) struct os_unfair_lock_s inflightRequestLock; // @synthesize inflightRequestLock=_inflightRequestLock;
@property(readonly, nonatomic) struct os_unfair_lock_s presentedBannerLock; // @synthesize presentedBannerLock=_presentedBannerLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (struct CGSize)preferredContainerSize;	// IMP=0x001000000000a970
- (struct CGSize)preferredPresentationSize;	// IMP=0x001000000000a8ea
- (_Bool)presentedBannerIsStatusForRunningContext:(id)arg1;	// IMP=0x001000000000a81d
- (_Bool)runningContextIsInPersistentMode:(id)arg1;	// IMP=0x001000000000a788
- (id)dismissalReasonWithReason:(id)arg1;	// IMP=0x001000000000a75c
- (id)presentedPlatter;	// IMP=0x001000000000a6c9
- (_Bool)queuedDialogIsActionUIRequest:(id)arg1;	// IMP=0x001000000000a67b
- (_Bool)alwaysShowsStatus;	// IMP=0x001000000000a673
- (_Bool)screenOn;	// IMP=0x001000000000a62f
- (void)stopObservingScreenOnState;	// IMP=0x001000000000a5f2
- (void)beginObservingScreenOnState;	// IMP=0x001000000000a5b5
- (_Bool)shouldPresentNextBannerBasedOnLayout:(id)arg1;	// IMP=0x001000000000a3cd
- (id)configuredDisplayLayoutMonitor;	// IMP=0x001000000000a322
- (void)keyboardWillChange;	// IMP=0x001000000000a2a0
- (void)stopObservingKeyboard;	// IMP=0x001000000000a240
- (void)beginObservingKeyboard;	// IMP=0x001000000000a1c8
- (void)bannerContainerViewControllerActionUserInterfaceNeedsDismissal:(id)arg1;	// IMP=0x001000000000a169
- (void)bannerContainerViewControllerHomeGestureDidPassThreshold:(id)arg1;	// IMP=0x001000000000a0cc
- (void)bannerContainerViewController:(id)arg1 willDismissWithReason:(id)arg2;	// IMP=0x0010000000009ff0
- (void)bannerContainerViewController:(id)arg1 didPresentBanner:(id)arg2;	// IMP=0x0010000000009f7f
- (void)statusViewControllerDidAppear:(id)arg1;	// IMP=0x0010000000009f0e
- (void)dismissPlatterForActionUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e5d
- (void)actionUserInterface:(id)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;	// IMP=0x0010000000009e57
- (void)actionUserInterface:(id)arg1 showViewControllerInPlatter:(id)arg2;	// IMP=0x0010000000009c6b
- (id)presentationAnchorForActionUserInterface:(id)arg1;	// IMP=0x0010000000009bf1
- (id)viewControllerForPresentingActionUserInterface:(id)arg1;	// IMP=0x0010000000009b8c
- (void)dialogViewController:(id)arg1 didFinishWithResponse:(id)arg2 waitForFollowUpRequest:(_Bool)arg3;	// IMP=0x0010000000009aa6
- (void)cancelAllPendingRequests;	// IMP=0x0010000000009a35
- (void)queue_resetWithReason:(id)arg1;	// IMP=0x001000000000980a
- (void)beginDaemonMonitoringWithReason:(id)arg1;	// IMP=0x0010000000009580
- (void)getBannerForQueuedDialogRequest:(id)arg1 dialogIsBreakthroughSmartPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009431
- (_Bool)dialogRequestShouldNotEmbed:(id)arg1;	// IMP=0x00100000000093e6
- (void)queue_handleStatusCompletionOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008f54
- (void)getBannerForQueuedStatusPresentation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008e8e
- (void)queue_updatePresentedStatusWithProgressForRunningContext:(id)arg1;	// IMP=0x00100000000089aa
- (void)queue_removePendingStatusPresentationsForRunningContext:(id)arg1;	// IMP=0x00100000000086d4
- (void)queue_stopTrackingPersistentModeContext:(id)arg1;	// IMP=0x00100000000084ec
- (void)queue_enqueuePersistentModePresentationForRunningContext:(id)arg1 completed:(_Bool)arg2;	// IMP=0x00100000000081ae
- (id)queue_statusPresentationForRunningContext:(id)arg1 completed:(_Bool)arg2;	// IMP=0x0010000000007fa5
- (id)defaultPostOptions;	// IMP=0x0010000000007f08
- (id)bannerSource;	// IMP=0x0010000000007ee3
- (void)queue_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007b2d
- (void)queue_revokePillPresentableForContext:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000078b7
- (void)queue_revokePresentableForContext:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000007538
- (void)queue_presentNextBannerWithReason:(id)arg1;	// IMP=0x0010000000006920
- (void)setRunningPersistentWorkflows:(id)arg1;	// IMP=0x001000000000690f
@property(readonly, nonatomic) NSMutableDictionary *runningPersistentWorkflows; // @synthesize runningPersistentWorkflows=_runningPersistentWorkflows;
- (void)setPendingRequests:(id)arg1;	// IMP=0x00100000000068be
@property(readonly, nonatomic) NSMutableOrderedSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) id <WFBannerRequest> inflightRequest; // @synthesize inflightRequest=_inflightRequest;
@property(retain, nonatomic) id <WFBannerPresentable> presentedBanner; // @synthesize presentedBanner=_presentedBanner;
- (void)dismissPresentedContentForRunningContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006694
- (void)showDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000656c
- (void)completePersistentModeWithSuccess:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006443
- (void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006351
- (void)dealloc;	// IMP=0x00100000000062cc
- (id)init;	// IMP=0x001000000000616a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
