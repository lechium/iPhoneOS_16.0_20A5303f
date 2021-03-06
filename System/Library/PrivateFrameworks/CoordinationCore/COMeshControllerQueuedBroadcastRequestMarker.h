//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMeshRequest, NSString;

__attribute__((visibility("hidden")))
@interface COMeshControllerQueuedBroadcastRequestMarker : NSObject
{
    _Bool _includeSelfInBroadcast;	// 8 = 0x8
    COMeshRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _recipientCallback;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002c99a
@property(readonly, nonatomic) _Bool includeSelfInBroadcast; // @synthesize includeSelfInBroadcast=_includeSelfInBroadcast;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType recipientCallback; // @synthesize recipientCallback=_recipientCallback;
@property(readonly, copy, nonatomic) COMeshRequest *request; // @synthesize request=_request;
- (void)invokeCallbackWithError:(id)arg1;	// IMP=0x000000000002c96d
- (id)destination;	// IMP=0x000000000002c965
- (id)command;	// IMP=0x000000000002c953
- (id)initWithRequest:(id)arg1 includeSelf:(_Bool)arg2 recipientBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002c879

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

