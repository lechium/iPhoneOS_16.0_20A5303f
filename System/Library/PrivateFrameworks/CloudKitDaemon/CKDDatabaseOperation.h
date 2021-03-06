//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@interface CKDDatabaseOperation : CKDOperation
{
    long long _databaseScope;	// 8 = 0x8
}

@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000002cc2d9
- (id)analyticsPayload;	// IMP=0x00000000002cc234
- (id)CKStatusReportProperties;	// IMP=0x00000000002cc16c
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 container:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002cc089
- (id)activityCreate;	// IMP=0x00000000002cc060
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002cbd26
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;	// IMP=0x00000000002e392e
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;	// IMP=0x00000000002e3754
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;	// IMP=0x00000000002e357a
- (void)_encryptMergeableDeltas:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000338e5c

@end

