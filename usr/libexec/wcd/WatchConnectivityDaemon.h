//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSXPCListener, WCDFirstUnlockManager, WCDPairedSyncManager, WCDPrivateClient;
@protocol CLManagerInterface;

@interface WatchConnectivityDaemon : NSObject
{
    NSXPCListener *_xpcPrivateListener;	// 8 = 0x8
    WCDPrivateClient *_privateClient;	// 16 = 0x10
    WCDFirstUnlockManager *_firstUnlockManager;	// 24 = 0x18
    WCDPairedSyncManager *_pairedSyncManager;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    NSMutableDictionary *_communicationIdentifierToClient;	// 48 = 0x30
    NSMutableDictionary *_sendIdentifierToHandler;	// 56 = 0x38
    NSMutableDictionary *_pendingMessageRequests;	// 64 = 0x40
    NSMutableArray *_readyBlocks;	// 72 = 0x48
    NSMutableDictionary *_coreLocationAssertions;	// 80 = 0x50
    NSMutableDictionary *_companionAppAssertions;	// 88 = 0x58
    NSSet *_counterpartClientCommunicationIdentifiers;	// 96 = 0x60
    id <CLManagerInterface> _locationManager;	// 104 = 0x68
    NSString *_idsServiceIdentifier;	// 112 = 0x70
    NSString *_idsInsecureServiceIdentifier;	// 120 = 0x78
    IDSService *_idsService;	// 128 = 0x80
    IDSService *_insecureIDSService;	// 136 = 0x88
}

