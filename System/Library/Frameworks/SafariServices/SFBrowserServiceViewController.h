//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFBrowserContentViewController.h"

@class NSDate, NSString, NSTimer, SFBrowserPersonaAnalyticsHelper, SFSystemAlert, WKProcessPool, _SFSafariViewControllerPrewarmingRequestThrottler, _SFWebViewUsageMonitor;

__attribute__((visibility("hidden")))
@interface SFBrowserServiceViewController : _SFBrowserContentViewController
{
    CDUnknownBlockType _activityViewControllerInfoFetchCompletionHandler;	// 8 = 0x8
    _SFWebViewUsageMonitor *_usageMonitor;	// 16 = 0x10
    NSDate *_lastHostApplicationSuspendDate;	// 24 = 0x18
    WKProcessPool *_processPool;	// 32 = 0x20
    _Bool _canNotifyHostApplicationOfRedirects;	// 40 = 0x28
    _Bool _touchEventsShouldStopRedirectNotifications;	// 41 = 0x29
    _Bool _isExpectingClientRedirect;	// 42 = 0x2a
    _Bool _hasBegunFirstNavigation;	// 43 = 0x2b
    _Bool _hasConnectedToHostApplication;	// 44 = 0x2c
    SFBrowserPersonaAnalyticsHelper *_cachedAnalyticsHelper;	// 48 = 0x30
    NSTimer *_redirectNotificationTimer;	// 56 = 0x38
    _Bool _hostApplicationIsForeground;	// 64 = 0x40
    _SFSafariViewControllerPrewarmingRequestThrottler *_prewarmingRequestThrottler;	// 72 = 0x48
    _Bool _isUsedForAuthentication;	// 80 = 0x50
    SFSystemAlert *_webAuthenticationDataSharingConfirmation;	// 88 = 0x58
    NSString *_hostApplicationCallbackURLScheme;	// 96 = 0x60
}

+ (id)_exportedInterface;	// IMP=0x0010000000089a30
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000089a10
- (void).cxx_destruct;	// IMP=0x000000000008f165
@property(copy, nonatomic) NSString *hostApplicationCallbackURLScheme; // @synthesize hostApplicationCallbackURLScheme=_hostApplicationCallbackURLScheme;
@property(retain, nonatomic) SFSystemAlert *webAuthenticationDataSharingConfirmation; // @synthesize webAuthenticationDataSharingConfirmation=_webAuthenticationDataSharingConfirmation;
@property(nonatomic) _Bool _isUsedForAuthentication; // @synthesize _isUsedForAuthentication;
- (void)_updateMaxVisibleHeightPercentageUserDriven:(_Bool)arg1;	// IMP=0x000000000008f0bf
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(_Bool)arg2;	// IMP=0x000000000008f0aa
- (void)browserViewDidReceiveTouchEvent:(id)arg1;	// IMP=0x000000000008f017
- (void)safariActivity:(id)arg1 didFinish:(_Bool)arg2;	// IMP=0x000000000008ee8e
- (void)webViewControllerWebProcessDidCrash:(id)arg1;	// IMP=0x000000000008ede4
- (void)webViewController:(id)arg1 didChangeFullScreen:(_Bool)arg2;	// IMP=0x000000000008ed32
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;	// IMP=0x000000000008ec3e
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x000000000008ea6a
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;	// IMP=0x000000000008e95b
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;	// IMP=0x000000000008e91f
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;	// IMP=0x000000000008e7ca
- (_Bool)_shouldReloadImmediatelyAfterPageLoadError;	// IMP=0x000000000008e7ba
- (id)_hostAppBundleId;	// IMP=0x000000000008e7a8
- (long long)_persona;	// IMP=0x000000000008e78f
- (id)_analyticsHelper;	// IMP=0x000000000008e71f
- (id)bundleIdentifierForProfileInstallation;	// IMP=0x000000000008e70d
- (id)_applicationPayloadForOpeningInSafari;	// IMP=0x000000000008e61f
- (void)closeDatabasesOnBackgroundingOrDismissal;	// IMP=0x000000000008e357
- (void)_hostApplicationDidEnterBackground;	// IMP=0x000000000008e10c
- (void)_hostApplicationWillEnterForeground;	// IMP=0x000000000008dea7
- (void)_didLoadWebView;	// IMP=0x000000000008de56
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;	// IMP=0x000000000008da50
- (_Bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;	// IMP=0x000000000008d8d6
- (_Bool)_notifyInitialLoadDidFinish:(_Bool)arg1;	// IMP=0x000000000008d818
- (void)_updateRemoteSwipeGestureState;	// IMP=0x000000000008d7a8
- (void)_dismiss;	// IMP=0x000000000008d6bc
- (void)didRequestShowLinkPreviews:(_Bool)arg1;	// IMP=0x000000000008d589
- (void)didDetectUserInteractionFromHostApp;	// IMP=0x000000000008d567
- (void)didDetectRemoteViewControllerViewIsHidden;	// IMP=0x000000000008d545
- (void)setDismissButtonStyle:(long long)arg1;	// IMP=0x000000000008d4e5
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;	// IMP=0x000000000008d42d
- (void)repostNotificationInViewService:(id)arg1;	// IMP=0x000000000008d33c
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008d24f
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;	// IMP=0x000000000008cea3
- (void)_getSafariDataSharingModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008cc87
- (id)websiteDataStoreConfiguration;	// IMP=0x000000000008c6b5
- (_Bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;	// IMP=0x000000000008c393
- (id)_websiteDataStoreURL;	// IMP=0x000000000008c328
- (id)_webDataStoreRootURL;	// IMP=0x000000000008c14c
- (void)_openCurrentURLInSafari;	// IMP=0x000000000008c0cd
- (void)openCurrentURLInSafariFromPreviewAction;	// IMP=0x000000000008c09e
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(_Bool)arg2;	// IMP=0x000000000008bdbf
- (void)clearWebsiteDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bc53
- (void)_prewarmConnectionsToURLs:(id)arg1;	// IMP=0x000000000008b9c6
- (void)invalidatePrewarmingTokenWithID:(unsigned long long)arg1;	// IMP=0x000000000008b9a9
- (void)requestPrewarmingWithTokens:(id)arg1;	// IMP=0x000000000008b6b8
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008b62f
- (void)startResolveRedirectionForURL:(id)arg1;	// IMP=0x000000000008b50b
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;	// IMP=0x000000000008b0cf
- (void)addClickAttribution:(id)arg1;	// IMP=0x000000000008af81
- (id)_trustedReportEndpoint;	// IMP=0x000000000008ad0a
- (_Bool)_shouldAcceptMessage:(id)arg1;	// IMP=0x000000000008ab4d
- (void)loadURL:(id)arg1;	// IMP=0x000000000008a8c4
- (id)processPool;	// IMP=0x000000000008a6d6
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000008a5d2
- (id)processPoolConfiguration;	// IMP=0x000000000008a4e3
- (void)setPreferredBarTintColor:(id)arg1 controlTintColor:(id)arg2;	// IMP=0x000000000008a459
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000008a32c
- (void)setDisplayMode:(long long)arg1;	// IMP=0x000000000008a26b
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000008a228
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008a090
- (void)_willAppearInRemoteViewController;	// IMP=0x0000000000089e9b
- (void)dealloc;	// IMP=0x0000000000089c8f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000089b7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
