//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURLRequest, NSURLResponse, WebCoreNSURLSession;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionDataTask : NSObject
{
    struct WeakObjCPtr<WebCoreNSURLSession> _session;	// 8 = 0x8
    struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> _resource;	// 16 = 0x10
    struct RetainPtr<NSURLResponse> _response;	// 24 = 0x18
    unsigned long long _taskIdentifier;	// 32 = 0x20
    struct RetainPtr<NSURLRequest> _originalRequest;	// 40 = 0x28
    struct RetainPtr<NSURLRequest> _currentRequest;	// 48 = 0x30
    long long _countOfBytesReceived;	// 56 = 0x38
    long long _countOfBytesSent;	// 64 = 0x40
    long long _countOfBytesExpectedToSend;	// 72 = 0x48
    long long _countOfBytesExpectedToReceive;	// 80 = 0x50
    long long _state;	// 88 = 0x58
    struct RetainPtr<NSError> _error;	// 96 = 0x60
    struct RetainPtr<NSString> _taskDescription;	// 104 = 0x68
    float _priority;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x000000000241fd40
- (void).cxx_destruct;	// IMP=0x000000000241fc20
@property float priority; // @synthesize priority=_priority;
@property long long state; // @synthesize state=_state;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)resourceFinished:(void *)arg1 metrics:(const void *)arg2;	// IMP=0x000000000241fb20
- (void)resource:(void *)arg1 loadFailedWithError:(const void *)arg2;	// IMP=0x000000000241fa80
- (void)resource:(void *)arg1 accessControlCheckFailedWithError:(const void *)arg2;	// IMP=0x000000000241f9e0
- (void)_resource:(void *)arg1 loadFinishedWithError:(id)arg2 metrics:(const void *)arg3;	// IMP=0x000000000241f6e0
- (void)resource:(void *)arg1 receivedRedirect:(const void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4;	// IMP=0x000000000241f230
- (void)resource:(void *)arg1 receivedData:(void *)arg2;	// IMP=0x000000000241f120
- (_Bool)resource:(void *)arg1 shouldCacheResponse:(const void *)arg2;	// IMP=0x000000000241f0d0
- (void)resource:(void *)arg1 receivedResponse:(const void *)arg2 completionHandler:(void *)arg3;	// IMP=0x000000000241ed10
- (void)resource:(void *)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;	// IMP=0x000000000241ed00
- (id)_timingData;	// IMP=0x000000000241ecf0
- (void)dealloc;	// IMP=0x000000000241eb70
- (void)resume;	// IMP=0x000000000241ead0
- (void)suspend;	// IMP=0x000000000241ea30
- (void)cancel;	// IMP=0x000000000241e960
@property(readonly, copy) NSURLResponse *response;
@property WebCoreNSURLSession *session;
@property(copy) NSString *taskDescription;
@property(readonly, copy) NSError *error;
@property(readonly, copy) NSURLRequest *currentRequest;
@property(readonly, copy) NSURLRequest *originalRequest;
- (void)_cancel;	// IMP=0x000000000241e6b0
- (void)_restart;	// IMP=0x000000000241e070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000241e060
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;	// IMP=0x000000000241df30

@end
