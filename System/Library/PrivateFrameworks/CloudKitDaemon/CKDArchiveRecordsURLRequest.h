//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _recordArchivedBlock;	// 8 = 0x8
    NSMutableDictionary *_zoneIDToRecordIDs;	// 16 = 0x10
    NSMutableDictionary *_recordZoneIDByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000160f49
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // @synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000160c16
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000016094d
- (id)generateRequestOperations;	// IMP=0x000000000016054c
- (id)requestOperationClasses;	// IMP=0x00000000001604e0
- (id)zoneIDsToLock;	// IMP=0x0000000000160490
- (id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2;	// IMP=0x00000000001601d5

@end
