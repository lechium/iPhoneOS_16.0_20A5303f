//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FigHTTPRequestSessionDataDelegate : NSObject
{
    NSMutableDictionary *_taskToFigHTTPRequest;	// 8 = 0x8
    struct OpaqueFigReentrantMutex *_taskToFigHTTPRequestMutex;	// 16 = 0x10
    unsigned char _doesIgnoreDidReceiveResponseDisposition;	// 24 = 0x18
}

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x00000000003b04b8
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003b035a
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000003afa17
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003adecd
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000003ad05a
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003ac4ae
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003abf71
- (struct FigRetainProxy *)_copyAndLockRequestForTask:(id)arg1;	// IMP=0x00000000003abc00
- (void)restoreVoucher:(id)arg1;	// IMP=0x00000000003abbe3
- (id)adoptVoucherFromRetainProxy:(struct FigRetainProxy *)arg1;	// IMP=0x00000000003abbb9
- (void)_deregisterFigHTTPRequestForDataTask:(id)arg1;	// IMP=0x00000000003aba9e
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest *)arg1 forDataTask:(id)arg2;	// IMP=0x00000000003ab95a
- (void)dealloc;	// IMP=0x00000000003ab911
- (id)init;	// IMP=0x00000000003ab8fd
- (id)initWithResponseDispositionOption:(_Bool)arg1;	// IMP=0x00000000003ab7b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
