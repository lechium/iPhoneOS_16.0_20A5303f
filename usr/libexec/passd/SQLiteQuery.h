//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase, SQLiteQueryDescriptor;

@interface SQLiteQuery : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
    SQLiteQueryDescriptor *_descriptor;	// 16 = 0x10
}

- (id)_newSelectSQLOnProperties:(id)arg1;	// IMP=0x002000000008b061
- (id)_newSelectSQLWithProperties:(id)arg1;	// IMP=0x001000000008aea9
@property(readonly) SQLiteQueryDescriptor *queryDescriptor;
- (void)enumerateProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000008acce
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000008aa51
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a9db
- (_Bool)deleteAllEntities;	// IMP=0x001000000008a833
@property(readonly) SQLiteDatabase *database;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;	// IMP=0x001000000008a474
@property(readonly) _Bool exists;
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;	// IMP=0x0010000000089f87
- (id)copyEntityIdentifiers;	// IMP=0x0010000000089eb0
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x0010000000089e48
- (void)dealloc;	// IMP=0x0010000000089dfe
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;	// IMP=0x0010000000089d93

@end
