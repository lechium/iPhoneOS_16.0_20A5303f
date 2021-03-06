//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKDFetchRecordZonesOperation
{
    _Bool _isFetchAllRecordZonesOperation;	// 8 = 0x8
    _Bool _shouldRetry;	// 9 = 0x9
    _Bool _onlyFetchPCSInfo;	// 10 = 0xa
    _Bool _ignorePCSFailures;	// 11 = 0xb
    CDUnknownBlockType _recordZoneFetchedProgressBlock;	// 16 = 0x10
    NSArray *_recordZoneIDs;	// 24 = 0x18
    NSMutableDictionary *_zonesToSaveForPCSUpdateByZoneID;	// 32 = 0x20
    NSMutableArray *_zoneIDsNeedingPCSUpdateRetry;	// 40 = 0x28
    NSMutableDictionary *_pcsUpdateErrorsByZoneID;	// 48 = 0x30
    long long _numZoneSaveAttempts;	// 56 = 0x38
    NSMutableSet *_zoneIDsNeedingDugongKeyRoll;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002cb5f5
@property(nonatomic) _Bool ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(retain, nonatomic) NSMutableSet *zoneIDsNeedingDugongKeyRoll; // @synthesize zoneIDsNeedingDugongKeyRoll=_zoneIDsNeedingDugongKeyRoll;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(nonatomic) long long numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID; // @synthesize pcsUpdateErrorsByZoneID=_pcsUpdateErrorsByZoneID;
@property(retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry; // @synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID; // @synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID;
@property(nonatomic) _Bool isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedProgressBlock; // @synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002cb412
- (void)main;	// IMP=0x00000000002cb39a
- (void)checkPCSIdentity;	// IMP=0x00000000002ca904
- (void)fetchZonesFromServer:(id)arg1;	// IMP=0x00000000002c9cb7
- (void)fetchZonesFromServer;	// IMP=0x00000000002c9ca3
- (int)operationType;	// IMP=0x00000000002c9c98
- (void)_cachePCSOnRecordZone:(id)arg1;	// IMP=0x00000000002c9bbf
- (void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000000002c8ecb
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;	// IMP=0x00000000002c8850
- (void)_handleAnonymousZoneDataObjects:(id)arg1 responsecode:(id)arg2;	// IMP=0x00000000002c8242
- (void)saveZonesWithUpdatedZonePCS;	// IMP=0x00000000002c7d01
- (void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2;	// IMP=0x00000000002c79f2
- (_Bool)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c5202
- (void)_locked_callbackForRecordZone:(id)arg1 zoneID:(id)arg2 error:(id)arg3;	// IMP=0x00000000002c4f4f
- (void)_sendErrorForFailedZones;	// IMP=0x00000000002c4988
- (id)relevantZoneIDs;	// IMP=0x00000000002c4973
- (id)activityCreate;	// IMP=0x00000000002c494a
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000002c48f4
- (_Bool)makeStateTransition;	// IMP=0x00000000002c4645
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002c4500

// Remaining properties
@property(retain, nonatomic) id <CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

