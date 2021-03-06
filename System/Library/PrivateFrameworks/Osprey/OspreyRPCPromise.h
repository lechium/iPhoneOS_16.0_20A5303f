//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OspreyDeferredObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyRPCPromise : NSObject
{
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;	// 8 = 0x8
    OspreyDeferredObject *_deferredRPC;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b70e
- (void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b5d1
- (void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 streamingResponseHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000b44e
- (id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b255
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 streamingResponseHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b011
- (void)fulfill:(id)arg1;	// IMP=0x000000000000affb
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x000000000000af63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

