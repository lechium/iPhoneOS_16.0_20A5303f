//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecordZoneID, NSArray, NSData, NSMutableArray, NSString;

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_changedZoneIDs;	// 8 = 0x8
    NSMutableArray *_deletedZoneIDs;	// 16 = 0x10
    NSMutableArray *_purgedZoneIDs;	// 24 = 0x18
    NSMutableArray *_encryptedDataResetDeletedZoneIDs;	// 32 = 0x20
    unsigned long long _resultsLimit;	// 40 = 0x28
    NSData *_serverChangeTokenData;	// 48 = 0x30
    long long _status;	// 56 = 0x38
    CDUnknownBlockType _zoneChangedBlock;	// 64 = 0x40
    CDUnknownBlockType _zoneDeletedBlock;	// 72 = 0x48
    CDUnknownBlockType _zonePurgedBlock;	// 80 = 0x50
    CDUnknownBlockType _zoneDeletedDueToEncryptedDataResetBlock;	// 88 = 0x58
    CDUnknownBlockType _anonymousShareProcessingBlock;	// 96 = 0x60
    CKRecordZoneID *_recordZoneID;	// 104 = 0x68
    NSData *_previousServerChangeTokenData;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000254636
@property(retain, nonatomic) NSData *previousServerChangeTokenData; // @synthesize previousServerChangeTokenData=_previousServerChangeTokenData;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareProcessingBlock; // @synthesize anonymousShareProcessingBlock=_anonymousShareProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneDeletedDueToEncryptedDataResetBlock; // @synthesize zoneDeletedDueToEncryptedDataResetBlock=_zoneDeletedDueToEncryptedDataResetBlock;
@property(copy, nonatomic) CDUnknownBlockType zonePurgedBlock; // @synthesize zonePurgedBlock=_zonePurgedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneDeletedBlock; // @synthesize zoneDeletedBlock=_zoneDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneChangedBlock; // @synthesize zoneChangedBlock=_zoneChangedBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSArray *encryptedDataResetDeletedZoneIDs; // @synthesize encryptedDataResetDeletedZoneIDs=_encryptedDataResetDeletedZoneIDs;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *purgedZoneIDs; // @synthesize purgedZoneIDs=_purgedZoneIDs;
@property(readonly, nonatomic) NSArray *deletedZoneIDs; // @synthesize deletedZoneIDs=_deletedZoneIDs;
@property(readonly, nonatomic) NSArray *changedZoneIDs; // @synthesize changedZoneIDs=_changedZoneIDs;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002538c4
- (id)generateRequestOperations;	// IMP=0x00000000002536c1
- (id)requestOperationClasses;	// IMP=0x0000000000253655
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x000000000025364d
- (_Bool)allowsAnonymousAccount;	// IMP=0x0000000000253633
- (id)initWithOperation:(id)arg1 previousServerChangeTokenData:(id)arg2;	// IMP=0x0000000000253529

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
