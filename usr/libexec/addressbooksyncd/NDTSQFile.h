//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTSQKeyValueStore, NSHashTable, NSMutableOrderedSet, NSString;
@protocol NDTSQFileDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDTSQFile : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    NSMutableOrderedSet *_statementCache;	// 16 = 0x10
    NDTSQKeyValueStore *_instanceVersions;	// 24 = 0x18
    int _readFd;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_readSource;	// 40 = 0x28
    struct os_unfair_lock_s _memberSchemasLock;	// 48 = 0x30
    NSHashTable *_memberSchemas;	// 56 = 0x38
    struct sqlite3 *_db;	// 64 = 0x40
    NSString *_path;	// 72 = 0x48
    id <NDTSQFileDelegate> _delegate;	// 80 = 0x50
    NSString *_pathTemplate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000013dce
@property(retain, nonatomic) NSString *pathTemplate; // @synthesize pathTemplate=_pathTemplate;
@property(nonatomic) __weak id <NDTSQFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void);	// IMP=0x0010000000013d7b
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (long long)changes;	// IMP=0x0010000000013c9a
- (void)rollback;	// IMP=0x0010000000013bbc
- (void)commit;	// IMP=0x0010000000013ade
- (void)begin;	// IMP=0x0010000000013a00
- (void)_setInstance:(id)arg1 version:(long long)arg2;	// IMP=0x00100000000139e1
- (long long)_instanceVersion:(id)arg1;	// IMP=0x00100000000139c6
- (void)_parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013887
- (id)_loadCache:(id)arg1 sqlErr:(int *)arg2;	// IMP=0x0010000000013649
- (void)parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013570
- (void)_executeSql:(id)arg1;	// IMP=0x0010000000013477
- (void)executeSql:(id)arg1;	// IMP=0x00100000000133cd
- (id)_makeSqlErrorReasonString:(id)arg1;	// IMP=0x0010000000013361
- (void)addSchema:(id)arg1;	// IMP=0x001000000001330e
- (void)_addSchema:(id)arg1;	// IMP=0x0010000000013211
- (void)_databaseChangedExternally;	// IMP=0x0010000000013057
- (void)_watchWalFile;	// IMP=0x0010000000012de4
- (void)_prepDatabase;	// IMP=0x0010000000012d7d
- (void)_openDatabase;	// IMP=0x0010000000012cc1
- (void)_createParentDirectory;	// IMP=0x0010000000012a39
- (void)_recreatePath;	// IMP=0x00100000000129aa
- (void)_bootstrap;	// IMP=0x0010000000012926
- (void)_newPath;	// IMP=0x001000000001279f
- (id)initWithPath:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000126ba
- (id)initWithPath:(id)arg1;	// IMP=0x00100000000125df
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000012589

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

