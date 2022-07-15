//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SQLiteConnection;
@protocol OS_dispatch_queue;

@interface SQLiteDatabase : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    NSHashTable *_migratedStores;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004d705
- (void)_reentrantSafePerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d68e
- (void)_readUsingSession:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d5b3
- (void)_performMigrationIfNeededForStore:(id)arg1;	// IMP=0x001000000004d3a3
- (void)_modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d2b5
- (void)verifyDatabaseIntegrity;	// IMP=0x001000000004d0f2
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x001000000004cf2a
- (_Bool)connectionNeedsResetForReopen:(id)arg1;	// IMP=0x001000000004cea5
- (void)readStore:(id)arg1 usingSession:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cd43
- (void)modifyStore:(id)arg1 usingTransactionClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cc41
- (void)modifyStore:(id)arg1 usingTransaction:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cb07
- (void)dealloc;	// IMP=0x001000000004ca7e
- (id)initWithConnectionOptions:(id)arg1;	// IMP=0x001000000004ca00
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000004c8f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
