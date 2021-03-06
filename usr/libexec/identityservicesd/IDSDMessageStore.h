//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDatabase, NSRecursiveLock;
@protocol OS_dispatch_source;

@interface IDSDMessageStore : NSObject
{
    NSRecursiveLock *_recursiveLock;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_databaseCloseTimer;	// 16 = 0x10
    double _databaseLastUpdateTime;	// 24 = 0x18
    unsigned int _dataProtectionClass;	// 32 = 0x20
    IDSDatabase *_database;	// 40 = 0x28
}

+ (void)checkpointAndVacuumDBWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x00400000005496b0
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x00100000005491f0
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4;	// IMP=0x0010000000548de0
+ (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x00100000005489f0
+ (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x0010000000548680
+ (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x0010000000548310
+ (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x0010000000547fd0
+ (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x0010000000547cd0
+ (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x0010000000547c90
+ (id)largestEnquedMessagesAccountUUIDOverThreshold:(long long)arg1;	// IMP=0x0010000000547c30
+ (id)largestPayloadSizeAccountUUID;	// IMP=0x0010000000547870
+ (_Bool)databaseSizeBiggerThanThreshold:(long long)arg1;	// IMP=0x0010000000547600
+ (void)markOutgoingMessagesAsUnsentForDestination:(id)arg1;	// IMP=0x00100000005473a0
+ (void)markOutgoingMessagesAsUnsentIncludingClassD:(_Bool)arg1;	// IMP=0x0010000000547130
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x0010000000546d70
+ (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x0010000000546990
+ (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x00100000005465a0
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2;	// IMP=0x0010000000546260
+ (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00100000005460e0
+ (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x0010000000545ea0
+ (void)clearStatementCache;	// IMP=0x0010000000545b60
+ (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x0010000000545900
+ (void)deletePostponedMessages;	// IMP=0x00100000005446e0
+ (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x0010000000544310
+ (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x0010000000543fa0
+ (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x0010000000543d00
+ (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0010000000543a60
+ (id)unsentUrgentAccountUUIDsWithDataProtectionClass:(unsigned int)arg1 withMessageTypes:(id)arg2;	// IMP=0x0010000000543970
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withMessageTypes:(id)arg4;	// IMP=0x0010000000543870
+ (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00100000005437a0
+ (id)sharedInstanceForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000543720
+ (id)sharedInstance;	// IMP=0x0010000000543660
- (void).cxx_destruct;	// IMP=0x0020000000556260
@property(readonly, retain, nonatomic) IDSDatabase *database; // @synthesize database=_database;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x0010000000555ee0
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x0010000000555b70
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000555880
- (void)deleteDatabase;	// IMP=0x0010000000555820
- (void)closeDatabase;	// IMP=0x0010000000555750
- (void)_setDatabaseCloseTimer;	// IMP=0x00100000005554b0
- (void)_clearDatabaseCloseTimer;	// IMP=0x0010000000555440
- (void)__closeDatabase;	// IMP=0x0010000000555330
- (void)deleteExpiredIncomingMessagesOlderThan:(double)arg1 withLimit:(long long)arg2;	// IMP=0x00100000005551b0
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x0010000000555000
- (void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 classDDatabase:(id)arg3;	// IMP=0x0010000000554ab0
- (void)deletePostponedMessages:(id)arg1 classDDatabase:(id)arg2;	// IMP=0x0010000000554910
- (void)markAllOutgoingMessagesAsUnsentForLocalDestination:(id)arg1;	// IMP=0x00100000005547a0
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x0010000000554680
- (void)markOutgoingMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x00100000005544a0
- (void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 canSend:(_Bool)arg3 canBypassSimilarMessages:(_Bool)arg4 fromQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000552280
- (void)checkpointAndVacuumDB;	// IMP=0x0010000000552160
- (int)internalMigrationVersionOnDatabase;	// IMP=0x0010000000551fa0
- (void)updateInternalMigrationVersionOnDatabaseWithValue:(int)arg1;	// IMP=0x0010000000551e70
- (void)deleteAllMessagesWithAccountGUID:(id)arg1;	// IMP=0x0010000000551cc0
- (id)largestEnquedMessagesAmountAccountUUID;	// IMP=0x0010000000551a80
- (id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3;	// IMP=0x0010000000551710
- (id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1;	// IMP=0x0010000000551450
- (void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2;	// IMP=0x00100000005511a0
- (void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0010000000550ef0
- (id)duetIdentifiersOverrideForAccountWithGUID:(id)arg1 priority:(long long)arg2;	// IMP=0x0010000000550830
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5;	// IMP=0x0010000000550740
- (id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 messageTypes:(id)arg6;	// IMP=0x0010000000550600
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7 messageTypes:(id)arg8;	// IMP=0x0010000000550060
- (id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(_Bool)arg5 requireDuet:(_Bool)arg6 localDestinationDeviceID:(id)arg7;	// IMP=0x001000000054fb40
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(_Bool)arg3 localDestinationDeviceID:(id)arg4;	// IMP=0x001000000054fa80
- (id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3;	// IMP=0x001000000054f9e0
- (id)unsentUrgentAccountUUIDsForMessageTypes:(id)arg1;	// IMP=0x001000000054f700
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2 messageTypes:(id)arg3;	// IMP=0x001000000054f3e0
- (id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(_Bool)arg1 priority:(long long)arg2;	// IMP=0x001000000054f130
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 wantsPayload:(_Bool)arg5 messageType:(long long)arg6 success:(_Bool *)arg7;	// IMP=0x001000000054ece0
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 hardLimit:(long long)arg4;	// IMP=0x001000000054e8e0
- (id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3;	// IMP=0x001000000054e4d0
- (id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1;	// IMP=0x001000000054e260
- (id)allExpiredOutgoingMessages:(long long)arg1;	// IMP=0x001000000054dfa0
- (id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2;	// IMP=0x001000000054dc10
- (id)allOutgoingMessagesByGUID:(id)arg1;	// IMP=0x001000000054d8f0
- (id)largestPayloadSizeAccountUUID;	// IMP=0x001000000054d6b0
- (long long)databaseSizeInMB;	// IMP=0x001000000054d4b0
- (id)_createOutgoingMessageRecordsFromSQLRecords:(struct __CFArray *)arg1 includeMessagePayloads:(_Bool)arg2;	// IMP=0x001000000054ba80
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 dedupBehavior:(unsigned char)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x001000000054b920
- (void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 messageUUID:(id)arg4 messagePayload:(id)arg5 isLocal:(_Bool)arg6 dedupBehavior:(unsigned char)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000054ad40
- (id)_incomingMessageIdentifierForMessageUUID:(id)arg1 messagePayload:(id)arg2;	// IMP=0x001000000054abf0
- (id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 success:(_Bool *)arg3;	// IMP=0x001000000054a2b0
@property(readonly, nonatomic) unsigned int dataProtectionClass;
- (void)_performInitialHousekeeping;	// IMP=0x001000000054a110
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000549840
- (id)initWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000005497a0
- (id)init;	// IMP=0x0010000000549740
- (void);	// IMP=0x0010000000545d80

@end

