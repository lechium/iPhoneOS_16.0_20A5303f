//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, CUSystemMonitor, IDSService, MISSING_TYPE, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEDevice, SFBLEPipe, SFBLEScanner, SFSystemService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDNearbyAgent : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    MISSING_TYPE *_activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    int _allowEnhancedDiscovery;	// 44 = 0x2c
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    _Bool _bleNearbyInfoAdvertised;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 184 = 0xb8
    _Bool _bleNearbyInfoAirDropUsable;	// 192 = 0xc0
    NSMutableDictionary *_bleNearbyInfoDevices;	// 200 = 0xc8
    _Bool _bleNearbyInfoRSSILog;	// 208 = 0xd0
    _Bool _bleNearbyInfoWiFiP2P;	// 209 = 0xd1
    SFBLEScanner *_bleNearbyInfoScanner;	// 216 = 0xd8
    _Bool _bleProximityEnabled;	// 224 = 0xe0
    NSDictionary *_bleProximityInfo;	// 232 = 0xe8
    NSDictionary *_bleProximityInfoOverride;	// 240 = 0xf0
    SFBLEScanner *_bleProximityPairingScanner;	// 248 = 0xf8
    _Bool _bleProximityRSSILog;	// 256 = 0x100
    _Bool _btPipeEnabled;	// 257 = 0x101
    _Bool _btPipeForced;	// 258 = 0x102
    SFBLEDevice *_btPipePeer;	// 264 = 0x108
    _Bool _caEnabled;	// 272 = 0x110
    int _caForce;	// 276 = 0x114
    unsigned int _caMessageNoScans;	// 280 = 0x118
    unsigned int _caMessageScans;	// 284 = 0x11c
    _Bool _caPhoneCalls;	// 288 = 0x120
    NSMutableSet *_caRequests;	// 296 = 0x128
    _Bool _caScanIfVeryActive;	// 304 = 0x130
    _Bool _caSingleDevice;	// 305 = 0x131
    NSData *_contactHashesCached;	// 312 = 0x138
    _Bool _contactHashesEnabled;	// 320 = 0x140
    _Bool _coreDeviceEnabled;	// 321 = 0x141
    unsigned long long _ddFastScanLastEndTicks;	// 328 = 0x148
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 336 = 0x150
    NSMutableDictionary *_ddNearbyActionDevices;	// 344 = 0x158
    _Bool _ddNearbyActionEnabled;	// 352 = 0x160
    _Bool _ddNearbyActionScreenOff;	// 353 = 0x161
    NSMutableDictionary *_ddNearbyInfoDevices;	// 360 = 0x168
    _Bool _ddNearbyInfoEnabled;	// 368 = 0x170
    _Bool _ddNearbyInfoScreenOff;	// 369 = 0x171
    NSMutableDictionary *_ddProximityPairingDevices;	// 376 = 0x178
    _Bool _ddProximityPairingEnabled;	// 384 = 0x180
    _Bool _ddProximityPairingScreenOff;	// 385 = 0x181
    NSMutableSet *_ddRequests;	// 392 = 0x188
    _Bool _enhancedDiscoveryAdvActive;	// 400 = 0x190
    unsigned int _enhancedDiscoveryAssertCount;	// 404 = 0x194
    _Bool _enhancedDiscoveryShouldRun;	// 408 = 0x198
    NSObject<OS_dispatch_source> *_enhancedDiscoveryTimer;	// 416 = 0x1a0
    NSMutableSet *_enhancedDiscoveryUseCases;	// 424 = 0x1a8
    unsigned long long _familyFlags;	// 432 = 0x1b0
    int _familyNotifyToken;	// 440 = 0x1b8
    _Bool _fitnessPairingEnabled;	// 444 = 0x1bc
    _Bool _homePodIdentifiesAsB520;	// 445 = 0x1bd
    _Bool _isRIClientEnabled;	// 446 = 0x1be
    int _idsAppleTVCountCache;	// 448 = 0x1c0
    NSArray *_idsBluetoothDevicesArray;	// 456 = 0x1c8
    NSSet *_idsBluetoothDevicesSet;	// 464 = 0x1d0
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 472 = 0x1d8
    NSSet *_idsBluetoothDeviceIDsForMe;	// 480 = 0x1e0
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 488 = 0x1e8
    int _idsContinuityDeviceCountCache;	// 496 = 0x1f0
    NSArray *_idsDeviceArray;	// 504 = 0x1f8
    NSDictionary *_idsDeviceBTDictionary;	// 512 = 0x200
    NSDictionary *_idsDeviceCountBTDictionary;	// 520 = 0x208
    int _idsHasActiveWatchCache;	// 528 = 0x210
    int _idsHomePodCountCache;	// 532 = 0x214
    int _idsIsSignedInCache;	// 536 = 0x218
    int _idsMacCountCache;	// 540 = 0x21c
    int _idsShouldAdvertiseNearbyInfo;	// 544 = 0x220
    int _idsShouldEncryptActivityLevel;	// 548 = 0x224
    IDSService *_idsService;	// 552 = 0x228
    _Bool _logProxAdvFields;	// 560 = 0x230
    NSUUID *_remoteAppServiceUUID;	// 568 = 0x238
    NSMutableDictionary *_services;	// 576 = 0x240
    NSMutableDictionary *_sessions;	// 584 = 0x248
    NSMutableDictionary *_setupSessions;	// 592 = 0x250
    _Bool _shareAudioEnabled;	// 600 = 0x258
    double _startTime;	// 608 = 0x260
    SDStatusMonitor *_statusMonitor;	// 616 = 0x268
    CUSystemMonitor *_systemMonitor;	// 624 = 0x270
    SFSystemService *_systemService;	// 632 = 0x278
    _Bool _unlockAdvertiseAlways;	// 640 = 0x280
    _Bool _unlockAdvertiseAggressive;	// 641 = 0x281
    _Bool _unlockAdvertiseEnabled;	// 642 = 0x282
    _Bool _unlockAdvertiseBackground;	// 643 = 0x283
    _Bool _unlockAdvertiseWatch;	// 644 = 0x284
    _Bool _unlockAdvertiseWatchLocked;	// 645 = 0x285
    SFBLEPipe *_unlockBtPipe;	// 648 = 0x288
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 656 = 0x290
    NSMutableDictionary *_idDevices;	// 664 = 0x298
    _Bool _idEnabled;	// 672 = 0x2a0
    int _idIdentitiesChangedNotifyToken;	// 676 = 0x2a4
    NSArray *_idIdentityArray;	// 680 = 0x2a8
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 688 = 0x2b0
    _Bool _systemWillPowerDown;	// 696 = 0x2b8
    _Bool _autoUnlockActive;	// 697 = 0x2b9
    _Bool _boostNearbyInfo;	// 698 = 0x2ba
    _Bool _enhancedDiscovery;	// 699 = 0x2bb
    int _audioRoutingScore;	// 700 = 0x2bc
    unsigned int _hotspotInfo;	// 704 = 0x2c0
    NSData *_bleAuthTag;	// 712 = 0x2c8
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 720 = 0x2d0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 728 = 0x2d8
    RPIdentity *_idSelfIdentity;	// 736 = 0x2e0
}

