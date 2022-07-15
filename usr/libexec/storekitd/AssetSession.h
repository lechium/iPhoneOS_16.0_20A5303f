//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface AssetSession : NSObject
{
    NSOperationQueue *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSMutableDictionary *_sessions;	// 32 = 0x20
}

+ (void)obliterateBackgroundSessionsAndHandleEventStream;	// IMP=0x00200000000591f3
+ (id)defaultSession;	// IMP=0x001000000005904c
- (void).cxx_destruct;	// IMP=0x00200000000610c6
- (void)_startTaskUsingTaskInfo:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000000601c8
- (void)_startNetworkActivityUsingTaskInfo:(id)arg1 withTask:(id)arg2;	// IMP=0x000000000005ff1c
- (void)_prepareRequestUsingTaskInfo:(id)arg1;	// IMP=0x001000000005fa46
- (void)_prepareDataConsumerUsingTaskInfo:(id)arg1;	// IMP=0x001000000005f379
- (void)_retryTaskUsingTaskInfo:(id)arg1;	// IMP=0x001000000005ef87
- (void)_reportMetricsForTaskInfo:(id)arg1 withCompletionError:(id)arg2;	// IMP=0x001000000005ec21
- (void)_finishPromiseUsingTaskInfo:(id)arg1;	// IMP=0x001000000005e800
- (id)_findSessionUsingTaskInfo:(id)arg1 withProperties:(id)arg2;	// IMP=0x001000000005e10c
- (void)_completeNetworkActivityWithReason:(int)arg1 usingTaskInfo:(id)arg2;	// IMP=0x001000000005e097
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005dded
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d34b
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x001000000005ced0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000005c71d
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x001000000005c1e7
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005a42a
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000059be1
- (id)assetPromiseWithRequest:(id)arg1;	// IMP=0x00100000000593a8
@property(readonly) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000005916a
- (id)init;	// IMP=0x00100000000590a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
