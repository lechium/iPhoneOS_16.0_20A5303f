//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

@interface SDAutoUnlockTransport
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    IDSService *_autoUnlockService;	// 32 = 0x20
    id <SDAutoUnlockTransportClient> _primaryClient;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
    IDSService *_activityService;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transportQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_clientQueue;	// 72 = 0x48
    NSMapTable *_clientMap;	// 80 = 0x50
    NSMutableDictionary *_completionHandlers;	// 88 = 0x58
    NSMutableDictionary *_sendIdentifierToSessionID;	// 96 = 0x60
    NSMutableDictionary *_sendDates;	// 104 = 0x68
    NSDate *_lastSendDate;	// 112 = 0x70
    NSMutableDictionary *_autoUnlockDeviceCache;	// 120 = 0x78
    NSMutableDictionary *_cloudPairRetryRecords;	// 128 = 0x80
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 136 = 0x88
    NSSet *_cachedApproveBluetoothIDs;	// 144 = 0x90
}

+ (id)sharedTransport;	// IMP=0x002000000017ba58
- (void).cxx_destruct;	// IMP=0x00200000001839fd
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)autoUnlockService;	// IMP=0x00100000001837da
- (id)state;	// IMP=0x0010000000183354
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x00100000001830d6
- (_Bool)disableEncryption;	// IMP=0x00100000001830bd
- (_Bool)showOtherDevices;	// IMP=0x00100000001830a4
- (_Bool)showIDInName;	// IMP=0x001000000018308b
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x00100000001829c0
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x001000000018267b
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000181c21
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0010000000181a76
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000018194f
- (id)dataFromUUID:(id)arg1;	// IMP=0x00100000001818cf
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001817e7
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000018178e
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000181752
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000018167e
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000181652
- (void)loadCloudPairRetries;	// IMP=0x001000000018158d
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x001000000018133d
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x0010000000180f65
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x0000000000180f5f
- (void)handleSuccessfulMessageSentWithIdentifier:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000180e2d
- (id)stableBluetoothIdentifierForIDSDevice:(id)arg1;	// IMP=0x0010000000180dad
- (id)connectionCacheDevices;	// IMP=0x0010000000180c28
- (_Bool)localDeviceIDSRegistered;	// IMP=0x00100000001809e5
- (_Bool)activityServiceHasWatch;	// IMP=0x0010000000180785
- (id)placeholderDevice;	// IMP=0x001000000018065f
- (void)updateBluetoothIDCache;	// IMP=0x001000000018025c
- (void)logBluetoothIDCache;	// IMP=0x00100000001801aa
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x0010000000180127
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x001000000017fecc
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x001000000017fcd3
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x001000000017fada
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x001000000017f9e7
- (id)nameForDevice:(id)arg1;	// IMP=0x001000000017f8fb
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x001000000017f5c3
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x001000000017f4b7
- (id)modelNameForDevice:(id)arg1;	// IMP=0x001000000017f485
- (void)updateApproveBluetoothIDs;	// IMP=0x001000000017f12d
- (id)approveBluetoothIDs;	// IMP=0x001000000017f089
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x001000000017e834
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x001000000017e81a
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x001000000017e3f6
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x001000000017e298
- (id)enabledAutoUnlockDevices;	// IMP=0x001000000017e284
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1;	// IMP=0x001000000017d9d0
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1;	// IMP=0x001000000017d872
- (id)autoUnlockEligibleDevices;	// IMP=0x001000000017d85b
- (id)onqueue_devicesWithLTKs;	// IMP=0x001000000017d5ef
- (id)devicesWithLTKs;	// IMP=0x001000000017d4a9
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x001000000017d438
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x001000000017d424
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x001000000017d3c5
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x001000000017d375
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x001000000017d1fd
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x001000000017d1aa
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x001000000017d15a
- (id)idsMacDeviceIDs;	// IMP=0x001000000017cee0
- (id)idsDevicesIDs;	// IMP=0x001000000017cd15
- (_Bool)deviceNearby;	// IMP=0x001000000017ccd1
- (_Bool)isDeviceSatellitePaired;	// IMP=0x001000000017ccc9
- (id)activeDevice;	// IMP=0x001000000017cb4c
- (id)pairedAutoUnlockDevice;	// IMP=0x001000000017caed
- (id)pairedDeviceID;	// IMP=0x001000000017ca9d
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x001000000017c898
- (id)bluetoothDeviceIdentifiers;	// IMP=0x001000000017c75a
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x001000000017c504
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x001000000017c31c
- (void)clearAutoUnlockDeviceCache;	// IMP=0x001000000017c278
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x001000000017c241
- (void)logDevices;	// IMP=0x001000000017c161
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x001000000017bdfc
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x001000000017bccb
- (id)init;	// IMP=0x001000000017baad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

