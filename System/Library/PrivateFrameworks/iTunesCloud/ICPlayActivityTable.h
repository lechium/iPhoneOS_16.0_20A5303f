//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface ICPlayActivityTable : NSObject
{
    ICSQLiteConnection *_databaseConnection;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x006000000011c03a
+ (id)_propertiesDatabaseTableName;	// IMP=0x006000000011c02d
+ (id)_eventsDatabaseTableName;	// IMP=0x006000000011c020
+ (id)_defaultDatabasePath;	// IMP=0x006000000011bf90
+ (void)_migrateDatabaseFiles;	// IMP=0x006000000011bd5e
- (void).cxx_destruct;	// IMP=0x000000000011b454
- (id)_valueForDatabasePropertyKey:(id)arg1;	// IMP=0x000000000011b25a
- (_Bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;	// IMP=0x000000000011af64
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000011ad6a
- (_Bool)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(_Bool)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id *)arg9;	// IMP=0x000000000011a7e6
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;	// IMP=0x000000000011a72e
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;	// IMP=0x000000000011a676
- (_Bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;	// IMP=0x000000000011a531
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id *)arg8;	// IMP=0x000000000011a4f4
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id *)arg7;	// IMP=0x000000000011a4b7
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011a428
- (_Bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;	// IMP=0x000000000011a308
@property(readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;
@property(nonatomic) unsigned long long currentEventsRevision;
- (_Bool)_removeDatabaseReturningError:(id *)arg1;	// IMP=0x0000000000119ec1
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0000000000119959
- (id)init;	// IMP=0x0000000000119945

@end
