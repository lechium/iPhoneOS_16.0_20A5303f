//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, MRDAVRoutingDataSource, MRDAVRoutingServer, MRDBackgroundTasks, MRDBrowsableContentServer, MRDExternalDeviceRemoteServer, MRDMediaRemoteClient, MRDNowPlayingServer, MRDRemoteControlServer, MRDTransactionServer, MRDUIServer, MRDVirtualAudioInputServer, MRDVolumeController, NSArray, NSMutableDictionary, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface MRDMediaRemoteServer : NSObject
{
    NSObject<OS_xpc_object> *_listenerConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    MRDAVRoutingDataSource *_localRoutingDataSource;	// 32 = 0x20
    MRDNowPlayingServer *_nowPlayingServer;	// 40 = 0x28
    MRDVolumeController *_volumeController;	// 48 = 0x30
    MRDRemoteControlServer *_remoteControlServer;	// 56 = 0x38
    MRDBrowsableContentServer *_browsableContentServer;	// 64 = 0x40
    MRDExternalDeviceRemoteServer *_externalDeviceServer;	// 72 = 0x48
    MRDAVRoutingServer *_routingServer;	// 80 = 0x50
    MRDUIServer *_uiServer;	// 88 = 0x58
    MRDVirtualAudioInputServer *_virtualAudioInputServer;	// 96 = 0x60
    MRDTransactionServer *_transactionServer;	// 104 = 0x68
    MRDBackgroundTasks *_tasks;	// 112 = 0x70
    NSMutableDictionary *_activeClients;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_termSigHandler;	// 128 = 0x80
    _Bool _shouldSendCommandsDuringPhoneCall;	// 136 = 0x88
    NSArray *_availableOrigins;	// 144 = 0x90
    FBSDisplayLayoutMonitor *_sharedDisplayMonitor;	// 152 = 0x98
}

+ (id)server;	// IMP=0x00200000000a22b0
- (void).cxx_destruct;	// IMP=0x00200000000a9f27
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *sharedDisplayMonitor; // @synthesize sharedDisplayMonitor=_sharedDisplayMonitor;
@property(readonly, nonatomic) _Bool shouldSendCommandsDuringPhoneCall; // @synthesize shouldSendCommandsDuringPhoneCall=_shouldSendCommandsDuringPhoneCall;
@property(readonly, nonatomic) MRDExternalDeviceRemoteServer *externalDeviceServer; // @synthesize externalDeviceServer=_externalDeviceServer;
@property(readonly, nonatomic) MRDTransactionServer *transactionServer; // @synthesize transactionServer=_transactionServer;
@property(readonly, nonatomic) MRDAVRoutingServer *routingServer; // @synthesize routingServer=_routingServer;
@property(readonly, nonatomic) MRDRemoteControlServer *remoteControlServer; // @synthesize remoteControlServer=_remoteControlServer;
@property(readonly, nonatomic) MRDNowPlayingServer *nowPlayingServer; // @synthesize nowPlayingServer=_nowPlayingServer;
@property(readonly, nonatomic) NSArray *availableOrigins; // @synthesize availableOrigins=_availableOrigins;
- (void)_terminationHandler;	// IMP=0x00100000000a9e67
- (void)_restoreNowPlayingClientState;	// IMP=0x00100000000a9514
- (void)_validateAuditTokens:(id)arg1 pids:(id)arg2 auditTokens:(id)arg3;	// IMP=0x00100000000a90be
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOrigin:(id)arg2;	// IMP=0x00100000000a90ad
- (_Bool)_internalMediaRemoteNotificationIsLegal:(id)arg1;	// IMP=0x00100000000a8f7f
- (void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2;	// IMP=0x00100000000a8eb2
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000a8b65
- (void)virtualAudioInputServer:(id)arg1 didUpdateRecordingState:(unsigned int)arg2 forDevice:(id)arg3;	// IMP=0x00100000000a8a3d
- (void)mediaRemoteClientInvalidated:(id)arg1;	// IMP=0x00100000000a887f
- (void)_handleCompletePairingHandlerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a871e
- (void)_handleUnregisterPairingHandler:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a85ab
- (void)_handleRegisterPairingHandlerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a82a3
- (void)_handleCollectClientDiagnosticsMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a79e7
- (void)_handleCollectClientDiagnosticsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a78c2
- (void)_handleCollectDiagnosticMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a72b1
- (void)_handleGetSupportsSystemPairingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a7216
- (void)_handleRequestBlessMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6efe
- (void)_handlePing:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6eef
- (void)_handleWakePlayerServiceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6933
- (void)_handleWakeMediaAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6685
- (_Bool)_isMediaAppInstalled:(id)arg1;	// IMP=0x00100000000a65d1
- (void)_handleGetIsMusicAppInstalledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6564
- (void);	// IMP=0x00100000000a64f7
- (void)_handleGetSystemIsMutedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a639c
- (void)_handleSetSystemIsMutedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a62a2
- (void)_handleAdjustSystemVolumeByStepMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a6126
- (void)_handleSetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5faa
- (void)_handleGetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5ed2
- (void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5cba
- (void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5ca0
- (void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5b76
- (void)_collectDiagnosticFromClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5a7c
- (void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a57a4
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000a5624
- (void)_clientDidOpenConnection:(id)arg1;	// IMP=0x00100000000a5508
@property(readonly, nonatomic) RPCompanionLinkClient *sharedCompanionLinkClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *daemonClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *frontmostClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemPodcastClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemMediaClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *localNowPlayingClient;
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a4de7
- (void)restoreClientDeviceInfo:(id)arg1;	// IMP=0x00100000000a4bd9
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 predicate:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a4428
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000000a4413
- (void)postClientNotificationNamed:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a43fc
- (void)postClientNotificationNamed:(id)arg1;	// IMP=0x00100000000a43e8
- (id)clientForPlayerPath:(id)arg1;	// IMP=0x00100000000a42ea
- (id)canBeNowPlayingClients;	// IMP=0x00100000000a414f
- (id)allClients;	// IMP=0x00100000000a3f4e
- (id)mostRecentPlayingClient;	// IMP=0x00100000000a3c26
- (id)mostRecentCanBeNowPlayingClient;	// IMP=0x00100000000a37bf
- (id)clientWithRegisteredCustomOrigin:(id)arg1;	// IMP=0x00100000000a35ca
- (id)clientForBundleIdentifier:(id)arg1;	// IMP=0x00100000000a33b4
- (id)clientForPID:(int)arg1;	// IMP=0x00100000000a3253
- (void)removeClientForPID:(int)arg1;	// IMP=0x00100000000a2f22
- (void)addClient:(id)arg1;	// IMP=0x00100000000a29e6
- (void)stop;	// IMP=0x00100000000a292d
- (void)start;	// IMP=0x00100000000a2732
- (void)dealloc;	// IMP=0x00100000000a26d9
- (void)initializeServer;	// IMP=0x00100000000a23f0
- (id)_init;	// IMP=0x00100000000a2357
- (id)init;	// IMP=0x00100000000a2315

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
