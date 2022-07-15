//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface FLSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    _Bool _shouldAutomaticallyMigrate;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x0040000000001876
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001784
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000163e
- (void).cxx_destruct;	// IMP=0x0020000000002fea
@property(nonatomic) _Bool shouldAutomaticallyMigrate; // @synthesize shouldAutomaticallyMigrate=_shouldAutomaticallyMigrate;
- (void)_unsafe_closeDatabase;	// IMP=0x0010000000002e9e
- (void)closeDatabase;	// IMP=0x0010000000002e32
- (void)_unsafe_wipeDatabase;	// IMP=0x0010000000002cf9
- (void)wipeDatabase;	// IMP=0x0010000000002bfd
- (int)_unsafe_createDataBase;	// IMP=0x001000000000297d
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x0010000000002768
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x001000000000252f
- (id)_currentDataBaseError;	// IMP=0x00100000000023c7
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x00100000000021e2
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0010000000002113
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000206a
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000001fb7
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0010000000001f14
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001dd9
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001c95
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001b8f
- (_Bool)performQuery:(id)arg1;	// IMP=0x0010000000001b7b
- (long long)performInsertQuery:(id)arg1;	// IMP=0x0010000000001b1f
- (int)_executeQuery:(id)arg1;	// IMP=0x00100000000019be
- (void)rollbackTransaction;	// IMP=0x00100000000019a5
- (void)commitTransaction;	// IMP=0x0010000000001967
- (void)openTransaction;	// IMP=0x001000000000194e
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00100000000018f7
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00100000000015c8

@end
