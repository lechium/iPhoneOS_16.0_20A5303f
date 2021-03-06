//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, SiteIconDownloadRequest, WKWebView, WebBookmark, _SFReaderController;

@interface ReadingListFetcherDocument : NSObject
{
    long long _retainCount;	// 8 = 0x8
    WebBookmark *_bookmark;	// 16 = 0x10
    SiteIconDownloadRequest *_thumbnailDownloadRequest;	// 24 = 0x18
    _Bool _completionPendingThumbnail;	// 32 = 0x20
    _Bool _isLoading;	// 33 = 0x21
    _Bool _finishedLoadingMainFrame;	// 34 = 0x22
    _Bool _mainPageArchived;	// 35 = 0x23
    _Bool _fetcherInitiatedLoadCancel;	// 36 = 0x24
    _Bool _loadFailed;	// 37 = 0x25
    _Bool _didFinishFetchingDocument;	// 38 = 0x26
    unsigned long long _numCompletedSubpages;	// 40 = 0x28
    double _loadStartTimestamp;	// 48 = 0x30
    double _dataReceivedTimestamp;	// 56 = 0x38
    NSTimer *_slowLoadTimer;	// 64 = 0x40
    NSTimer *_readerPageTimer;	// 72 = 0x48
    NSTimer *_dataCheckTimer;	// 80 = 0x50
    WKWebView *_webView;	// 88 = 0x58
    WKWebView *_readerWebView;	// 96 = 0x60
    _SFReaderController *_readerContext;	// 104 = 0x68
    NSString *_quickLookFilePath;	// 112 = 0x70
    NSString *_suggestedFileName;	// 120 = 0x78
}

+ (_Bool)_shouldAutoSizeText;	// IMP=0x0020000000007934
@property(readonly, nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_fetcherInitiatedLoadCancel;
- (void)siteIconDownloadRequest:(id)arg1 didComputeIconKeyColor:(id)arg2;	// IMP=0x0010000000009336
- (void)siteIconDownloadRequest:(id)arg1 didLoadIconData:(id)arg2 withIconURL:(id)arg3;	// IMP=0x001000000000928f
- (void)siteIconDownloadRequestDidFail:(id)arg1;	// IMP=0x001000000000924d
- (void)_cleanUpAfterIconDownloadRequestCompletion;	// IMP=0x00100000000091fc
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;	// IMP=0x00100000000091ea
- (void)createReaderWebViewForReaderController:(id)arg1;	// IMP=0x0010000000008f72
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(id)arg2 dueTo:(long long)arg3;	// IMP=0x0010000000008e4b
- (void)_navigationFailedWithError:(id)arg1;	// IMP=0x0010000000008cf3
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000008cde
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000008cc9
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x001000000000889c
- (void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;	// IMP=0x0010000000008878
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0010000000008862
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000087f2
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x00100000000087ba
- (void)_didCollectReadingListInfo:(id)arg1 withAvailability:(_Bool)arg2;	// IMP=0x0010000000008573
- (void)didFinishLoadingAllReaderPages;	// IMP=0x001000000000843e
- (void)_didCancelLoad;	// IMP=0x00100000000083d2
- (void)cancelLoad;	// IMP=0x00100000000083a1
- (void)loadBookmark:(id)arg1;	// IMP=0x00100000000081e0
- (void)_killWebProcessIfNeededAndFail;	// IMP=0x0010000000008178
- (void)_writeOfflineWebViewWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000813c
- (_Bool)_shouldArchiveBookmarkWithID:(int)arg1;	// IMP=0x00100000000080c1
- (void)_dataCheckTimeoutExpired;	// IMP=0x001000000000802d
- (void)_readerPageTimeoutExpired;	// IMP=0x0010000000007fd9
- (void)_slowLoadTimeoutExpired;	// IMP=0x0010000000007f85
- (void)_dataReceived;	// IMP=0x0010000000007f6b
- (void)_loadDidFail;	// IMP=0x0010000000007f25
- (void)_saveAndSelfExpire;	// IMP=0x0010000000007d19
- (void)clearWebView;	// IMP=0x0010000000007c8e
- (void)finishFetchingDocument;	// IMP=0x0010000000007bfc
- (void)_didFinishLoadingSubpage;	// IMP=0x0010000000007ba7
- (double)progress;	// IMP=0x0010000000007b65
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000007af5
- (void)dealloc;	// IMP=0x00100000000079a7
- (id)init;	// IMP=0x0010000000007661
- (_Bool)_isDeallocating;	// IMP=0x0010000000007642
- (_Bool)_tryRetain;	// IMP=0x0010000000007606
- (unsigned long long)retainCount;	// IMP=0x00100000000075f5
- (oneway void)release;	// IMP=0x001000000000757e
- (id)retain;	// IMP=0x0010000000007562

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

