//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSObject, NSString, NSURLResponse;
@protocol OS_dispatch_data;

@interface __NSCFURLLocalSessionConnection
{
    struct SessionConnectionLoadable *_loaderClient;	// 72 = 0x48
    struct URLConnectionLoader *_loader;	// 80 = 0x50
    _Bool _canceled;	// 88 = 0x58
    long long _suspended;	// 96 = 0x60
    NSObject<OS_dispatch_data> *_pendingData;	// 104 = 0x68
    long long _pendingCompletion;	// 112 = 0x70
    unsigned long long _didReceiveResponseDisposition;	// 120 = 0x78
    NSError *_pendingError;	// 128 = 0x80
    int _state;	// 136 = 0x88
    long long _clientBufferLength;	// 144 = 0x90
    NSObject<OS_dispatch_data> *_sniffData;	// 152 = 0x98
    NSURLResponse *_sniffResponse;	// 160 = 0xa0
    _Bool _isMixedReplace;	// 168 = 0xa8
    _Bool _didCheckMixedReplace;	// 169 = 0xa9
    _Bool _didCheckCredentialsSuppliedInURL;	// 170 = 0xaa
    _Bool _actuallyTriedCredentialsSuppliedInURL;	// 171 = 0xab
    unsigned long long _maxDataSegmentCoalesceThreshhold;	// 176 = 0xb0
    unsigned long long _maxDataSegmentCount;	// 184 = 0xb8
    unsigned int _didReceiveDataCount;	// 192 = 0xc0
}

- (void)_captureTransportConnection:(shared_ptr_8da4e70b)arg1 extraBytes:(id)arg2;	// IMP=0x0000000000099ba2
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x0000000000099b56
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000099b50
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000099b4a
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000099b44
- (void)_needNewBodyStream;	// IMP=0x0000000000099b00
- (void)_didReceiveChallenge:(id)arg1;	// IMP=0x00000000000997e3
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000099793
- (void)_alternatePathAvailable:(int)arg1;	// IMP=0x000000000009974c
- (void)_conditionalRequirementsChanged:(_Bool)arg1;	// IMP=0x0000000000099705
- (void)_connectionIsWaitingWithReason:(long long)arg1;	// IMP=0x00000000000996bd
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000099675
- (void)_didFinishWithError:(id)arg1;	// IMP=0x00000000000995d7
- (void)_didSendBodyData:(struct UploadProgressInfo)arg1;	// IMP=0x0000000000099583
- (void)_didReceiveData:(id)arg1;	// IMP=0x00000000000993bb
- (void)_didReceiveResponse:(id)arg1 sniff:(_Bool)arg2;	// IMP=0x000000000009926f
- (void)_didUseCachedResponse;	// IMP=0x0000000000099265
- (void)_ackBytes:(long long)arg1;	// IMP=0x000000000009920b
- (void)expectedProgressTargetChanged;	// IMP=0x00000000000991f2
- (void)setBytesPerSecondLimit:(long long)arg1;	// IMP=0x00000000000991a3
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x0000000000099150
- (void)setPoolPriority:(long long)arg1;	// IMP=0x0000000000099101
- (void)setIsDownload:(_Bool)arg1;	// IMP=0x00000000000990b3
- (void)resume;	// IMP=0x0000000000099067
- (void)suspend;	// IMP=0x000000000009901b
- (void)cancel;	// IMP=0x0000000000098fcf
- (void)withLoaderAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098f80
- (void)dealloc;	// IMP=0x0000000000098e99
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000098bcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

