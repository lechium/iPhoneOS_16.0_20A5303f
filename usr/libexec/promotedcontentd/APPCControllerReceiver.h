//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, APXPCConnection, NSMutableSet, NSString, Protocol;

@interface APPCControllerReceiver : NSObject
{
    APUnfairLock *_lock;	// 8 = 0x8
    APXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_coordinators;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e6315
@property(retain, nonatomic) NSMutableSet *coordinators; // @synthesize coordinators=_coordinators;
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;	// IMP=0x00100000000e6246
- (void)connectionInvalidated;	// IMP=0x00100000000e6166
- (void)connectionInterrupted;	// IMP=0x00100000000e608c
- (id)remoteObjectInterface;	// IMP=0x00100000000e607b
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (id)_coordinatorForRequester:(id)arg1;	// IMP=0x00100000000e5c58
- (void)preWarm:(id)arg1;	// IMP=0x00100000000e5c3f
- (void)proxyURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5975
- (void)_finishedWithAllRequests;	// IMP=0x00100000000e56c8
- (void)finishedWithRequestsForRequester:(id)arg1;	// IMP=0x00100000000e5443
- (void)_finishedWithRequestsForCoordinator:(id)arg1;	// IMP=0x00100000000e52a5
- (void)requestPromotedContentOfTypes:(id)arg1 forRequester:(id)arg2 forContext:(id)arg3 withClientInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e4e18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
