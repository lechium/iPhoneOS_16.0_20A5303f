//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDPCSKeySyncCoreAnalytics, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation
{
    _Bool _hasZoneSaves;	// 8 = 0x8
    _Bool _hasZoneDeletes;	// 9 = 0x9
    _Bool _allowDefaultZoneSave;	// 10 = 0xa
    _Bool _markZonesAsUserPurged;	// 11 = 0xb
    _Bool _dontFetchFromServer;	// 12 = 0xc
    _Bool _didSynchronizeUserKeyRegistry;	// 13 = 0xd
    int _numZoneSaveAttempts;	// 16 = 0x10
    CDUnknownBlockType _saveCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _deleteCompletionBlock;	// 32 = 0x20
    NSMutableArray *_recordZonesToSave;	// 40 = 0x28
    NSArray *_recordZoneIDsToDelete;	// 48 = 0x30
    NSMutableDictionary *_recordZonesByZoneID;	// 56 = 0x38
    NSMutableDictionary *_retryableErrorsByZoneID;	// 64 = 0x40
    long long _maxZoneSaveAttempts;	// 72 = 0x48
    NSMutableArray *_zonesWaitingOnKeyRegistrySync;	// 80 = 0x50
    CKDPCSKeySyncCoreAnalytics *_keySyncAnalytics;	// 88 = 0x58
}

+ (long long)isPredominatelyDownload;	// IMP=0x00600000000f5456
- (void).cxx_destruct;	// IMP=0x00000000000f5b91
@property(retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // @synthesize keySyncAnalytics=_keySyncAnalytics;
@property(retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync; // @synthesize zonesWaitingOnKeyRegistrySync=_zonesWaitingOnKeyRegistrySync;
@property(nonatomic) _Bool didSynchronizeUserKeyRegistry; // @synthesize didSynchronizeUserKeyRegistry=_didSynchronizeUserKeyRegistry;
@property(nonatomic) _Bool dontFetchFromServer; // @synthesize dontFetchFromServer=_dontFetchFromServer;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(nonatomic) _Bool allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID; // @synthesize retryableErrorsByZoneID=_retryableErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000f5930
- (void)main;	// IMP=0x00000000000f5880
- (void)_checkAndPrepareZones;	// IMP=0x00000000000f545e
- (void)_fetchPCSDataForZonesFromServer:(_Bool)arg1;	// IMP=0x00000000000f4e8c
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x00000000000f4130
- (void)_createNewPCSForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2f57
- (_Bool)isOperationType:(int)arg1;	// IMP=0x00000000000f2f24
- (int)operationType;	// IMP=0x00000000000f2efc
- (_Bool)_saveZonesToServer;	// IMP=0x00000000000f255f
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;	// IMP=0x00000000000f20d5
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3 expirationDate:(id)arg4 expired:(_Bool)arg5;	// IMP=0x00000000000f0da0
- (void)_sendErrorForFailedZones;	// IMP=0x00000000000f0678
- (void)_sendCoreAnalyticsEventForKeySync;	// IMP=0x00000000000f0441
- (void)_synchronizeUserKeyRegistryIfNeeded;	// IMP=0x00000000000efd02
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000000efcfa
- (id)relevantZoneIDs;	// IMP=0x00000000000efc1b
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000000efbc5
- (id)activityCreate;	// IMP=0x00000000000efb9c
- (_Bool)makeStateTransition;	// IMP=0x00000000000ef964
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000ef590

// Remaining properties
@property(retain, nonatomic) id <CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

