//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection, NSXPCListener, PUPeer;

@interface PUServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    CDUnknownBlockType _requestRemoteActionHandler;	// 16 = 0x10
    NSXPCConnection *_actionServerConnection;	// 24 = 0x18
    PUPeer *_peer;	// 32 = 0x20
    NSMutableSet *_connections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000e3fc
@property(readonly, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) PUPeer *peer; // @synthesize peer=_peer;
- (void)syncObserverRequestsWristDetectionReset:(id)arg1;	// IMP=0x001000000000e36c
@property(nonatomic) _Bool gizmoWantsNotificationOnNextUnlock;
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e301
- (void)requestRemoteDeviceRemoveLockout;	// IMP=0x001000000000e0e7
- (void)queryRemoteDeviceState:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e03f
- (void)disableOnlyRemoteUnlock;	// IMP=0x001000000000de25
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;	// IMP=0x001000000000dbfc
- (void)unpairForUnlock;	// IMP=0x001000000000d96d
- (void)didCompleteRemoteAction:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000000d934
- (void)requestRemoteDeviceUnlockNotification;	// IMP=0x001000000000d92e
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2;	// IMP=0x001000000000d647
- (void)pairForUnlockWithPasscode:(id)arg1;	// IMP=0x001000000000d62f
- (void)checkIn;	// IMP=0x001000000000d5d1
- (void)peer:(id)arg1 wantsNotificationOfNextUnlock:(_Bool)arg2;	// IMP=0x001000000000d5bd
- (void)peer:(id)arg1 remoteDeviceRequestsRemoteAction:(long long)arg2 type:(long long)arg3 existingPasscode:(id)arg4 showAsReprompt:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000d420
- (void)peer:(id)arg1 remoteDeviceRequestsRemoteAction:(long long)arg2 type:(long long)arg3 existingPasscode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000d2ac
- (void)peer:(id)arg1 didNotifyRemoteState:(id)arg2 error:(id)arg3;	// IMP=0x001000000000d0e7
- (void)peerRemoteDeviceDidUnlock:(id)arg1;	// IMP=0x001000000000cf73
- (void)peer:(id)arg1 didPairForUnlock:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000000cdc6
- (void)_removeConnection:(id)arg1;	// IMP=0x001000000000cce9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000c84c
- (void)dealloc;	// IMP=0x001000000000c6d5
- (void)_handlePasscodeRemoval;	// IMP=0x001000000000c5f2
- (id)init;	// IMP=0x001000000000c4d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