+ (id)sharedNearbyAgent;	// IMP=0x00200000001f2e30
- (void).cxx_destruct;	// IMP=0x00200000002180c9
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(nonatomic) _Bool enhancedDiscovery; // @synthesize enhancedDiscovery=_enhancedDiscovery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
// Error: Property attributes should begin with the type ('T') attribute, property name: autoUnlockActive
// Property attributes: (null)

- (void)_testPipePing;	// IMP=0x0010000000217eea
- (void)testPipePing;	// IMP=0x0010000000217e86
@property(readonly, nonatomic) _Bool screenOn;
- (void)_systemHasPoweredOn;	// IMP=0x0010000000217dfe
- (void)_systemWillSleep;	// IMP=0x0010000000217d8f
- (void)unlockStopTestServer;	// IMP=0x0010000000217d42
- (void)unlockStartTestServer;	// IMP=0x0010000000217cf5
- (void)unlockStopTestClient;	// IMP=0x0010000000217c59
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x00100000002178bb
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x0010000000217713
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x0010000000217214
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x0010000000217042
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x0010000000216d9a
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000216b46
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000216b2b
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002169ce
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x00100000002168ac
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0010000000216801
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0010000000216599
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00100000002164de
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x0010000000215f03
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000215b5e
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x00100000002153a9
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x0010000000214f00
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x0010000000214a06
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x0010000000214410
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x0010000000213601
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x00100000002135e4
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x001000000021339b
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x0010000000212eb0
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000212cc1
- (void)sessionStop:(id)arg1;	// IMP=0x0010000000212a6b
- (int)sessionStart:(id)arg1;	// IMP=0x0010000000212564
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x0010000000212547
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x00100000002122fe
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x00100000002122e1
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000212161
- (void)serviceStop:(id)arg1;	// IMP=0x001000000021203c
- (int)serviceStart:(id)arg1;	// IMP=0x0010000000211ca2
- (_Bool)isDeviceValidRIServer:(id)arg1;	// IMP=0x0010000000211c9a
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000021183d
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000211780
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0010000000211652
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000211551
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0010000000211476
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000211370
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x0010000000211065
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x0010000000210bd2
- (void)_idsMeDeviceChanged;	// IMP=0x00100000002109b2
- (int)_idsMacCount;	// IMP=0x00100000002107f1
- (_Bool)idsIsSignedIn;	// IMP=0x00100000002104cf
- (int)_idsHomePodCount;	// IMP=0x00100000002102a1
- (_Bool)_idsHasActiveWatch;	// IMP=0x0010000000210056
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x001000000020f63e
- (id)idsDeviceForBluetoothDeviceID:(id)arg1 conflictDetected:(_Bool *)arg2;	// IMP=0x001000000020f264
- (id)_idsDeviceArrayLocked;	// IMP=0x001000000020f1c5
- (id)idsDeviceArray;	// IMP=0x001000000020f162
- (int)_idsContinuityDeviceCount;	// IMP=0x001000000020efe2
- (id)_idsBluetoothDeviceIDsForAnnouncements;	// IMP=0x001000000020ece4
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x001000000020eac9
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x001000000020e8f1
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000020e88e
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x001000000020e673
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000020e5ab
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x001000000020e205
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000020df2e
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000020de9e
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x001000000020dcd0
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x001000000020dab5
- (id)idsBluetoothDeviceIDsForRIServers;	// IMP=0x001000000020d83e
- (int)_idsAppleTVCount;	// IMP=0x001000000020d67d
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x001000000020d4ed
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x001000000020d080
- (void)_idsEnsureStopped;	// IMP=0x001000000020cf52
- (void)_idsEnsureStarted;	// IMP=0x001000000020ce95
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000020cd04
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000020cb11
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000020c921
- (_Bool)_identificationIdentifyDevice:(id)arg1 sfDevice:(id)arg2;	// IMP=0x001000000020c510
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x001000000020bfe6
- (void)_identificationReIdentify;	// IMP=0x001000000020bcdd
- (void)_identificationMaintenanceTimer;	// IMP=0x001000000020b9b7
- (void)_identificationHandleDiscoveryStop;	// IMP=0x001000000020b8d4
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000020b816
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000020ab94
- (void)_identificationGetIdentities;	// IMP=0x001000000020a49c
- (void)_identificationEnsureStopped;	// IMP=0x001000000020a3ad
- (void)_identificationEnsureStarted;	// IMP=0x001000000020a20e
- (void)_identificationCheckFlagsAndACL;	// IMP=0x0010000000209daf
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x0010000000209d29
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x0010000000209ca3
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x0010000000209c1a
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x0010000000209b75
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x0010000000209aad
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x00100000002098b0
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x0010000000208f95
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000208b9c
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x00100000002081dd
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x0010000000207f00
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x0010000000207b18
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x001000000020784d
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1 reason:(id)arg2 useCase:(unsigned int)arg3;	// IMP=0x00100000002076ac
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1 reason:(id)arg2;	// IMP=0x00100000002075ab
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x001000000020751e
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x00100000002074a8
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x0010000000206e69
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x0010000000206a3d
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x0010000000206379
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x00100000002062ce
- (_Bool)_deviceCanTriggerEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000205f18
- (void)_enhancedDiscoveryTimerFired;	// IMP=0x0010000000205ed4
- (int)_allowEnhancedDiscovery;	// IMP=0x001000000020595b
- (void)_enhancedDiscoveryScreenChange:(_Bool)arg1;	// IMP=0x0010000000205741
- (void)_disableEnhancedDiscovery:(id)arg1;	// IMP=0x001000000020565e
- (void)_enableEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2;	// IMP=0x0010000000204ec2
- (void)_enableEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000204eab
- (_Bool)isWifiCritical;	// IMP=0x0010000000204e92
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x0010000000204dea
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x0010000000204307
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x0010000000203b48
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x0010000000203a14
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x00100000002038c0
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x00100000002032bb
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x001000000020321d
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x0010000000203000
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x0010000000202fcb
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x00100000002029be
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x00100000002028de
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x00100000002028ad
- (id)bleProximityInfo;	// IMP=0x0010000000202848
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x001000000020260d
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x00100000002025ad
- (id)_bleUpdateUseCases:(id)arg1;	// IMP=0x001000000020250e
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x00100000002013c8
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x00100000002011c9
- (void)_bleAdvertisingAddressChanged;	// IMP=0x0010000000200f93
- (void)_wirelessCriticalChanged:(id)arg1;	// IMP=0x0010000000200e89
- (void)_smartCoverStatusChanged:(id)arg1;	// IMP=0x0010000000200dc2
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00100000002009a6
- (void)_btPipeStateChanged:(id)arg1;	// IMP=0x00100000002007ab
- (void)_btPipeEnsureStopped;	// IMP=0x0010000000200717
- (void)_btPipeEnsureStarted;	// IMP=0x001000000020056b
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x0010000000200501
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x00100000002002a3
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x00100000001ffbc1
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x00100000001ff957
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x00100000001ff715
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x00100000001ff11d
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x00100000001fe207
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x00100000001fe0cd
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x00100000001fde11
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x00100000001fd0b4
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x00100000001fc581
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x00100000001fc308
- (MISSING_TYPE *)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x00100000001fc2d4
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x00100000001fc063
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x00100000001fbd17
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x00100000001fb9cb
- (_Bool)_bleNearbyInfoAdvertiserShouldAddField3;	// IMP=0x00100000001fb95e
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x00100000001fadc9
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x00100000001fab9d
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x00100000001faaad
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x00100000001fa9f5
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x00100000001fa781
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x00100000001fa53f
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x00100000001f9f92
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x00100000001f9f61
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x00100000001f9e9d
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x00100000001f8a0b
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f892c
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x00100000001f8830
- (void)_activityMonitorMediaAccessControlSettingChanged:(id)arg1;	// IMP=0x00100000001f8748
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x00100000001f870f
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x00100000001f85f9
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x00100000001f8542
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x00100000001f8446
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x00100000001f841c
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x00100000001f8320
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x00100000001f8050
- (void)_activityMonitorUpdate;	// IMP=0x00100000001f7ec4
- (void)_activityMonitorEnsureStopped;	// IMP=0x00100000001f7d81
- (void)_activityMonitorEnsureStarted;	// IMP=0x00100000001f7c82
- (id)_useCasesToHexString:(id)arg1;	// IMP=0x00100000001f7ae3
- (void)_update;	// IMP=0x00100000001f7835
- (void)update;	// IMP=0x00100000001f77d1
- (void)prefsChanged;	// IMP=0x00100000001f653f
- (void)_handleBluetoothDeviceConnected:(id)arg1;	// IMP=0x00100000001f647e
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x00100000001f6397
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x00100000001f62cc
- (void)_invalidate;	// IMP=0x00100000001f5d04
- (void)invalidate;	// IMP=0x00100000001f5ca0
- (void)_activate;	// IMP=0x00100000001f508a
- (void)activate;	// IMP=0x00100000001f501e
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000001f2f4c
- (id)sharedNearbyPipe;	// IMP=0x00100000001f2e87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