+ (id)sharedDaemon;	// IMP=0x0020000000011c0c
- (void).cxx_destruct;	// IMP=0x002000000001f02d
@property(readonly) IDSService *insecureIDSService; // @synthesize insecureIDSService=_insecureIDSService;
@property(readonly) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly) NSString *idsInsecureServiceIdentifier; // @synthesize idsInsecureServiceIdentifier=_idsInsecureServiceIdentifier;
@property(readonly) NSString *idsServiceIdentifier; // @synthesize idsServiceIdentifier=_idsServiceIdentifier;
@property(retain, nonatomic) id <CLManagerInterface> locationManager; // @synthesize locationManager=_locationManager;
- (id)createCLInUseTimerForIdentifier:(id)arg1;	// IMP=0x001000000001ee42
- (void)releaseCLInUseAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001ecda
- (void)setCLTransientAuthorization:(id)arg1 withCoreLocationData:(id)arg2;	// IMP=0x001000000001e9dd
- (void)flushReadyBlocks;	// IMP=0x001000000001e8a6
- (void)service:(id)arg1 context:(id)arg2 performBlockWhenReady:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e747
- (void)performBlockWhenReady:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e677
- (void)persistAppContext:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x001000000001e332
- (void)storeComplicationUserInfoTransfer:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x001000000001db69
- (id)moveUserInfoToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 userInfoIdentifier:(id)arg4;	// IMP=0x001000000001d487
- (id)moveFileToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 fileIdentifier:(id)arg4 userInfoData:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001caab
- (void)notifyDuetOfPendingContentForCompanionAppID:(id)arg1 forComplication:(_Bool)arg2;	// IMP=0x001000000001caa5
- (void)duetIdentifiersForCompanionAppID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c841
- (id)applicationInfoForCommunicationID:(id)arg1;	// IMP=0x001000000001c791
- (id)WCErrorForIDSError:(id)arg1;	// IMP=0x001000000001c3b5
- (id)pairingIDForIDSUniqueDeviceID:(id)arg1;	// IMP=0x001000000001c141
- (id)dataFromUUIDString:(id)arg1;	// IMP=0x001000000001c070
- (const char *)descriptionFromPayloadSendType:(unsigned short)arg1;	// IMP=0x001000000001c04b
- (void)updateClientWithValues:(id)arg1;	// IMP=0x001000000001bf82
- (void)updateAllClientsWithValues;	// IMP=0x001000000001be44
- (id)createBackgroundAssertionTimerForIdentifier:(id)arg1;	// IMP=0x001000000001bc36
- (void)handleAquiredAssertion:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000001b934
- (void)cleanUpProcessAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001b767
- (void)acquireBackgroundAssertionForIdentifier:(id)arg1;	// IMP=0x001000000001b4d6
- (void)launchCompanionAppID:(id)arg1 isInUse:(_Bool)arg2 coreLocationData:(id)arg3;	// IMP=0x001000000001b041
@property(readonly) IDSDevice *activeIDSDevice;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ae2c
- (void)updateActiveDeviceConnectedForService:(id)arg1;	// IMP=0x001000000001ada5
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000001acdd
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x001000000001ac15
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x001000000001a843
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000019a7b
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000019413
- (void)persistUserInfoTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000018ee8
- (_Bool)userInfoExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0010000000018d49
- (_Bool)notifyIfUserInfoTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000018a79
- (id)complicationUserInfoPathInDataContainer:(id)arg1 pairingID:(id)arg2;	// IMP=0x0010000000018893
- (void)handleIncomingUserInfoURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x00100000000185f9
- (void)transferUserInfo:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000017f4b
- (_Bool)errorIfPreconditionsNotSatisfiedWithClientPairingID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017df8
- (void)handleIncomingUserInfoTransferProto:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x0010000000017aff
- (_Bool)sendComplicationUserInfo:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 identifier:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000175c4
- (_Bool)notifyIfFileTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000173f8
- (void)persistFileTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000016eb6
- (_Bool)fileTransferExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0010000000016d17
- (void)handleIncomingFileURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4 metadata:(id)arg5;	// IMP=0x001000000001693b
- (void)cancelSendWithIdentifier:(id)arg1;	// IMP=0x001000000001680e
- (void)transferFile:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 forClient:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015fcd
- (void)updateApplicationContext:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015b90
- (void)dequeuePendingMessagesForCommunicationID:(id)arg1;	// IMP=0x0010000000015850
- (void)handleIncomingRequest:(id)arg1 withCommunicationID:(id)arg2 isInUse:(_Bool)arg3 coreLocationData:(id)arg4;	// IMP=0x0010000000015535
- (void)sendMessage:(id)arg1 withIdentifier:(id)arg2 isResponse:(_Bool)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000014ddf
- (void)handlePairedSyncComplicationsStartedAck:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000014d5a
- (void)sendPairedSyncForComplicationsStartedAckWithIdentifier:(id)arg1 success:(_Bool)arg2;	// IMP=0x0010000000014cd7
- (void)privateClientConnectTimerFired;	// IMP=0x0010000000014cd1
- (void)forgetClientConnectTimer;	// IMP=0x0010000000014ccb
- (void)handlePairedSyncComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x0010000000014cc5
- (void)sendPairedSyncForComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x001000000001496a
- (void)sendFirstUnlockAck:(id)arg1;	// IMP=0x00100000000146b6
- (void)sendFirstUnlockRequest:(id)arg1;	// IMP=0x0010000000014402
- (void)sendFirstUnlockState:(id)arg1;	// IMP=0x001000000001414e
- (void)dequeuePendingComplicationPings;	// IMP=0x0010000000014148
- (void)handleComplicationPingForCommunicationIdentifier:(id)arg1;	// IMP=0x0010000000014142
- (void)addCounterpartClientCommunicationIdentifier:(id)arg1;	// IMP=0x001000000001403d
- (void)handleInstalledAppsChangedMessage;	// IMP=0x0010000000014037
- (void)sendInstalledAppsChangedMessage;	// IMP=0x0010000000013d2b
- (void)handleDaemonClientsInformation:(id)arg1;	// IMP=0x0010000000013b0b
- (void)sendDaemonClientsInformation;	// IMP=0x0010000000013ac8
- (void)handleCounterpartDaemonDidStart;	// IMP=0x0010000000013a85
- (void)sendDaemonDidStart;	// IMP=0x00100000000137be
- (void)systemObserverUpdatingInstalledApps;	// IMP=0x0010000000013746
- (void)systemObserverAppDidTerminateForBundleID:(id)arg1;	// IMP=0x001000000001364c
- (void)systemObserverInstalledApplicationsChanged;	// IMP=0x00100000000134b8
- (void)systemObserverActiveDeviceSwitchStarted;	// IMP=0x001000000001349e
- (void)systemObserverInitialSetUpComplete;	// IMP=0x0010000000013470
- (void)clientReachabilityDidChange:(id)arg1;	// IMP=0x00100000000133e0
- (void)clientXPCConnectionDidDisconnect:(id)arg1;	// IMP=0x001000000001323d
- (void)dequeueContentForClient:(id)arg1;	// IMP=0x001000000001314f
- (_Bool)privateListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000012f85
- (id)createNewClientObjectWithCommunicationID:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000012e25
- (_Bool)listenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000012b93
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000012aed
- (void)loadPersistedClients;	// IMP=0x0010000000012478
@property(readonly) NSString *state;
- (id)init;	// IMP=0x0010000000011c91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
