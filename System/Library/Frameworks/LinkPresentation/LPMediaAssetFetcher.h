//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVURLAsset, NSMutableData, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface LPMediaAssetFetcher
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    AVURLAsset *_asset;	// 16 = 0x10
    _Bool _hasAudio;	// 24 = 0x18
    NSString *_MIMEType;	// 32 = 0x20
    NSURLSession *_session;	// 40 = 0x28
    NSMutableData *_receivedData;	// 48 = 0x30
    _Bool _loadingIsNonAppInitiated;	// 56 = 0x38
    _Bool _shouldDownloadIfPossible;	// 57 = 0x39
    NSURL *_URL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000534e
@property(nonatomic) _Bool shouldDownloadIfPossible; // @synthesize shouldDownloadIfPossible=_shouldDownloadIfPossible;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000004f73
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000000004ecc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004dd4
- (id)audioProperties;	// IMP=0x0000000000004da6
- (id)videoProperties;	// IMP=0x0000000000004d40
- (void)_completedWithAudio:(id)arg1;	// IMP=0x0000000000004b95
- (void)_completedWithVideo:(id)arg1;	// IMP=0x00000000000049d8
- (void)cancel;	// IMP=0x0000000000004984
- (void)stopLoading;	// IMP=0x0000000000004943
- (void)_resolveVideo;	// IMP=0x0000000000004150
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000407c
- (id)init;	// IMP=0x0000000000004023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

