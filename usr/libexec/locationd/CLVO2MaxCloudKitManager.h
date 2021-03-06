//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CKContainer, CKRecordZoneID, CKSyncEngine, CLTimer, NSString;

@interface CLVO2MaxCloudKitManager : CLIntersiloService
{
    struct shared_ptr<CLVO2MaxInputCache> fInputCache;	// 8 = 0x8
    struct shared_ptr<CLVO2MaxInputStore> fInputStore;	// 24 = 0x18
    struct unique_ptr<CLVO2MaxStagingOutputStore, std::default_delete<CLVO2MaxStagingOutputStore>> fStagingOutputStore;	// 40 = 0x28
    struct unique_ptr<CLVO2MaxRetrocomputeRecorderDb, std::default_delete<CLVO2MaxRetrocomputeRecorderDb>> fRetrocomputeDb;	// 48 = 0x30
    _Bool fFetchChangesForInputZone;	// 56 = 0x38
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> fDataProtectionClient;	// 64 = 0x40
    _Bool fDeviceUnlocked;	// 72 = 0x48
    int fMaxSessionsForUploadThrottling;	// 76 = 0x4c
    double fMinTimeBetweenForcedFetches;	// 80 = 0x50
    CKRecordZoneID *fOutputZoneID;	// 88 = 0x58
    CKRecordZoneID *fInputZoneID;	// 96 = 0x60
    struct CLVO2MaxCloudKitStats fDailyStats;	// 104 = 0x68
    CLTimer *fDailyStatsTimer;	// 168 = 0xa8
    double fDailyStatsTimerInterval;	// 176 = 0xb0
    double fDailyStatsStartTime;	// 184 = 0xb8
    CKContainer *_container;	// 192 = 0xc0
    CKSyncEngine *_syncEngine;	// 200 = 0xc8
}

+ (_Bool)isSupported;	// IMP=0x002000000012b3cf
+ (id)getSilo;	// IMP=0x001000000012b336
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b31d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000012b2c0
- (id).cxx_construct;	// IMP=0x0020000000133704
- (void).cxx_destruct;	// IMP=0x001000000013368a
@property(readonly, nonatomic) CKSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x0010000000133520
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000133428
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x0010000000133183
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x0010000000132ee6
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000132d79
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x0010000000132c97
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x00100000001329ad
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x0010000000132712
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x001000000013231b
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x001000000013220e
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x0010000000132101
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;	// IMP=0x001000000013201f
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x0010000000131f27
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x0010000000131dbf
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x0010000000131cb2
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;	// IMP=0x0010000000131bd0
- (void)receiveVO2MaxCloudKitDailyStatsFromWatch:(id)arg1;	// IMP=0x0010000000131223
- (void)resetDailyStats;	// IMP=0x00100000001311e4
- (void)stopSyncing:(_Bool)arg1;	// IMP=0x0010000000131182
- (void)handleZonePurge:(id)arg1;	// IMP=0x0010000000130fbe
- (void)handleZoneDeleted:(id)arg1;	// IMP=0x0010000000130dc2
- (void)handleZoneNotFound:(id)arg1;	// IMP=0x0010000000130b77
- (void)handleUnknownItem:(id)arg1;	// IMP=0x00100000001309a7
- (void)handleServerRecordChanged:(id)arg1;	// IMP=0x0010000000130709
- (void)handleFetchedInputRecord:(id)arg1;	// IMP=0x0010000000130477
- (void)updateInputSystemFields:(id)arg1 inputRecord:(id)arg2;	// IMP=0x0010000000130118
- (id)createCKRecordForInput:(id)arg1;	// IMP=0x001000000012fb7c
- (void)handleFetchedOutputRecord:(id)arg1;	// IMP=0x001000000012f8fe
- (void)updateOutputSystemFields:(id)arg1 outputRecord:(id)arg2;	// IMP=0x000000000012f59f
- (id)createCKRecordForOutput:(id)arg1;	// IMP=0x001000000012f026
- (id)getSystemFieldsFromCKRecord:(id)arg1;	// IMP=0x001000000012efb3
- (void)bulkUploadRecordIDsShouldReupload:(_Bool)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3 shouldThrottle:(_Bool)arg4;	// IMP=0x001000000012e8ae
- (void)addRecordIDsForSessionId:(id)arg1 shouldUploadToOutputZone:(_Bool)arg2 shouldUploadToInputZone:(_Bool)arg3;	// IMP=0x001000000012e536
- (void)deleteZone:(id)arg1;	// IMP=0x001000000012e405
- (void)createVO2MaxInputZone;	// IMP=0x001000000012e2b3
- (void)createVO2MaxOutputZone;	// IMP=0x001000000012e161
- (void)initializeSyncEngine;	// IMP=0x001000000012ddab
- (struct VO2MaxCloudKitSyncEngineMetadata)getCKSyncEngineMetadata;	// IMP=0x001000000012dc7c
- (void)updateDeviceUnlocked:(_Bool)arg1;	// IMP=0x001000000012db86
- (id)getUserRecordIDName;	// IMP=0x001000000012dac6
- (void)setUserRecordIDName:(id)arg1;	// IMP=0x001000000012d9a2
- (_Bool)shouldKeepLocalDataOnAccountChange;	// IMP=0x001000000012d906
- (void)validateAccount;	// IMP=0x001000000012d0a1
- (void)cloudKitAccountDidChange:(id)arg1;	// IMP=0x001000000012d08f
- (void)handleSyncUpload:(id)arg1;	// IMP=0x001000000012cb2b
- (void)onSyncActivity:(id)arg1;	// IMP=0x001000000012c956
- (void)resetSyncActivity:(id)arg1 withDelay:(long long)arg2;	// IMP=0x001000000012c6ce
- (void)setUpSyncActivity;	// IMP=0x001000000012bf33
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x001000000012bed2
- (void)saveRetrocomputedOutputs;	// IMP=0x001000000012bcaf
- (void)saveInputsAndOutputsForSessionId:(id)arg1;	// IMP=0x001000000012bc67
- (void)endService;	// IMP=0x001000000012bafe
- (void)beginService;	// IMP=0x001000000012b423
- (id)init;	// IMP=0x001000000012b392

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

