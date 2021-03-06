//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol ADDeviceContextConnectionDelegate, OS_dispatch_queue;

@interface ADDeviceContextConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    id <ADDeviceContextConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    _Bool _isUpdatingLocalDeviceContext;	// 33 = 0x21
    CDUnknownBlockType _updateLocalDeviceContextReply;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000f1071
- (void)_endUpdateLocalDeviceContext;	// IMP=0x00100000000f0f56
- (void)_beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0e69
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0d2f
- (void)_invalidate;	// IMP=0x00100000000f0c28
- (void)_clearXPCConnection;	// IMP=0x00100000000f0b49
- (void)_handleXPCConnectionInterruption;	// IMP=0x00100000000f0a8a
- (void)_handleXPCConnectionInvalidation;	// IMP=0x00100000000f09cb
- (void)invalidate;	// IMP=0x00100000000f096a
- (oneway void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000f085c
- (oneway void)endUpdateLocalDeviceContext;	// IMP=0x00100000000f084a
- (oneway void);	// IMP=0x00100000000f0838
- (oneway void)getLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f054d
- (void)updateLocalDeviceContext:(id)arg1;	// IMP=0x00100000000f02b5
- (id)initWithQueue:(id)arg1 xpcConnection:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000efef1
- (void)dealloc;	// IMP=0x00100000000efe3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

