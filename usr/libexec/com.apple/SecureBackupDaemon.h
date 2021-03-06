//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SecureBackupDaemon : NSObject
{
    _Bool _needInitialBackup;	// 8 = 0x8
    _Bool _pendingNotification;	// 9 = 0x9
    int _cachedPassphraseFD;	// 12 = 0xc
    int _cachedRecordIDPassphraseFD;	// 16 = 0x10
    int _cachedRecoveryKeyFD;	// 20 = 0x14
    NSURL *_cacheDirURL;	// 24 = 0x18
    NSData *_iCDPKeybag;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_backupQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_kvsQueue;	// 56 = 0x38
    NSString *_cachedRecordID;	// 64 = 0x40
    NSString *_iCloudEnvironment;	// 72 = 0x48
    NSMutableDictionary *_ignoredNotifications;	// 80 = 0x50
    NSMutableDictionary *_handledNotifications;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00100000000401bc
@property(retain, nonatomic) NSMutableDictionary *handledNotifications; // @synthesize handledNotifications=_handledNotifications;
@property(retain, nonatomic) NSMutableDictionary *ignoredNotifications; // @synthesize ignoredNotifications=_ignoredNotifications;
@property _Bool pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(copy, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
@property int cachedRecoveryKeyFD; // @synthesize cachedRecoveryKeyFD=_cachedRecoveryKeyFD;
@property int cachedRecordIDPassphraseFD; // @synthesize cachedRecordIDPassphraseFD=_cachedRecordIDPassphraseFD;
@property int cachedPassphraseFD; // @synthesize cachedPassphraseFD=_cachedPassphraseFD;
@property(copy, nonatomic) NSString *cachedRecordID; // @synthesize cachedRecordID=_cachedRecordID;
@property _Bool needInitialBackup; // @synthesize needInitialBackup=_needInitialBackup;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *kvsQueue; // @synthesize kvsQueue=_kvsQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSData *iCDPKeybag; // @synthesize iCDPKeybag=_iCDPKeybag;
@property(retain, nonatomic) NSURL *cacheDirURL; // @synthesize cacheDirURL=_cacheDirURL;
- (void)knownICDPFederations:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ffd6
- (void)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ff24
- (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fe44
- (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fc42
- (void)getCertificatesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fa23
- (void)daemonPasscodeRequestOpinion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f699
- (id)fetchPRK:(id *)arg1;	// IMP=0x001000000003f598
- (void)prepareHSA2EscrowRecordContents:(id)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e72e
- (int)getPasscodeRequestFlag:(unsigned long long *)arg1;	// IMP=0x001000000003e6e1
- (int)setPasscodeRequestFlag:(unsigned long long)arg1;	// IMP=0x001000000003e694
- (void)clearNotifyToken;	// IMP=0x001000000003e63a
- (int)notifyToken;	// IMP=0x001000000003e52a
- (void)beginHSA2PasscodeRequest:(id)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(id)arg3 reason:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003dee3
- (id)getPendingEscrowRequest:(id *)arg1;	// IMP=0x001000000003de7d
- (void)stateCaptureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003de16
- (void)notificationInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003dce0
- (void)changeSMSTargetWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d0e7
- (void)getCountrySMSCodesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cab1
- (void)startSMSChallengeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c40b
- (void)uncachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x001000000003c3f7
- (void)uncacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c15e
- (void)cacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003befe
- (void)uncachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bc65
- (void)cachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x001000000003bc51
- (void)cachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b9f1
- (void)uncacheRecordIDPassphrase;	// IMP=0x001000000003b8b3
- (id)cachedRecoveryKey;	// IMP=0x001000000003b883
@property(copy, nonatomic) NSString *cachedRecordIDPassphrase;
@property(copy, nonatomic) NSString *cachedPassphrase;
- (id)cachedPassphraseForFD:(int)arg1;	// IMP=0x001000000003b4da
- (void)setCachedRecoveryKey:(id)arg1;	// IMP=0x001000000003b4aa
- (int)storeCachedPassphrase:(id)arg1;	// IMP=0x001000000003aea3
- (void)updateMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a35f
- (void)disableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039ae7
- (void)setBackOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000391a4
- (void)backOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038e5b
- (void)deleteAlliCDPRecordsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000386c1
- (void)createICDPRecordWithRequest:(id)arg1 recordContents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037d68
- (void)recoverRecordContentsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037a0b
- (void)restoreKeychainAsyncWithPasswordInDaemon:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037857
- (void)recoverSilentWithCDPContextInDaemon:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037758
- (void)recoverWithCDPContextInDaemon:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037659
- (void)recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037579
- (void)_recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034c00
- (void)_restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000034836
- (void)_recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034212
- (void)_recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032e5d
- (void)sortForMatchingPassphraseLengthAndPlatform:(id)arg1 secureBackups:(id)arg2 passphraseLength:(unsigned long long)arg3 platform:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000032375
- (long long)compare:(id)arg1 with:(id)arg2 backups:(id)arg3;	// IMP=0x0010000000031c11
- (id)keysOfEntriesContainingObject:(id)arg1 backups:(id)arg2;	// IMP=0x0010000000031b55
- (void)recoverEscrowWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000305e4
- (id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000003010d
- (id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3;	// IMP=0x001000000002ff94
- (void)recordIDAndMetadataForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f8e2
- (id)secureBackups;	// IMP=0x001000000002f634
- (id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4;	// IMP=0x001000000002f0ea
- (void)_restoreKeychainAsyncWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4 restoredViews:(id)arg5 viewsNotToBeRestored:(id)arg6;	// IMP=0x001000000002e76e
- (_Bool)restoreView:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 restoredViews:(id)arg4;	// IMP=0x001000000002e483
- (id)encodedStatsForViews:(id)arg1;	// IMP=0x001000000002e1c9
- (id)restoreBackup:(id)arg1 withName:(id)arg2 keybagDigest:(id)arg3 keybag:(id)arg4 password:(id)arg5;	// IMP=0x001000000002da38
- (void)backupWithInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002da21
- (void)backupWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d955
@property(nonatomic) _Bool backupAllowed;
- (void)handleEscrowStoreResults:(id)arg1 escrowError:(id)arg2 request:(id)arg3 sosPeerID:(id)arg4 newRecordMetadata:(id)arg5 backupKeybag:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000002d4b7
- (void)enableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b264
- (void)stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b184
- (void)_stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ae91
- (id)massageOutgoingMetadataFromRequest:(id)arg1;	// IMP=0x001000000002acc1
- (void)getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a950
- (void)synchronizeKVSWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a3e1
- (void)doSynchronize;	// IMP=0x001000000002a330
- (id)sortRecordsByBottleID:(id)arg1;	// IMP=0x0010000000029584
- (id)tagStaleBottleRecords:(id)arg1 suggestedBottles:(id)arg2;	// IMP=0x001000000002921c
- (void)_getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026c1d
- (id)_recordIDFromLabel:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;	// IMP=0x0010000000026b36
- (void)getStingrayMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000264dd
- (_Bool)hasRecoveryKey;	// IMP=0x0010000000026240
- (id)filteriCDPRecords:(id)arg1;	// IMP=0x0010000000025b64
- (id)massageIncomingMetadataFromInfo:(id)arg1;	// IMP=0x00100000000257f3
- (void)notificationOccurred:(id)arg1;	// IMP=0x0010000000025453
- (void)handleNotification:(id)arg1;	// IMP=0x001000000002505d
- (void)recordNotification:(id)arg1 handled:(_Bool)arg2;	// IMP=0x0010000000024f81
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000024b4c
@property(readonly, nonatomic) _Bool forceICDP;
@property(readonly, retain, nonatomic) NSURL *cachedManifestURL;
@property(readonly, retain, nonatomic) NSURL *cachedKeychainURL;
- (struct os_state_data_s *)_stateCapture;	// IMP=0x001000000002461c
- (id)copyKVSState;	// IMP=0x00100000000240aa
- (void)setupNotifyEvents;	// IMP=0x0010000000023f23
- (id)init;	// IMP=0x0010000000023cd9
- (id)normalizeSMSTarget:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000023a4b
- (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x00100000000238e8
- (void)unregisterForNotifyEvent:(id)arg1;	// IMP=0x00100000000238b3
- (void)registerForNotifyEvent:(id)arg1;	// IMP=0x0010000000023848
- (void)disableiCDPBackup;	// IMP=0x0010000000023806
- (void)_disableBackup;	// IMP=0x001000000002378a
- (id)_consumeBackupJournal;	// IMP=0x0010000000022631
- (id)_consumeFullBackupForRecordID:(id)arg1;	// IMP=0x001000000002229b
- (id)_consumeViewBackup:(id)arg1 recordID:(id)arg2;	// IMP=0x0010000000020f35
- (void)_backupCloudIdentityKeychainViewAndPushToKVS;	// IMP=0x00100000000208ff
- (void)_backupKeychainFully:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002036e
- (void)_backupKeychain;	// IMP=0x0010000000020358
- (void)_backupFullKeychain;	// IMP=0x001000000002033f
- (void)_backupFullKeychainWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020325
- (void)_setAutobackupEnabled;	// IMP=0x0010000000020311
- (void)_setAutobackupEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000202a7
- (int)_checkEscrowTrust;	// IMP=0x001000000001ff24
- (void)_removeKVSKeybag;	// IMP=0x001000000001fdf2
- (void)garbageCollectEMCSBackupsExcluding:(id)arg1;	// IMP=0x001000000001fb6d
- (id)_EMCSBackupDictForKeybagDigest:(id)arg1;	// IMP=0x001000000001f728
- (id)_EMCSBackup;	// IMP=0x001000000001f6d1
- (void)_setEMCSBackup:(id)arg1 keybag:(id)arg2;	// IMP=0x001000000001f3b9
- (id)_KVSKeybag;	// IMP=0x001000000001f362
- (void)_setKVSKeybag:(id)arg1;	// IMP=0x001000000001f199
- (void)_removeMetadata;	// IMP=0x001000000001f07e
- (id)_metadata;	// IMP=0x001000000001f024
- (void)_setMetadata:(id)arg1;	// IMP=0x001000000001eee1
- (void)_removeUsesEscrow;	// IMP=0x001000000001ee84
- (_Bool)_usesEscrow;	// IMP=0x001000000001ee39
- (void)_setUsesEscrow:(_Bool)arg1;	// IMP=0x001000000001ed28
- (_Bool)_iCDPBackupEnabled;	// IMP=0x001000000001ecdd
- (_Bool)_backupEnabled;	// IMP=0x001000000001ec71
- (void)_setBackupEnabled:(_Bool)arg1 iCDP:(_Bool)arg2;	// IMP=0x001000000001eb05
- (id)_getLastBackupTimestamp;	// IMP=0x001000000001ea7d
- (id)_getDERBackupFromKVS;	// IMP=0x001000000001e94a
- (void)_removeVeeTwoBackup;	// IMP=0x001000000001e816
- (void)_enumerateICDPBackupsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e4b6
- (id)_getICDPBackupFromKVSForView:(id)arg1;	// IMP=0x001000000001e3fe
- (id)_getProtectedKeychainAndKeybagDigestFromKVS:(id *)arg1;	// IMP=0x001000000001e28a
- (void)_removeProtectedKeychain;	// IMP=0x001000000001e149
- (id)_pushCachedKeychainToKVS;	// IMP=0x001000000001db79
- (id)_pushCachedKeychainToKVSForView:(id)arg1 recordID:(id)arg2;	// IMP=0x001000000001d67c
- (void)storeDERBackupInKVS:(id)arg1;	// IMP=0x001000000001d4b5
- (id)derDataFromDict:(id)arg1;	// IMP=0x001000000001d2aa
- (void)_removeCachedKeychain;	// IMP=0x001000000001d148
- (void)_storeVeeTwoBackupInKVS:(id)arg1 forViewName:(id)arg2 withKeyStore:(id)arg3 manifestDigest:(id)arg4 keybagDigest:(id)arg5;	// IMP=0x001000000001cc85
- (void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2;	// IMP=0x001000000001ca88
- (id)_getKeychainItemForKey:(id)arg1 status:(int *)arg2;	// IMP=0x001000000001c8ea
- (void)_removeKeychainItemForKey:(id)arg1;	// IMP=0x001000000001c78d
- (void)_saveKeychainItem:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001c5d4
- (id)_createBackupKeybagWithPassword:(id)arg1;	// IMP=0x001000000001c5cc
- (id)createiCloudRecoveryPasswordWithError:(id *)arg1;	// IMP=0x001000000004f6f3
- (id)createPlistFromDERData:(id)arg1;	// IMP=0x001000000004f67f
- (id)createDERDataFromPlist:(id)arg1;	// IMP=0x001000000004f608
- (_Bool)backupSliceKeybagHasRecoveryKey:(id)arg1;	// IMP=0x001000000004f5c0
- (id)createEncodedDirectBackupSliceKeybagFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f460
- (id)circleChangedNotification;	// IMP=0x001000000004f43d
- (id)currentViews;	// IMP=0x001000000004f3d7
- (id)allViews;	// IMP=0x001000000004f361
- (id)copyOSVersion:(id)arg1;	// IMP=0x001000000004f33a
- (id)copySerialNumber:(id)arg1;	// IMP=0x001000000004f323
- (id)createPeerInfoFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f2da
- (_Bool)registerRecoveryPublicKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f297
- (_Bool)registerSingleRecoverySecret:(id)arg1 iCDP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004f24e
- (id)copyEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f206
- (id)copyMyPeerWithNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f1c0
- (id)copyBackupKeyForNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f17a
- (id)copyBackupKey:(id)arg1;	// IMP=0x001000000004f16d
- (id)copyMyPeerIDWithError:(id *)arg1;	// IMP=0x001000000004f0e1
- (id)copyMyPeerID;	// IMP=0x001000000004f029
- (id)copyPeerID:(id)arg1;	// IMP=0x001000000004f009
- (id)copyMyPeerInfo:(id *)arg1;	// IMP=0x001000000004efc6
- (_Bool)backupWithChanges:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ef03
- (_Bool)backupSetConfirmedManifest:(id)arg1 digest:(id)arg2 manifest:(id)arg3 error:(id *)arg4;	// IMP=0x001000000004ed64
- (_Bool)backupWithRegisteredBackupViewWithError:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ec3f
- (_Bool)backupWithRegisteredBackupsWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004eb86
- (void)restoreBackupName:(id)arg1 peerID:(id)arg2 keybag:(id)arg3 password:(id)arg4 backup:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004ead6
- (id)kvs;	// IMP=0x001000000004ea5c
- (id)makeRecordCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051ae0
- (void)setPasscodeMetadata:(id)arg1 passphraseType:(int)arg2;	// IMP=0x001000000005197c
- (void)doEnableEscrowMultiICSCWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

